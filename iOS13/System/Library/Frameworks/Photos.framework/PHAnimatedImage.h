/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class ISAnimatedImage;

@interface PHAnimatedImage : NSObject {

	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	ISAnimatedImage* _is_animatedImage;

}

@property (nonatomic,readonly) unsigned long long frameCount;                   //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;                    //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                   //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                  //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) ISAnimatedImage * is_animatedImage;              //@synthesize is_animatedImage=_is_animatedImage - In the implementation block
+(long long)requestAnimatedImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cancelAnimatedImageRequest:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(double)duration;
-(unsigned long long)frameCount;
-(unsigned long long)loopCount;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(void)_initializePropertiesWithAnimatedImage:(id)arg1 ;
-(ISAnimatedImage *)is_animatedImage;
@end

