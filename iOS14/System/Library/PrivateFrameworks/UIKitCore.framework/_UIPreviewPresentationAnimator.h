/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class CAMediaTimingFunction, CADisplayLink;

@interface _UIPreviewPresentationAnimator : NSObject {

	double _duration;
	CAMediaTimingFunction* _mediaTimingFunction;
	double _startMediaTime;
	/*^block*/id _advanceBlock;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) double duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (assign,nonatomic) double startMediaTime;                                    //@synthesize startMediaTime=_startMediaTime - In the implementation block
@property (nonatomic,copy) id advanceBlock;                                            //@synthesize advanceBlock=_advanceBlock - In the implementation block
@property (assign,nonatomic,__weak) CADisplayLink * displayLink;                       //@synthesize displayLink=_displayLink - In the implementation block
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setStartMediaTime:(double)arg1 ;
-(void)_advanceFromDisplayLink:(id)arg1 ;
-(id)initWithDuration:(double)arg1 advanceBlock:(/*^block*/id)arg2 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)stopAnimation;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(double)duration;
-(double)startMediaTime;
-(id)advanceBlock;
-(void)setAdvanceBlock:(id)arg1 ;
@end

