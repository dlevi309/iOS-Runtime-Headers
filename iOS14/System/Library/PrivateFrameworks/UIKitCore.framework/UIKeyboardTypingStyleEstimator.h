/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tapTypedKey;
-(id<UIKeyboardTypingStyleEstimatorDelegate>)delegate;
-(unsigned long long)currentTypingStyleEstimation;
-(void)_setTypingStyleEstimation:(unsigned long long)arg1 ;
-(void)setDelegate:(id<UIKeyboardTypingStyleEstimatorDelegate>)arg1 ;
-(void)cancelContinuousPath;
-(void)endedContinuousPath;
-(void)beganContinuousPath;
@end

