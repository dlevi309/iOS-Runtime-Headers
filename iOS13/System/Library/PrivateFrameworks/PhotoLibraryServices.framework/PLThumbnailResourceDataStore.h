/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLResourceDataStore.h>
#import <libobjc.A.dylib/PLResourceDataStore.h>

@class NSDictionary, NSArray, PLThumbnailManager, PLThumbnailIndexes, NSString, PLPhotoLibraryPathManager;

@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore> {

	NSDictionary* _thumbnailFormatsByTableType;
	NSArray* _thumbnailFormats;
	PLThumbnailManager* _thumbnailManager;
	PLThumbnailIndexes* _thumbnailIndexes;

}

@property (nonatomic,retain) PLThumbnailManager * thumbnailManager;                  //@synthesize thumbnailManager=_thumbnailManager - In the implementation block
@property (nonatomic,retain) PLThumbnailIndexes * thumbnailIndexes;                  //@synthesize thumbnailIndexes=_thumbnailIndexes - In the implementation block
@property (nonatomic,retain) NSArray * thumbnailFormats;                             //@synthesize thumbnailFormats=_thumbnailFormats - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
+(unsigned)storeClassID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)supportedRecipes;
+(BOOL)resourceIsSquare:(id)arg1 ;
-(id)name;
-(id)descriptionForSubtype:(long long)arg1 ;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(id)initWithPathManager:(id)arg1 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(PLThumbnailManager *)thumbnailManager;
-(PLThumbnailIndexes *)thumbnailIndexes;
-(id)resourceURLForKey:(id)arg1 ;
-(void)setThumbnailFormats:(NSArray *)arg1 ;
-(NSArray *)thumbnailFormats;
-(void)setThumbnailFormatsByIDs:(id)arg1 ;
-(id)thumbnailFormatsByTableType;
-(CGImageRef)newTableThumbImageForKey:(id)arg1 ;
-(void)setThumbnailManager:(PLThumbnailManager *)arg1 ;
-(void)setThumbnailIndexes:(PLThumbnailIndexes *)arg1 ;
@end

