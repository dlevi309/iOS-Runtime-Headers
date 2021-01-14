/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLResourceDataStore.h>
#import <libobjc.A.dylib/PLResourceDataStore.h>

@class NSDictionary, NSArray, PLThumbnailManager, PLThumbnailIndexes, PLPhotoLibraryPathManager, NSString;

@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore> {

	NSDictionary* _thumbnailFormatsByTableType;
	NSArray* _thumbnailFormats;
	PLThumbnailManager* _thumbnailManager;
	PLThumbnailIndexes* _thumbnailIndexes;

}

@property (nonatomic,retain) PLThumbnailManager * thumbnailManager;                  //@synthesize thumbnailManager=_thumbnailManager - In the implementation block
@property (nonatomic,retain) PLThumbnailIndexes * thumbnailIndexes;                  //@synthesize thumbnailIndexes=_thumbnailIndexes - In the implementation block
@property (nonatomic,retain) NSArray * thumbnailFormats;                             //@synthesize thumbnailFormats=_thumbnailFormats - In the implementation block
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedRecipes;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(unsigned)storeClassID;
+(BOOL)resourceIsSquare:(id)arg1 ;
-(void)setThumbnailManager:(PLThumbnailManager *)arg1 ;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)resourceURLForKey:(id)arg1 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(CGImageRef)newTableThumbImageForKey:(id)arg1 ;
-(id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)name;
-(id)initWithPathManager:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 clientBundleID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(PLThumbnailIndexes *)thumbnailIndexes;
-(void)setThumbnailFormats:(NSArray *)arg1 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(void)setThumbnailIndexes:(PLThumbnailIndexes *)arg1 ;
-(void)setThumbnailFormatsByIDs:(id)arg1 ;
-(id)descriptionForSubtype:(long long)arg1 ;
-(PLThumbnailManager *)thumbnailManager;
-(id)thumbnailFormatsByTableType;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(NSArray *)thumbnailFormats;
@end

