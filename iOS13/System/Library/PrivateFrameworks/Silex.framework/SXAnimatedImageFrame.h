/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class SXAnimatedImageViewCache;

@interface SXAnimatedImageFrame : NSObject {

	SXAnimatedImageViewCache* _cache;
	CGImageSourceRef _imageSource;
	double _duration;
	unsigned long long _index;
	long long _imageType;

}

@property (nonatomic,readonly) CGImageSourceRef imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long imageType;                       //@synthesize imageType=_imageType - In the implementation block
-(void)dealloc;
-(unsigned long long)index;
-(double)duration;
-(id)image;
-(long long)imageType;
-(CGImageSourceRef)imageSource;
-(void)captureFrameProperties;
-(id)initWithImageSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 cache:(id)arg3 type:(long long)arg4 ;
@end

