/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)confidence;
-(double)gapAvg;
-(id)init;
-(float)cadence;
-(int)touchCount;
-(float)typingAvg;
-(void)setConfidence:(float)arg1 ;
-(void)addTypingTouchTime:(double)arg1 ;
-(void)reset;
-(void)setGapAvg:(double)arg1 ;
-(void)setCadence:(float)arg1 ;
-(BOOL)isUserTyping;
-(UIDelayedAction *)touchLogTimer;
-(double)prevTouchDown;
-(void)updateConfidenceWithGap:(double)arg1 ;
-(void)logUserTyping:(id)arg1 ;
-(void)setTypingAvg:(float)arg1 ;
-(void)setTouchLogTimer:(UIDelayedAction *)arg1 ;
-(void)setIsUserTyping:(BOOL)arg1 ;
-(void)setPrevTouchDown:(double)arg1 ;
-(void)setTouchCount:(int)arg1 ;
-(void)typingCadence:(double)arg1 ;
-(id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2 ;
-(id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2 ;
@end

