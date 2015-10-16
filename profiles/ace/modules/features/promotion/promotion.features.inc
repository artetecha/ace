<?php
/**
 * @file
 * promotion.features.inc
 */

/**
 * Implements hook_node_info().
 */
function promotion_node_info() {
  $items = array(
    'promotion' => array(
      'name' => t('Promotion'),
      'base' => 'node_content',
      'description' => t('Promotion content type with title, image and body text'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
