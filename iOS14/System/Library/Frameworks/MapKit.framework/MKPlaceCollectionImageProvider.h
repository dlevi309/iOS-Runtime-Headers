/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOMapItemPhotoOptions, NSCache, NSString;

@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate> {

	NSObject*<OS_dispatch_queue> _blurQueue;
	GEOMapItemPhotoOptions* _optionsForCollectionCells;
	NSCache* _blurredImagesCache;
	NSCache* _downloadedImagesCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> blurQueue;                            //@synthesize blurQueue=_blurQueue - In the implementation block
@property (nonatomic,readonly) GEOMapItemPhotoOptions * optionsForCollectionCells;              //@synthesize optionsForCollectionCells=_optionsForCollectionCells - In the implementation block
@property (nonatomic,retain) NSCache * blurredImagesCache;                                      //@synthesize blurredImagesCache=_blurredImagesCache - In the implementation block
@property (nonatomic,retain) NSCache * downloadedImagesCache;                                   //@synthesize downloadedImagesCache=_downloadedImagesCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(NSCache *)blurredImagesCache;
-(void)setBlurQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBlurredImagesCache:(NSCache *)arg1 ;
-(CGSize)desiredSizeFromFrameSize:(CGSize)arg1 ;
-(id)photoInfoWithPhoto:(id)arg1 desiredSize:(CGSize)arg2 ;
-(NSCache *)downloadedImagesCache;
-(void)_blurCachedImage:(id)arg1 blurredImageId:(id)arg2 collection:(id)arg3 size:(CGSize)arg4 imageSizeType:(long long)arg5 contentSizeCategory:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)blurImage:(id)arg1 withSize:(CGSize)arg2 imageSizeType:(long long)arg3 contentSizeCategory:(id)arg4 completion:(/*^block*/id)arg5 ;
-(GEOMapItemPhotoOptions *)optionsForCollectionCells;
-(void)darkenAndBlurImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)joeColorForCuratedCollection:(id)arg1 ;
-(void)loadBlurredCoverImageWithCuratedCollection:(id)arg1 size:(CGSize)arg2 imageSizeType:(long long)arg3 contentSizeCategory:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelBlurredCoverImageLoadWithCollection:(id)arg1 frameSize:(CGSize)arg2 ;
-(void)setDownloadedImagesCache:(NSCache *)arg1 ;
-(NSObject*<OS_dispatch_queue>)blurQueue;
@end

