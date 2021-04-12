/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISFrameCache;

@interface ISAnimatedImage : NSObject {

	CGImageSourceRef _imageSource;
	double* _frameDelayTimes;
	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	ISFrameCache* _frameCache;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) ISFrameCache * frameCache;                  //@synthesize frameCache=_frameCache - In the implementation block
@property (assign,nonatomic) long long cacheStrategy; 
@property (nonatomic,readonly) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;               //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                           //@synthesize pixelSize=_pixelSize - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double)duration;
-(unsigned long long)frameCount;
-(CGSize)pixelSize;
-(unsigned long long)loopCount;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithData:(id)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3 ;
-(double)frameDelayAtIndex:(unsigned long long)arg1 ;
-(long long)cacheStrategy;
-(void)setCacheStrategy:(long long)arg1 ;
-(void)_preloadDelayTimes;
-(ISFrameCache *)frameCache;
@end

