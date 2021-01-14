/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@interface SUAssetSupport : NSObject
+(BOOL)_updateIsPreCRelease:(id)arg1 ;
+(id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1 ;
+(id)tryCreateDocumentationFromDocumentationAsset:(id)arg1 ;
+(void)_queue_cleanupAllInstalledAssetsOfType:(id)arg1 ;
+(void)setSUFilters:(id)arg1 ;
+(void)_cleanupAllAssetsOfType:(id)arg1 ;
+(id)getLocalDefaultSoftwareUpdateAssetIfExists;
+(id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 releaseDate:(id*)arg3 error:(id*)arg4 ;
+(id)_gestaltValueForKey:(CFStringRef)arg1 ;
+(long long)requestCatalogDownload:(id)arg1 ;
+(void)setAssetQueryFilters:(id)arg1 ;
+(id)findExactMatchInAssets:(id)arg1 forAssetId:(id)arg2 ;
+(id)queryMetaDataOfType:(id)arg1 WithFilter:(id)arg2 installedOnly:(BOOL)arg3 error:(id*)arg4 ;
+(id)filterSuAssets:(id)arg1 MatchingDescriptor:(id)arg2 ;
+(id)copySuAssetInCatalogMatchingDescriptor:(id)arg1 exactAssetIdMatch:(BOOL)arg2 installedOnly:(BOOL)arg3 ;
+(id)getLocalDefaultSoftwareUpdateAssetIfExistsWithReleaseDate:(id*)arg1 ;
+(id)findAssetWithMatcher:(id)arg1 localSearch:(BOOL)arg2 error:(id*)arg3 ;
+(id)defaultAssetDownloadOptionsWithPriority:(int)arg1 ;
+(id)minorOSVersion:(id)arg1 ;
+(id)OSVersionComponent:(unsigned long long)arg1 osVersion:(id)arg2 ;
+(id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1 withReleaseDate:(id)arg2 ;
+(void)cleanupAllInstalledAssets:(/*^block*/id)arg1 ;
+(void)cleanupAllSoftwareUpdateAssets;
+(void)cleanupAllSoftwareUpdateAndRelatedAssets;
+(id)copySUAssetForAssetID:(id)arg1 ;
+(id)copyInstalledAssets;
+(id)copySuAssetInCatalogMatchingDescriptor:(id)arg1 ;
+(id)copySuAssetInstalledExactlyMatchingDescriptor:(id)arg1 ;
+(void)purgeMSUUpdate:(/*^block*/id)arg1 ;
+(id)assetDownloadOptionsForDocumentation;
+(id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(BOOL)arg4 ;
@end

