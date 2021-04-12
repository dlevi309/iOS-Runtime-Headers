/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class PFFrameCache;

@interface PFAnimatedImage : NSObject {

	CGImageSourceRef _imageSource;
	double* _frameDelayTimes;
	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	PFFrameCache* _frameCache;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) PFFrameCache * frameCache;                  //@synthesize frameCache=_frameCache - In the implementation block
@property (assign,nonatomic) long long cacheStrategy; 
@property (nonatomic,readonly) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;               //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                           //@synthesize pixelSize=_pixelSize - In the implementation block
-(unsigned long long)frameCount;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(unsigned long long)loopCount;
-(double)duration;
-(CGSize)pixelSize;
-(void)dealloc;
-(PFFrameCache *)frameCache;
-(double)frameDelayAtIndex:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithData:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(long long)cacheStrategy;
-(void)setCacheStrategy:(long long)arg1 ;
-(void)_preloadDelayTimes;
@end

