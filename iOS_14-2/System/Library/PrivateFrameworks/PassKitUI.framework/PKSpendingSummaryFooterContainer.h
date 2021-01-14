/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setCurrentFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(void)setNextFooter:(UIView*<PKSpendingSummaryFooter>)arg1 ;
-(void)layoutSubviews;
-(long long)preferredBackdropStyle;
-(UIView*<PKSpendingSummaryFooter>)currentFooter;
-(UIView*<PKSpendingSummaryFooter>)nextFooter;
-(void)setTransitionProgress:(double)arg1 ;
@end

