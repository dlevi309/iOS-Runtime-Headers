/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mode;
-(id<_UITextViewContentPaddingDelegate>)delegate;
-(void)setMode:(long long)arg1 ;
-(double)targetValue;
-(void)setDelegate:(id<_UITextViewContentPaddingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)increaseToValue:(double)arg1 ;
-(void)resetCurrentValue;
-(void)_checkNewCurrentValue;
-(double)currentValue;
-(void)setTargetValue:(double)arg1 ;
@end

