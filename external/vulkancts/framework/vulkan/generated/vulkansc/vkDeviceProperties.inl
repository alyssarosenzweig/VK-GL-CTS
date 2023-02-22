/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 * This file was generated by /scripts/gen_framework.py
 */

#include "vkDeviceProperties.hpp"

namespace vk
{
#define DECL_DRIVER_EXTENSION_NAME "core_property"
#define DECL_ID_EXTENSION_NAME "core_property"
#define DECL_MULTIVIEW_EXTENSION_NAME "core_property"
#define DECL_SUBGROUP_EXTENSION_NAME "core_property"
#define DECL_POINT_CLIPPING_EXTENSION_NAME "core_property"
#define DECL_PROTECTED_MEMORY_EXTENSION_NAME "core_property"
#define DECL_SAMPLER_FILTER_MINMAX_EXTENSION_NAME "core_property"
#define DECL_MAINTENANCE_3_EXTENSION_NAME "core_property"
#define DECL_FLOAT_CONTROLS_EXTENSION_NAME "core_property"
#define DECL_DESCRIPTOR_INDEXING_EXTENSION_NAME "core_property"
#define DECL_TIMELINE_SEMAPHORE_EXTENSION_NAME "core_property"
#define DECL_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME "core_property"
#define DECL_VULKAN_SC_1_0_EXTENSION_NAME "core_property"


template<> void initPropertyFromBlob<VkPhysicalDeviceDriverProperties>(VkPhysicalDeviceDriverProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.driverID = allPropertiesBlobs.vk12.driverID;
	memcpy(propertyType.driverName, allPropertiesBlobs.vk12.driverName, sizeof(char) * VK_MAX_DRIVER_NAME_SIZE);
	memcpy(propertyType.driverInfo, allPropertiesBlobs.vk12.driverInfo, sizeof(char) * VK_MAX_DRIVER_INFO_SIZE);
	propertyType.conformanceVersion = allPropertiesBlobs.vk12.conformanceVersion;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceIDProperties>(VkPhysicalDeviceIDProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	memcpy(propertyType.deviceUUID, allPropertiesBlobs.vk11.deviceUUID, sizeof(uint8_t) * VK_UUID_SIZE);
	memcpy(propertyType.driverUUID, allPropertiesBlobs.vk11.driverUUID, sizeof(uint8_t) * VK_UUID_SIZE);
	memcpy(propertyType.deviceLUID, allPropertiesBlobs.vk11.deviceLUID, sizeof(uint8_t) * VK_LUID_SIZE);
	propertyType.deviceNodeMask = allPropertiesBlobs.vk11.deviceNodeMask;
	propertyType.deviceLUIDValid = allPropertiesBlobs.vk11.deviceLUIDValid;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceMultiviewProperties>(VkPhysicalDeviceMultiviewProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.maxMultiviewViewCount = allPropertiesBlobs.vk11.maxMultiviewViewCount;
	propertyType.maxMultiviewInstanceIndex = allPropertiesBlobs.vk11.maxMultiviewInstanceIndex;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceSubgroupProperties>(VkPhysicalDeviceSubgroupProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.subgroupSize = allPropertiesBlobs.vk11.subgroupSize;
	propertyType.supportedStages = allPropertiesBlobs.vk11.subgroupSupportedStages;
	propertyType.supportedOperations = allPropertiesBlobs.vk11.subgroupSupportedOperations;
	propertyType.quadOperationsInAllStages = allPropertiesBlobs.vk11.subgroupQuadOperationsInAllStages;
}
template<> void initPropertyFromBlob<VkPhysicalDevicePointClippingProperties>(VkPhysicalDevicePointClippingProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.pointClippingBehavior = allPropertiesBlobs.vk11.pointClippingBehavior;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceProtectedMemoryProperties>(VkPhysicalDeviceProtectedMemoryProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.protectedNoFault = allPropertiesBlobs.vk11.protectedNoFault;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceSamplerFilterMinmaxProperties>(VkPhysicalDeviceSamplerFilterMinmaxProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.filterMinmaxSingleComponentFormats = allPropertiesBlobs.vk12.filterMinmaxSingleComponentFormats;
	propertyType.filterMinmaxImageComponentMapping = allPropertiesBlobs.vk12.filterMinmaxImageComponentMapping;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceMaintenance3Properties>(VkPhysicalDeviceMaintenance3Properties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.maxPerSetDescriptors = allPropertiesBlobs.vk11.maxPerSetDescriptors;
	propertyType.maxMemoryAllocationSize = allPropertiesBlobs.vk11.maxMemoryAllocationSize;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceFloatControlsProperties>(VkPhysicalDeviceFloatControlsProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.denormBehaviorIndependence = allPropertiesBlobs.vk12.denormBehaviorIndependence;
	propertyType.roundingModeIndependence = allPropertiesBlobs.vk12.roundingModeIndependence;
	propertyType.shaderSignedZeroInfNanPreserveFloat16 = allPropertiesBlobs.vk12.shaderSignedZeroInfNanPreserveFloat16;
	propertyType.shaderSignedZeroInfNanPreserveFloat32 = allPropertiesBlobs.vk12.shaderSignedZeroInfNanPreserveFloat32;
	propertyType.shaderSignedZeroInfNanPreserveFloat64 = allPropertiesBlobs.vk12.shaderSignedZeroInfNanPreserveFloat64;
	propertyType.shaderDenormPreserveFloat16 = allPropertiesBlobs.vk12.shaderDenormPreserveFloat16;
	propertyType.shaderDenormPreserveFloat32 = allPropertiesBlobs.vk12.shaderDenormPreserveFloat32;
	propertyType.shaderDenormPreserveFloat64 = allPropertiesBlobs.vk12.shaderDenormPreserveFloat64;
	propertyType.shaderDenormFlushToZeroFloat16 = allPropertiesBlobs.vk12.shaderDenormFlushToZeroFloat16;
	propertyType.shaderDenormFlushToZeroFloat32 = allPropertiesBlobs.vk12.shaderDenormFlushToZeroFloat32;
	propertyType.shaderDenormFlushToZeroFloat64 = allPropertiesBlobs.vk12.shaderDenormFlushToZeroFloat64;
	propertyType.shaderRoundingModeRTEFloat16 = allPropertiesBlobs.vk12.shaderRoundingModeRTEFloat16;
	propertyType.shaderRoundingModeRTEFloat32 = allPropertiesBlobs.vk12.shaderRoundingModeRTEFloat32;
	propertyType.shaderRoundingModeRTEFloat64 = allPropertiesBlobs.vk12.shaderRoundingModeRTEFloat64;
	propertyType.shaderRoundingModeRTZFloat16 = allPropertiesBlobs.vk12.shaderRoundingModeRTZFloat16;
	propertyType.shaderRoundingModeRTZFloat32 = allPropertiesBlobs.vk12.shaderRoundingModeRTZFloat32;
	propertyType.shaderRoundingModeRTZFloat64 = allPropertiesBlobs.vk12.shaderRoundingModeRTZFloat64;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceDescriptorIndexingProperties>(VkPhysicalDeviceDescriptorIndexingProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.maxUpdateAfterBindDescriptorsInAllPools = allPropertiesBlobs.vk12.maxUpdateAfterBindDescriptorsInAllPools;
	propertyType.shaderUniformBufferArrayNonUniformIndexingNative = allPropertiesBlobs.vk12.shaderUniformBufferArrayNonUniformIndexingNative;
	propertyType.shaderSampledImageArrayNonUniformIndexingNative = allPropertiesBlobs.vk12.shaderSampledImageArrayNonUniformIndexingNative;
	propertyType.shaderStorageBufferArrayNonUniformIndexingNative = allPropertiesBlobs.vk12.shaderStorageBufferArrayNonUniformIndexingNative;
	propertyType.shaderStorageImageArrayNonUniformIndexingNative = allPropertiesBlobs.vk12.shaderStorageImageArrayNonUniformIndexingNative;
	propertyType.shaderInputAttachmentArrayNonUniformIndexingNative = allPropertiesBlobs.vk12.shaderInputAttachmentArrayNonUniformIndexingNative;
	propertyType.robustBufferAccessUpdateAfterBind = allPropertiesBlobs.vk12.robustBufferAccessUpdateAfterBind;
	propertyType.quadDivergentImplicitLod = allPropertiesBlobs.vk12.quadDivergentImplicitLod;
	propertyType.maxPerStageDescriptorUpdateAfterBindSamplers = allPropertiesBlobs.vk12.maxPerStageDescriptorUpdateAfterBindSamplers;
	propertyType.maxPerStageDescriptorUpdateAfterBindUniformBuffers = allPropertiesBlobs.vk12.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	propertyType.maxPerStageDescriptorUpdateAfterBindStorageBuffers = allPropertiesBlobs.vk12.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	propertyType.maxPerStageDescriptorUpdateAfterBindSampledImages = allPropertiesBlobs.vk12.maxPerStageDescriptorUpdateAfterBindSampledImages;
	propertyType.maxPerStageDescriptorUpdateAfterBindStorageImages = allPropertiesBlobs.vk12.maxPerStageDescriptorUpdateAfterBindStorageImages;
	propertyType.maxPerStageDescriptorUpdateAfterBindInputAttachments = allPropertiesBlobs.vk12.maxPerStageDescriptorUpdateAfterBindInputAttachments;
	propertyType.maxPerStageUpdateAfterBindResources = allPropertiesBlobs.vk12.maxPerStageUpdateAfterBindResources;
	propertyType.maxDescriptorSetUpdateAfterBindSamplers = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindSamplers;
	propertyType.maxDescriptorSetUpdateAfterBindUniformBuffers = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindUniformBuffers;
	propertyType.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	propertyType.maxDescriptorSetUpdateAfterBindStorageBuffers = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindStorageBuffers;
	propertyType.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	propertyType.maxDescriptorSetUpdateAfterBindSampledImages = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindSampledImages;
	propertyType.maxDescriptorSetUpdateAfterBindStorageImages = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindStorageImages;
	propertyType.maxDescriptorSetUpdateAfterBindInputAttachments = allPropertiesBlobs.vk12.maxDescriptorSetUpdateAfterBindInputAttachments;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceTimelineSemaphoreProperties>(VkPhysicalDeviceTimelineSemaphoreProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.maxTimelineSemaphoreValueDifference = allPropertiesBlobs.vk12.maxTimelineSemaphoreValueDifference;
}
template<> void initPropertyFromBlob<VkPhysicalDeviceDepthStencilResolveProperties>(VkPhysicalDeviceDepthStencilResolveProperties& propertyType, const AllPropertiesBlobs& allPropertiesBlobs)
{
	propertyType.supportedDepthResolveModes = allPropertiesBlobs.vk12.supportedDepthResolveModes;
	propertyType.supportedStencilResolveModes = allPropertiesBlobs.vk12.supportedStencilResolveModes;
	propertyType.independentResolveNone = allPropertiesBlobs.vk12.independentResolveNone;
	propertyType.independentResolve = allPropertiesBlobs.vk12.independentResolve;
}

// generic template is not enough for some compilers
template<> void initPropertyFromBlob<VkPhysicalDeviceMemoryProperties>(VkPhysicalDeviceMemoryProperties&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceSparseProperties>(VkPhysicalDeviceSparseProperties&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceMemoryProperties2>(VkPhysicalDeviceMemoryProperties2&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceGroupProperties>(VkPhysicalDeviceGroupProperties&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(VkPhysicalDeviceDiscardRectanglePropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceSampleLocationsPropertiesEXT>(VkPhysicalDeviceSampleLocationsPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(VkPhysicalDeviceExternalMemoryHostPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(VkPhysicalDeviceConservativeRasterizationPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDevicePCIBusInfoPropertiesEXT>(VkPhysicalDevicePCIBusInfoPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(VkPhysicalDeviceMemoryBudgetPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDevicePerformanceQueryPropertiesKHR>(VkPhysicalDevicePerformanceQueryPropertiesKHR&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceLineRasterizationPropertiesEXT>(VkPhysicalDeviceLineRasterizationPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(VkPhysicalDeviceCustomBorderColorPropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceRobustness2PropertiesEXT>(VkPhysicalDeviceRobustness2PropertiesEXT&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(VkPhysicalDeviceFragmentShadingRatePropertiesKHR&, const AllPropertiesBlobs&) {}
template<> void initPropertyFromBlob<VkPhysicalDeviceVulkanSC10Properties>(VkPhysicalDeviceVulkanSC10Properties&, const AllPropertiesBlobs&) {}


template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT, VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION, 27}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT, VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION, 26}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDevicePerformanceQueryPropertiesKHR>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR, VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION, 25}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSampleLocationsPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION, 24}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT, VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION, 23}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT, VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION, 22}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION, 21}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDevicePCIBusInfoPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT, VK_EXT_PCI_BUS_INFO_EXTENSION_NAME, VK_EXT_PCI_BUS_INFO_SPEC_VERSION, 20}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT, VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION, 19}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR, VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME, VK_KHR_FRAGMENT_SHADING_RATE_SPEC_VERSION, 18}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceLineRasterizationPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT, VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION, 17}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT, VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION, 16}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceRobustness2PropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT, VK_EXT_ROBUSTNESS_2_EXTENSION_NAME, VK_EXT_ROBUSTNESS_2_SPEC_VERSION, 15}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT, VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME, VK_EXT_CUSTOM_BORDER_COLOR_SPEC_VERSION, 14}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDriverProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES, DECL_DRIVER_EXTENSION_NAME, 0, 13}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceIDProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES, DECL_ID_EXTENSION_NAME, 0, 12}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMultiviewProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES, DECL_MULTIVIEW_EXTENSION_NAME, 0, 11}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSubgroupProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES, DECL_SUBGROUP_EXTENSION_NAME, 0, 10}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDevicePointClippingProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES, DECL_POINT_CLIPPING_EXTENSION_NAME, 0, 9}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceProtectedMemoryProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES, DECL_PROTECTED_MEMORY_EXTENSION_NAME, 0, 8}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSamplerFilterMinmaxProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES, DECL_SAMPLER_FILTER_MINMAX_EXTENSION_NAME, 0, 7}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMaintenance3Properties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES, DECL_MAINTENANCE_3_EXTENSION_NAME, 0, 6}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceFloatControlsProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES, DECL_FLOAT_CONTROLS_EXTENSION_NAME, 0, 5}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDescriptorIndexingProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES, DECL_DESCRIPTOR_INDEXING_EXTENSION_NAME, 0, 4}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceTimelineSemaphoreProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES, DECL_TIMELINE_SEMAPHORE_EXTENSION_NAME, 0, 3}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDepthStencilResolveProperties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES, DECL_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME, 0, 2}; }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceVulkanSC10Properties>(void) { return PropertyDesc{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_SC_1_0_PROPERTIES, DECL_VULKAN_SC_1_0_EXTENSION_NAME, 0, 1}; }


