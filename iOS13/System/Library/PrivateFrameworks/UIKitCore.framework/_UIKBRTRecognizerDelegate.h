/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIKBRTRecognizerDelegate <NSObject>
@required
-(void)recognizer:(id)arg1 beginTouchDownForTouchWithId:(id)arg2 atPoint:(CGPoint)arg3 forBeginState:(unsigned long long)arg4 whenStateReady:(/*^block*/id)arg5;
-(void)recognizer:(id)arg1 restartTouchDownForTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenStateReady:(/*^block*/id)arg6;
-(void)recognizer:(id)arg1 shouldContinueTrackingTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 forContinueState:(unsigned long long)arg6 whenStateReady:(/*^block*/id)arg7;
-(void)recognizer:(id)arg1 willIgnoreTouchWithId:(id)arg2 startingAt:(double)arg3 atPoint:(CGPoint)arg4 currentPoint:(CGPoint)arg5 whenReady:(/*^block*/id)arg6;
-(void)recognizer:(id)arg1 continueTrackingIgnoredTouchWithId:(id)arg2 currentPoint:(CGPoint)arg3 whenReady:(/*^block*/id)arg4;
-(void)recognizer:(id)arg1 releaseTouchToLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5;
-(void)recognizer:(id)arg1 cancelTouchOnLayoutWithId:(id)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4 whenReady:(/*^block*/id)arg5;

@end

