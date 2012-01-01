<?php

/**
 * @file
 * Customize the display of a complete webform.
 *
 * This file may be renamed "webform-form-[nid].tpl.php" to target a specific
 * webform on your site. Or you can leave it "webform-form.tpl.php" to affect
 * all webforms on your site.
 *
 * Available variables:
 * - $form: The complete form array.
 * - $nid: The node ID of the Webform.
 *
 * The $form array contains two main pieces:
 * - $form['submitted']: The main content of the user-created form.
 * - $form['details']: Internal information stored by Webform.
 */
?>
<?php
  drupal_add_css(drupal_get_path('theme', 'ucl_omega_html5') . '/css/webform-form-1586.css');

  // If editing or viewing submissions, display the navigation at the top.
  if (isset($form['submission_info']) || isset($form['navigation'])) {
    print drupal_render($form['navigation']);
    print drupal_render($form['submission_info']);
  }

  // Print troubleshooting output.
  if (function_exists('dpm')) {
//    drupal_set_message('Submitted values:');
//    dpm($form['submitted']);
  }

  // Print out the main part of the form.
  // Feel free to break this up and move the pieces within the array.

  // Mad-libs style form
//  $form['submitted']['email_address']['#field_prefix'] = t('by email:');
//  $form['submitted']['email_address']['#field_suffix'] = t(',');

  // Select all Sample Request list options by default
  foreach ($form['submitted']['requested_items']['#options'] as $id => $title) {
    $form['submitted']['requested_items'][$id]['#checked'] = TRUE;
  }
  print drupal_render($form['submitted']);

  // Always print out the entire $form. This renders the remaining pieces of the
  // form that haven't yet been rendered above.
  print drupal_render_children($form);

  // Print out the navigation again at the bottom.
  if (isset($form['submission_info']) || isset($form['navigation'])) {
    unset($form['navigation']['#printed']);
    print drupal_render($form['navigation']);
  }
