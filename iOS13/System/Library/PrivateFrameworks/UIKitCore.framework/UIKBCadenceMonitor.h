/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIKBRTRecognizerAveragingRuleProtocol.h>

@class UIDelayedAction;

@interface UIKBCadenceMonitor : NSObject <_UIKBRTRecognizerAveragingRuleProtocol> {

	BOOL _isUserTyping;
	float _cadence;
	float _confidence;
	float _typingAvg;
	int _touchCount;
	double _gapAvg;
	double _prevTouchDown;
	UIDelayedAction* _touchLogTimer;

}

@property (assign,nonatomic) BOOL isUserTyping;                            //@synthesize isUserTyping=_isUserTyping - In the implementation block
@property (assign,nonatomic) float cadence;                                //@synthesize cadence=_cadence - In the implementation block
@property (assign,nonatomic) float confidence;                             //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) float typingAvg;                              //@synthesize typingAvg=_typingAvg - In the implementation block
@property (assign,nonatomic) double gapAvg;                                //@synthesize gapAvg=_gapAvg - In the implementation block
@property (assign,nonatomic) double prevTouchDown;                         //@synthesize prevTouchDown=_prevTouchDown - In the implementation block
@property (assign,nonatomic) int touchCount;                               //@synthesize touchCount=_touchCount - In the implementation block
@property (nonatomic,retain) UIDelayedAction * touchLogTimer;              //@synthesize touchLogTimer=_touchLogTimer - In the implementation block
-(id)init;
-(void)reset;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(void)addTypingTouchTime:(double)arg1 ;
-(int)touchCount;
-(double)gapAvg;
-(double)prevTouchDown;
-(float)typingAvg;
-(void)setTypingAvg:(float)arg1 ;
-(void)setGapAvg:(double)arg1 ;
-(void)setCadence:(float)arg1 ;
-(void)updateConfidenceWithGap:(double)arg1 ;
-(UIDelayedAction *)touchLogTimer;
-(void)logUserTyping:(id)arg1 ;
-(void)setTouchLogTimer:(UIDelayedAction *)arg1 ;
-(void)setIsUserTyping:(BOOL)arg1 ;
-(void)setPrevTouchDown:(double)arg1 ;
-(void)setTouchCount:(int)arg1 ;
-(void)typingCadence:(double)arg1 ;
-(id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2 ;
-(id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2 ;
-(BOOL)isUserTyping;
-(float)cadence;
@end

