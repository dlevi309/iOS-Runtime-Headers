/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSKHighlightController.h>

@protocol TSKPulseAnimationControllerProtocol;
@interface TSKPulseAnimationController : TSKHighlightController {

	id<TSKPulseAnimationControllerProtocol> _delegate;
	BOOL _pulsating;
	BOOL _autohide;
	double _duration;
	double _pulseOffset;

}

@property (assign,nonatomic) BOOL pulsating;                  //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,nonatomic) BOOL autohide;                   //@synthesize autohide=_autohide - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double pulseOffset;              //@synthesize pulseOffset=_pulseOffset - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)reset;
-(double)duration;
-(void)disconnect;
-(id)initWithDelegate:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimating;
-(BOOL)drawRoundedRect;
-(BOOL)pulsating;
-(void)setPulsating:(BOOL)arg1 ;
-(BOOL)autohide;
-(void)setAutohide:(BOOL)arg1 ;
-(double)pulseOffset;
-(void)setPulseOffset:(double)arg1 ;
@end

