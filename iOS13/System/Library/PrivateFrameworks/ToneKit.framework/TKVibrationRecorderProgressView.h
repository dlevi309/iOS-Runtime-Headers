/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TKVibrationRecorderStyleProvider;
@class UIView, NSLayoutConstraint, TKVibrationRecorderProgressDotImageView, NSMutableArray;

@interface TKVibrationRecorderProgressView : UIView {

	double _maximumTimeInterval;
	double _currentVibrationComponentDidBeginTimeInterval;
	double _previousPauseDidBeginTimeInterval;
	id<TKVibrationRecorderStyleProvider> _styleProvider;
	UIView* _progressView;
	NSLayoutConstraint* _progressViewWidthConstraint;
	TKVibrationRecorderProgressDotImageView* _dotForCurrentVibrationComponent;
	NSLayoutConstraint* _dotForCurrentVibrationComponentLeftConstraint;
	NSLayoutConstraint* _dotForCurrentVibrationComponentRightConstraint;
	NSMutableArray* _dots;
	int _roundedCornersCompensationDelayMode;
	double _currentTimeInterval;

}

@property (assign,nonatomic) double currentTimeInterval;                           //@synthesize currentTimeInterval=_currentTimeInterval - In the implementation block
@property (assign,nonatomic) int roundedCornersCompensationDelayMode;              //@synthesize roundedCornersCompensationDelayMode=_roundedCornersCompensationDelayMode - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(double)currentTimeInterval;
-(id)initWithMaximumTimeInterval:(double)arg1 styleProvider:(id)arg2 ;
-(void)clearAllVibrationComponents;
-(void)setRoundedCornersCompensationDelayMode:(int)arg1 ;
-(void)setCurrentTimeInterval:(double)arg1 ;
-(void)vibrationComponentDidEnd;
-(void)vibrationComponentDidStart;
-(double)_cappedValueForTimeInterval:(double)arg1 ;
-(int)roundedCornersCompensationDelayMode;
-(UIOffset)_dotInsets;
-(CGSize)_dotSize;
-(CGRect)_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2 ;
-(void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg1 withFrame:(CGRect)arg2 ;
-(id)_resizableDotImage;
-(id)_dotTintColor;
-(void)_updateProgressViewBackgroundColor;
@end

