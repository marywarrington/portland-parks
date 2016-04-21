<?php
/**
 * @file
 * meetups.features.inc
 */

/**
 * Implements hook_views_api().
 */
function meetups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function meetups_node_info() {
  $items = array(
    'park_meetups' => array(
      'name' => t('Park Meetups'),
      'base' => 'node_content',
      'description' => t('Use this to post upcoming meetups to the meetup page!'),
      'has_title' => '1',
      'title_label' => t('Meetup Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
