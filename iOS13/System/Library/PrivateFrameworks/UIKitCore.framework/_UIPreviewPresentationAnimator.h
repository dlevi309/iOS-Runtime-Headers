/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)stopAnimation;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setStartMediaTime:(double)arg1 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setAdvanceBlock:(id)arg1 ;
-(void)_advanceFromDisplayLink:(id)arg1 ;
-(double)startMediaTime;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(id)advanceBlock;
-(id)initWithDuration:(double)arg1 advanceBlock:(/*^block*/id)arg2 ;
@end

