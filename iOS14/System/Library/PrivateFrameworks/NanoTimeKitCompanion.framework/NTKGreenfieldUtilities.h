/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKGreenfieldUtilities : NSObject
+(void)generateFacePreviewImageFromUrl:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)encodeQueue;
+(id)addBorder:(unsigned long long)arg1 toWatchFaceImage:(id)arg2 ;
+(void)encodeRecipeFromDraftRecipe:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)generateFacePreviewImageFromDraftRecipe:(id)arg1 borderType:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)_queue_snapshotFace:(id)arg1 borderType:(unsigned long long)arg2 ;
+(id)_queue_encodeDraftRecipe:(id)arg1 ;
+(id)temporaryGreenfieldDirectory;
+(id)_addGreyBorderToWatchFaceImage:(id)arg1 ;
+(id)_addGenericDeviceBorderToWatchFaceImage:(id)arg1 includesTransparentPadding:(BOOL)arg2 ;
+(id)_greenfieldWatchFaceJsonForFace:(id)arg1 ;
+(id)_metadataDictForWatchFace:(id)arg1 slotToSampleTemplateMapping:(id)arg2 slotToItemIdMapping:(id)arg3 slotToBundleIdMapping:(id)arg4 watchFaceDataPath:(id)arg5 ;
+(void)_updateSystemDeletableAppItemIdForSlotToItemIdMapping:(id)arg1 face:(id)arg2 ;
+(id)createXPCServiceConnection;
+(id)_decodeFaceFromDataPath:(id)arg1 ;
+(id)temporaryGreenfieldNoBordersSnapshotPath;
+(id)_queue_greenfieldPreviewFromUrl:(id)arg1 ;
+(id)unzipWatchFaceFileAtUrl:(id)arg1 ;
+(void)generateFacePreviewImageFromDraftRecipe:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(BOOL)validateFaceType:(id)arg1 faceBundleId:(id)arg2 ;
+(void)decodeWatchFaceFromUrl:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(BOOL)shouldAutoDismissViewControllerForAddFaceFlow:(id)arg1 ;
+(id)_companionAppIdFromWatchAppBundleId:(id)arg1 ;
+(BOOL)shouldPresentUnreleasedFeaturesInternalWarningForFace:(id)arg1 ;
@end

