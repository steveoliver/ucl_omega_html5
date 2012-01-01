<?php
/**
* Implements hook_skinr_skin_plugin_info().
*/
function ucl_omega_html5_skinr_skin_styles_info() {
  $skins['ucl_omega_html5_fg_color'] = array(
    'title' => t('Foreground color'),
    'type' => 'select',
    'attached' => array('css' => array('colors.css')),
    'default status' => 1,
    'group' => 'typography',
    'options' => array(
      'fg_black' => array('title' => t('Black'), 'class' => array('fg-black')),
      'fg_dark' => array('title' => t('Dark'), 'class' => array('fg-dark')),
      'fg_light' => array('title' => t('Light'), 'class' => array('fg-light')),
      'fg_white' => array('title' => t('White'), 'class' => array('fg-white')),
    ),
  );
  $skins['ucl_omega_html5_bg_color'] = array(
    'title' => t('Background color'),
    'type' => 'select',
    'attached' => array('css' => array('colors.css')),
    'default status' => 1,
    'group' => 'typography',
    'options' => array(
      'bg_black' => array('title' => t('Black'), 'class' => array('bg-black')),
      'bg_dark' => array('title' => t('Dark'), 'class' => array('bg-dark')),
      'bg_light' => array('title' => t('Light'), 'class' => array('bg-light')),
      'bg_white' => array('title' => t('White'), 'class' => array('bg-white')),
    ),
  );
  $skins['ucl_omega_html5_padding'] = array(
    'title' => t('Padding'),
    'type' => 'checkboxes',
    'attached' => array('css' => array('general.css')),
    'default status' => 1,
    'group' => 'general',
    'options' => array(
      'min_padding' => array('title' => t('Minimal padding'), 'class' => array('min-padding'))
    ),
  );
  $skins['ucl_omega_html5_align'] = array(
    'title' => t('Alignment'),
    'type' => 'radios',
    'attached' => array('css' => array('general.css')),
    'default status' => 1,
    'group' => 'general',
    'options' => array(
      'align_right' => array('title' => t('Right align'), 'class' => array('align-right'))
    ),
  );
  $skins['ucl_omega_html5_list_style_types'] = array(
    'title' => t('List styles'),
    'type' => 'radios',
    'attached' => array('css' => array('general.css')),
    'default status' => 1,
    'group' => 'general',
    'options' => array(
      'list_style_type_none' => array('title' => t('No style'), 'class' => array('list-style-type-none')),
    ),
  );
  $skins['ucl_omega_html5_list_displays'] = array(
    'title' => t('List displays'),
    'type' => 'radios',
    'attached' => array('css' => array('general.css')),
    'default status' => 1,
    'group' => 'general',
    'options' => array(
      'list_display_inline' => array('title' => t('Display inline'), 'class' => array('list-display-inline')),
    ),
  );
  $skins['ucl_omega_html5_border'] = array(
    'title' => t('Border'),
    'type' => 'checkboxes',
    'attached' => array('css' => array('box.css')),
    'default status' => 1,
    'group' => 'box',
    'options' => array(
      'thin_light' => array('title' => t('Thin light border'), 'class' => array('border-light')),
//      'light_bg' => array('title' => t('Light background color'), 'class' => array('light-bg')),
    ),
  );
  $skins['ucl_omega_html5_shadow'] = array(
    'title' => t('Shadows'),
    'type' => 'radios',
    'attached' => array('css' => array('box.css')),
    'default status' => 1,
    'group' => 'box',
    'options' => array(
      'shadow_light' => array('title' => t('Light'), 'class' => array('shadow-light')),
      'shadow_medium' => array('title' => t('Medium'), 'class' => array('shadow-medium')),
      'shadow_dark' => array('title' => t('Dark'), 'class' => array('shadow-dark')),
    ),
  );
  return $skins;
}