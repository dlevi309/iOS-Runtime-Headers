/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>

@protocol SBUILegibility;
@class _UILegibilitySettings, CSShakableView, SBUICallToActionLabel, SBUILegibilityLabel, UIView, CSPageControl, SBFPagedScrollView;

@interface CSFixedFooterView : CSCoverSheetViewBase {

	_UILegibilitySettings* _legibilitySettings;
	CSShakableView* _callToActionShakeView;
	SBUICallToActionLabel* _callToActionLabel;
	SBUILegibilityLabel* _alternateCallToActionLabel;
	double _alternateCallToActionLabelOffset;
	UIView*<SBUILegibility> _statusTextView;
	CSPageControl* _pageControl;
	SBFPagedScrollView* _trackingScrollViewForPageControl;

}

@property (nonatomic,readonly) CSShakableView * callToActionShakeView;                                  //@synthesize callToActionShakeView=_callToActionShakeView - In the implementation block
@property (nonatomic,retain) SBUICallToActionLabel * callToActionLabel;                                 //@synthesize callToActionLabel=_callToActionLabel - In the implementation block
@property (nonatomic,retain) SBUILegibilityLabel * alternateCallToActionLabel;                          //@synthesize alternateCallToActionLabel=_alternateCallToActionLabel - In the implementation block
@property (assign,nonatomic) double alternateCallToActionLabelOffset;                                   //@synthesize alternateCallToActionLabelOffset=_alternateCallToActionLabelOffset - In the implementation block
@property (nonatomic,retain) UIView*<SBUILegibility> statusTextView;                                    //@synthesize statusTextView=_statusTextView - In the implementation block
@property (nonatomic,readonly) CSPageControl * pageControl;                                             //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic,__weak) SBFPagedScrollView * trackingScrollViewForPageControl;              //@synthesize trackingScrollViewForPageControl=_trackingScrollViewForPageControl - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CSPageControl *)pageControl;
-(SBUICallToActionLabel *)callToActionLabel;
-(void)setCallToActionLabel:(SBUICallToActionLabel *)arg1 ;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(id)presentationRegions;
-(UIView*<SBUILegibility>)statusTextView;
-(void)setTrackingScrollViewForPageControl:(SBFPagedScrollView *)arg1 ;
-(void)updatePageControl;
-(void)_addShakeView;
-(void)_addPageControl;
-(void)_updateViewsForLegibilitySettings;
-(SBFPagedScrollView *)trackingScrollViewForPageControl;
-(void)_layoutStatusTextView;
-(void)_layoutCallToActionView;
-(void)_layoutPageControl;
-(void)setStatusTextView:(UIView*<SBUILegibility>)arg1 ;
-(CSShakableView *)callToActionShakeView;
-(SBUILegibilityLabel *)alternateCallToActionLabel;
-(void)setAlternateCallToActionLabel:(SBUILegibilityLabel *)arg1 ;
-(double)alternateCallToActionLabelOffset;
-(void)setAlternateCallToActionLabelOffset:(double)arg1 ;
@end

