/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLResourceDataStore.h>

@class PLPhotoLibraryPathManager, NSString;

@interface PLResourceDataStore : NSObject <PLResourceDataStore> {

	AQ _nextLocalAvailabilityRequestID;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
+(unsigned)storeClassID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(BOOL)keyDataIsValid:(id)arg1 ;
+(id)supportedRecipes;
+(BOOL)isMasterThumbRecipeID:(unsigned)arg1 ;
-(id)name;
-(id)descriptionForSubtype:(long long)arg1 ;
-(PLPhotoLibraryPathManager *)pathManager;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(id)initWithPathManager:(id)arg1 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(id)resourceURLForKey:(id)arg1 assetID:(id)arg2 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(id)guessUTIForExternalResource:(id)arg1 forAssetKind:(short)arg2 managedObjectContext:(id)arg3 ;
-(unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1 ;
-(void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(BOOL)canStreamResource:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)nextLocalAvailabilityRequestID;
-(BOOL)verifyAndFixLocalAvailabilityForResource:(id)arg1 asset:(id)arg2 managedObjectContext:(id)arg3 ;
@end

