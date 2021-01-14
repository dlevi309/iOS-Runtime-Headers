/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLResourceDataStore.h>

@class PLPhotoLibraryPathManager, NSString;

@interface PLResourceDataStore : NSObject <PLResourceDataStore> {

	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedRecipes;
+(BOOL)keyDataIsValid:(id)arg1 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(unsigned)storeClassID;
+(BOOL)isMasterThumbRecipeID:(unsigned)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceURLForKey:(id)arg1 assetID:(id)arg2 ;
-(id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)name;
-(id)initWithPathManager:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 clientBundleID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(id)guessUTIForExternalResource:(id)arg1 forAssetKind:(short)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)verifyAndFixLocalAvailabilityForResource:(id)arg1 ;
-(id)descriptionForSubtype:(long long)arg1 ;
-(BOOL)dataStoreSubtypeIsDownloadable:(long long)arg1 ;
-(void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(BOOL)canStreamResource:(id)arg1 ;
-(BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg1 ;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
@end

