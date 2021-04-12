/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class BSUIMappedImageCache;

@interface HFPosterFrameImageCache : NSObject {

	BSUIMappedImageCache* _imageCache;

}

@property (nonatomic,retain) BSUIMappedImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)keyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(id)init;
-(BSUIMappedImageCache *)imageCache;
-(void)setImageCache:(BSUIMappedImageCache *)arg1 ;
-(id)imageForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2 ;
-(void)purgeAllImages;
-(void)addImage:(id)arg1 forCameraClipIdentifierString:(id)arg2 withOffset:(float)arg3 ;
@end

