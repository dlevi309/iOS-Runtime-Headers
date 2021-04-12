/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITextViewContentPaddingDelegate;
@interface _UITextViewContentPadding : NSObject {

	long long _mode;
	double _targetValue;
	double _currentValue;
	id<_UITextViewContentPaddingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UITextViewContentPaddingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double targetValue;                                                 //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) double currentValue;                                              //@synthesize currentValue=_currentValue - In the implementation block
-(id<_UITextViewContentPaddingDelegate>)delegate;
-(void)setDelegate:(id<_UITextViewContentPaddingDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)initWithDelegate:(id)arg1 ;
-(double)targetValue;
-(void)setTargetValue:(double)arg1 ;
-(double)currentValue;
-(void)increaseToValue:(double)arg1 ;
-(void)_checkNewCurrentValue;
-(void)resetCurrentValue;
@end

