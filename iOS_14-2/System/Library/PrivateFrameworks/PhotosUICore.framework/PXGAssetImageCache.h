/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSObject, NSMutableIndexSet, NSMutableSet, NSMutableArray;

@interface PXGAssetImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableIndexSet* _activeRequestIDs;
	NSMutableSet* _activeAssets;
	NSMutableArray* _entries;
	NSMutableArray* _reusableEntries;

}
-(id)init;
-(void)clearAllCachedImages;
-(void)clearCachedImagesForRequestIDs:(id)arg1 ;
-(CGImageRef)cachedImageWithOrientation:(unsigned*)arg1 forAsset:(id)arg2 targetSize:(CGSize)arg3 contentMode:(long long)arg4 forRequestID:(int)arg5 ;
-(id)debugDescription;
-(id)description;
-(void)cacheImage:(CGImageRef)arg1 orientation:(unsigned)arg2 forRequestID:(int)arg3 ;
@end

