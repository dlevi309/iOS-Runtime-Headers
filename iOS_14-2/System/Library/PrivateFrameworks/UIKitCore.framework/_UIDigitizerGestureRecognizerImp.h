/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIDigitizerGestureRecognizerImpDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSTimer;

@interface _UIDigitizerGestureRecognizerImp : NSObject {

	id<_UIDigitizerGestureRecognizerImpDelegate> _delegate;
	double _minimumPressDuration;
	double _maximumPressDuration;
	long long _numberOfActiveTouches;
	double _pressEndToTouchBeginDuration;
	double _touchEndToPressEndDuration;
	double _touchEndTime;
	double _pressBeginTime;
	double _pressEndTime;
	double _lastRecognitionTime;
	NSTimer* _shortTimer;
	CGPoint _digitizerLocation;

}

@property (assign,nonatomic,__weak) id<_UIDigitizerGestureRecognizerImpDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minimumPressDuration;                                               //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double maximumPressDuration;                                               //@synthesize maximumPressDuration=_maximumPressDuration - In the implementation block
@property (assign,nonatomic) CGPoint digitizerLocation;                                                 //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (assign,nonatomic) long long numberOfActiveTouches;                                           //@synthesize numberOfActiveTouches=_numberOfActiveTouches - In the implementation block
@property (assign,nonatomic) double pressEndToTouchBeginDuration;                                       //@synthesize pressEndToTouchBeginDuration=_pressEndToTouchBeginDuration - In the implementation block
@property (assign,nonatomic) double touchEndToPressEndDuration;                                         //@synthesize touchEndToPressEndDuration=_touchEndToPressEndDuration - In the implementation block
@property (assign,nonatomic) double touchEndTime;                                                       //@synthesize touchEndTime=_touchEndTime - In the implementation block
@property (assign,nonatomic) double pressBeginTime;                                                     //@synthesize pressBeginTime=_pressBeginTime - In the implementation block
@property (assign,nonatomic) double pressEndTime;                                                       //@synthesize pressEndTime=_pressEndTime - In the implementation block
@property (assign,nonatomic) double lastRecognitionTime;                                                //@synthesize lastRecognitionTime=_lastRecognitionTime - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * shortTimer;                                               //@synthesize shortTimer=_shortTimer - In the implementation block
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(id<_UIDigitizerGestureRecognizerImpDelegate>)delegate;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<_UIDigitizerGestureRecognizerImpDelegate>)arg1 ;
-(CGPoint)digitizerLocation;
-(void)setDigitizerLocation:(CGPoint)arg1 ;
-(NSTimer *)shortTimer;
-(void)reset;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)pressBeginTime;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouchEndTime:(double)arg1 ;
-(void)setShortTimer:(NSTimer *)arg1 ;
-(CGPoint)defaultDigitizerLocation;
-(void)_shortTimerFired:(id)arg1 ;
-(BOOL)_senderOfPressesHasTouchSurface:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_senderOfPressesIsSoftwareRemoteWithEvent:(id)arg1 ;
-(double)maximumPressDuration;
-(void)setMaximumPressDuration:(double)arg1 ;
-(double)touchEndTime;
-(long long)numberOfActiveTouches;
-(void)setNumberOfActiveTouches:(long long)arg1 ;
-(double)pressEndToTouchBeginDuration;
-(double)touchEndToPressEndDuration;
-(void)setPressEndToTouchBeginDuration:(double)arg1 ;
-(void)setPressBeginTime:(double)arg1 ;
-(void)setTouchEndToPressEndDuration:(double)arg1 ;
-(void)setPressEndTime:(double)arg1 ;
-(double)lastRecognitionTime;
-(void)setLastRecognitionTime:(double)arg1 ;
-(double)pressEndTime;
@end

