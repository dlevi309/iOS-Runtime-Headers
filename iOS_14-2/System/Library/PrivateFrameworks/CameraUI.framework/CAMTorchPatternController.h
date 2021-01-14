/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CUCaptureController, CAMTorchPattern, CADisplayLink;

@interface CAMTorchPatternController : NSObject {

	BOOL __performing;
	double _stepInterval;
	CUCaptureController* __captureController;
	CAMTorchPattern* __currentPattern;
	double __startTime;
	CADisplayLink* __displayLink;

}

@property (nonatomic,readonly) CUCaptureController * _captureController;                                //@synthesize _captureController=__captureController - In the implementation block
@property (assign,setter=_setPerforming:,getter=_isPerforming,nonatomic) BOOL _performing;              //@synthesize _performing=__performing - In the implementation block
@property (nonatomic,readonly) CAMTorchPattern * _currentPattern;                                       //@synthesize _currentPattern=__currentPattern - In the implementation block
@property (nonatomic,readonly) double _startTime;                                                       //@synthesize _startTime=__startTime - In the implementation block
@property (nonatomic,readonly) CADisplayLink * _displayLink;                                            //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,nonatomic) double stepInterval;                                                       //@synthesize stepInterval=_stepInterval - In the implementation block
-(CUCaptureController *)_captureController;
-(void)blink;
-(double)_startTime;
-(BOOL)_isPerforming;
-(CADisplayLink *)_displayLink;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithCaptureController:(id)arg1 ;
-(void)doubleBlink;
-(void)stopPerformingPattern;
-(void)_setPerforming:(BOOL)arg1 ;
-(void)_resetTorchLevel;
-(void)_applyTorchLevel:(float)arg1 ;
-(void)startPerformingPattern:(id)arg1 ;
-(double)stepInterval;
-(void)setStepInterval:(double)arg1 ;
-(CAMTorchPattern *)_currentPattern;
@end

