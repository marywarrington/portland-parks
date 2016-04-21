<?php
/**
 * @file
 * meetups.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function meetups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_meetups:meetups.
  $menu_links['main-menu_meetups:meetups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'meetups',
    'router_path' => 'meetups',
    'link_title' => 'Meetups',
    'options' => array(
      'identifier' => 'main-menu_meetups:meetups',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Meetups');

  return $menu_links;
}
