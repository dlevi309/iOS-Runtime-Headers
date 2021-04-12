/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardTypingStyleEstimatorDelegate;
@class NSTimer;

@interface UIKeyboardTypingStyleEstimator : NSObject {

	NSTimer* _tapTypingFlipTimer;
	double _lastContinuousPathEvent;
	unsigned long long _currentTypingStyle;
	id<UIKeyboardTypingStyleEstimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<UIKeyboardTypingStyleEstimatorDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardTypingStyleEstimatorDelegate>)arg1 ;
-(void)tapTypedKey;
-(void)beganContinuousPath;
-(void)endedContinuousPath;
-(unsigned long long)currentTypingStyleEstimation;
-(void)_setTypingStyleEstimation:(unsigned long long)arg1 ;
@end