static const PropertyStructCreationData propertyStructCreationArray[] =
{
	{ createPropertyStructWrapper<VkPhysicalDeviceDiscardRectanglePropertiesEXT>, VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>, VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDevicePerformanceQueryPropertiesKHR>, VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceSampleLocationsPropertiesEXT>, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>, VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>, VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDevicePCIBusInfoPropertiesEXT>, VK_EXT_PCI_BUS_INFO_EXTENSION_NAME, VK_EXT_PCI_BUS_INFO_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>, VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>, VK_KHR_FRAGMENT_SHADING_RATE_EXTENSION_NAME, VK_KHR_FRAGMENT_SHADING_RATE_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceLineRasterizationPropertiesEXT>, VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>, VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceRobustness2PropertiesEXT>, VK_EXT_ROBUSTNESS_2_EXTENSION_NAME, VK_EXT_ROBUSTNESS_2_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceCustomBorderColorPropertiesEXT>, VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME, VK_EXT_CUSTOM_BORDER_COLOR_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceDriverProperties>, DECL_DRIVER_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceIDProperties>, DECL_ID_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceMultiviewProperties>, DECL_MULTIVIEW_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceSubgroupProperties>, DECL_SUBGROUP_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDevicePointClippingProperties>, DECL_POINT_CLIPPING_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceProtectedMemoryProperties>, DECL_PROTECTED_MEMORY_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceSamplerFilterMinmaxProperties>, DECL_SAMPLER_FILTER_MINMAX_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceMaintenance3Properties>, DECL_MAINTENANCE_3_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceFloatControlsProperties>, DECL_FLOAT_CONTROLS_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceDescriptorIndexingProperties>, DECL_DESCRIPTOR_INDEXING_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceTimelineSemaphoreProperties>, DECL_TIMELINE_SEMAPHORE_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceDepthStencilResolveProperties>, DECL_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceVulkanSC10Properties>, DECL_VULKAN_SC_1_0_EXTENSION_NAME, 0 },
};

deUint32 getBlobPropertiesVersion (VkStructureType sType)
{
	const std::map<VkStructureType, deUint32> sTypeBlobMap
	{
		// Vulkan11
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES,								VK_API_VERSION_1_1 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES,					VK_API_VERSION_1_1 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES,						VK_API_VERSION_1_1 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES,					VK_API_VERSION_1_1 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES,				VK_API_VERSION_1_1 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES,						VK_API_VERSION_1_1 },
		// Vulkan12
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES,			VK_API_VERSION_1_2 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES,				VK_API_VERSION_1_2 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES,							VK_API_VERSION_1_2 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES,					VK_API_VERSION_1_2 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES,			VK_API_VERSION_1_2 },
		{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES,				VK_API_VERSION_1_2 },
		// Vulkan13
	};

	auto it = sTypeBlobMap.find(sType);
	if(it == sTypeBlobMap.end())
		return 0;
	return it->second;
}

} // vk

