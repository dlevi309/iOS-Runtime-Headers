/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class NSObject, NSCache;

@interface MKPictureItemViewImageProvider : NSObject {

	NSObject*<OS_dispatch_queue> _blurQueue;
	NSCache* _blurredImagesCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> blurQueue;              //@synthesize blurQueue=_blurQueue - In the implementation block
@property (nonatomic,retain) NSCache * blurredImagesCache;                        //@synthesize blurredImagesCache=_blurredImagesCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSCache *)blurredImagesCache;
-(void)blurredImage:(id)arg1 displaySize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)imageWithURL:(id)arg1 displaySize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBlurQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBlurredImagesCache:(NSCache *)arg1 ;
-(NSObject*<OS_dispatch_queue>)blurQueue;
@end

