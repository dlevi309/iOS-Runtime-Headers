/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class PFAnimatedImage;

@interface PHAnimatedImage : NSObject {

	unsigned long long _frameCount;
	unsigned long long _loopCount;
	double _duration;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	PFAnimatedImage* _pf_animatedImage;

}

@property (nonatomic,readonly) unsigned long long frameCount;                   //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;                    //@synthesize loopCount=_loopCount - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                   //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                  //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) PFAnimatedImage * pf_animatedImage;              //@synthesize pf_animatedImage=_pf_animatedImage - In the implementation block
+(long long)requestAnimatedImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)cancelAnimatedImageRequest:(long long)arg1 ;
-(unsigned long long)frameCount;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)pixelHeight;
-(id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(BOOL)arg3 ;
-(void)_initializePropertiesWithAnimatedImage:(id)arg1 ;
-(PFAnimatedImage *)pf_animatedImage;
-(unsigned long long)loopCount;
-(double)duration;
-(unsigned long long)pixelWidth;
@end

