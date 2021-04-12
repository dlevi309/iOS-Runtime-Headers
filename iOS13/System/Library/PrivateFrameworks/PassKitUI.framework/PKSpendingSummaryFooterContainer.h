/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKSpendingSummaryFooter;
@class _UIBackdropView, UIView;

@interface PKSpendingSummaryFooterContainer : UIView {

	long long _backdropStyle;
	_UIBackdropView* _backdropView;
	UIView* _topSeparatorView;
	UIView*<PKSpendingSummaryFooter> _currentFooter;
	UIView*<PKSpendingSummaryFooter> _nextFooter;

}

@property (nonatomic,retain) UIView*<PKSpendingSummaryFooter> currentFooter;              //@synthesize currentFooter=_currentFooter - In the implementation block
@property (nonatomic,retain) UIView*<PKSpendingSummaryFooter> nextFooter;                 //@synthesize nextFooter=_nextFooter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setTransitionProgress:(double)arg1 ;
-(void)setCurrentFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(void)setNextFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(long long)preferredBackdropStyle;
-(UIView*<PKSpendingSummaryFooter>)currentFooter;
-(UIView*<PKSpendingSummaryFooter>)nextFooter;
@end

