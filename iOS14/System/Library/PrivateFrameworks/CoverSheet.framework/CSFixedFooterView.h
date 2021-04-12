/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_layoutPageControl;
-(UIView*<SBUILegibility>)statusTextView;
-(void)_addPageControl;
-(id)presentationRegions;
-(double)alternateCallToActionLabelOffset;
-(SBFPagedScrollView *)trackingScrollViewForPageControl;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTrackingScrollViewForPageControl:(SBFPagedScrollView *)arg1 ;
-(void)setAlternateCallToActionLabel:(SBUILegibilityLabel *)arg1 ;
-(SBUILegibilityLabel *)alternateCallToActionLabel;
-(void)updatePageControl;
-(void)setAlternateCallToActionLabelOffset:(double)arg1 ;
-(void)updateForLegibilitySettings:(id)arg1 ;
-(void)layoutSubviews;
-(void)_addShakeView;
-(void)setStatusTextView:(UIView*<SBUILegibility>)arg1 ;
-(void)_layoutCallToActionView;
-(void)_layoutStatusTextView;
-(SBUICallToActionLabel *)callToActionLabel;
-(void)_updateViewsForLegibilitySettings;
-(CSShakableView *)callToActionShakeView;
-(CSPageControl *)pageControl;
-(void)setCallToActionLabel:(SBUICallToActionLabel *)arg1 ;
@end

