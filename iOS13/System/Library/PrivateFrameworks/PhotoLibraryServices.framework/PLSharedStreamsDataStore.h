/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLResourceDataStore.h>
#import <libobjc.A.dylib/PLResourceDataStore.h>

@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
+(unsigned)_masterThumbRecipeID;
+(unsigned)storeClassID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)supportedRecipes;
-(id)name;
-(id)descriptionForSubtype:(long long)arg1 ;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(id)resourceURLForKey:(id)arg1 assetID:(id)arg2 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(BOOL)canStreamResource:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned)arg1 ;
-(void)_prepareForDownloadNotification:(id)arg1 atFileURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_utiStringForAsset:(id)arg1 type:(unsigned)arg2 ;
-(BOOL)_isDerivativeForSharedStreamsType:(unsigned)arg1 ;
-(id)_sharedStreamsExternalResourceForAsset:(id)arg1 album:(id)arg2 type:(unsigned)arg3 ;
-(short)_localAvailabilityForAsset:(id)arg1 album:(id)arg2 type:(unsigned)arg3 ;
-(short)_remoteAvailabilityForType:(unsigned)arg1 ;
-(unsigned)_mainResourceTypeForAsset:(id)arg1 ;
-(id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg1 ;
@end

