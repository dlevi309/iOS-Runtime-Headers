/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class NSCache, PHPhotoLibrary, NSMutableDictionary, NSString;

@interface PXPhotoKitThumbnailCache : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver> {

	NSCache* _cache;
	PHPhotoLibrary* _photoLibrary;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _lock_cachedThumbnailIndexByObjectID;
	unsigned long long _sizeLimit;
	NSString* _label;

}

@property (nonatomic,readonly) unsigned long long sizeLimit;               //@synthesize sizeLimit=_sizeLimit - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(unsigned long long)sizeLimit;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSString *)description;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(PHAssetResourceTableDataSpecification*)arg2 ;
-(NSString *)label;
-(void)dealloc;
-(id)initWithSizeLimit:(unsigned long long)arg1 photoLibrary:(id)arg2 ;
-(void)cacheThumbnailData:(id)arg1 specification:(const PHAssetResourceTableDataSpecification*)arg2 forAsset:(id)arg3 ;
@end

