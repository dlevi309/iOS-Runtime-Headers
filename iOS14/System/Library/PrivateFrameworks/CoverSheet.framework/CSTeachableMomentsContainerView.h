/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>
#import <libobjc.A.dylib/SBUIOptionalLegibility.h>

@class _UILegibilitySettings, UIView, UIImageView, SBUILegibilityLabel, UIStatusBar, NSString;

@interface CSTeachableMomentsContainerView : CSCoverSheetViewBase <SBUIOptionalLegibility> {

	_UILegibilitySettings* _legibilitySettings;
	UIView* _controlCenterGrabberView;
	UIView* _controlCenterGrabberPositionPlaceholderView;
	UIImageView* _controlCenterGlyphView;
	SBUILegibilityLabel* _callToActionLabel;
	UIView* _callToActionLabelPositionPlaceholderView;
	UIStatusBar* _statusBarToFollow;
	UIView* _controlCenterGrabberEffectContainerView;
	UIView* _controlCenterTutorsContainerView;
	UIView* _controlCenterGrabberContainerView;
	UIView* _controlCenterGlyphContainerView;
	UIView* _callToActionLabelContainerView;
	UIView* _homeAffordanceContainerView;
	UIView* _homeAffordanceView;

}

@property (nonatomic,retain) UIView * controlCenterGrabberEffectContainerView;                  //@synthesize controlCenterGrabberEffectContainerView=_controlCenterGrabberEffectContainerView - In the implementation block
@property (nonatomic,retain) UIView * controlCenterTutorsContainerView;                         //@synthesize controlCenterTutorsContainerView=_controlCenterTutorsContainerView - In the implementation block
@property (nonatomic,retain) UIView * controlCenterGrabberContainerView;                        //@synthesize controlCenterGrabberContainerView=_controlCenterGrabberContainerView - In the implementation block
@property (nonatomic,retain) UIView * controlCenterGlyphContainerView;                          //@synthesize controlCenterGlyphContainerView=_controlCenterGlyphContainerView - In the implementation block
@property (nonatomic,retain) UIView * callToActionLabelContainerView;                           //@synthesize callToActionLabelContainerView=_callToActionLabelContainerView - In the implementation block
@property (nonatomic,retain) UIView * homeAffordanceContainerView;                              //@synthesize homeAffordanceContainerView=_homeAffordanceContainerView - In the implementation block
@property (nonatomic,retain) UIView * homeAffordanceView;                                       //@synthesize homeAffordanceView=_homeAffordanceView - In the implementation block
@property (nonatomic,retain) UIView * controlCenterGrabberView;                                 //@synthesize controlCenterGrabberView=_controlCenterGrabberView - In the implementation block
@property (nonatomic,retain) UIView * controlCenterGrabberPositionPlaceholderView;              //@synthesize controlCenterGrabberPositionPlaceholderView=_controlCenterGrabberPositionPlaceholderView - In the implementation block
@property (nonatomic,retain) UIImageView * controlCenterGlyphView;                              //@synthesize controlCenterGlyphView=_controlCenterGlyphView - In the implementation block
@property (nonatomic,retain) SBUILegibilityLabel * callToActionLabel;                           //@synthesize callToActionLabel=_callToActionLabel - In the implementation block
@property (nonatomic,retain) UIView * callToActionLabelPositionPlaceholderView;                 //@synthesize callToActionLabelPositionPlaceholderView=_callToActionLabelPositionPlaceholderView - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBar * statusBarToFollow;                            //@synthesize statusBarToFollow=_statusBarToFollow - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                        //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentationRegions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_preferredTextSizeChanged:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(SBUILegibilityLabel *)callToActionLabel;
-(void)_updateViewsForLegibilitySettings;
-(void)setCallToActionLabel:(SBUILegibilityLabel *)arg1 ;
-(UIView *)homeAffordanceView;
-(void)_layoutCallToActionLabel;
-(void)setHomeAffordanceView:(UIView *)arg1 ;
-(UIView *)callToActionLabelPositionPlaceholderView;
-(UIView *)controlCenterGrabberPositionPlaceholderView;
-(UIView *)controlCenterGrabberView;
-(UIImageView *)controlCenterGlyphView;
-(UIView *)controlCenterGlyphContainerView;
-(UIView *)controlCenterGrabberContainerView;
-(void)setStatusBarToFollow:(UIStatusBar *)arg1 ;
-(void)setHomeAffordanceContainerView:(UIView *)arg1 ;
-(BOOL)statusBarIsReady;
-(UIView *)controlCenterTutorsContainerView;
-(UIView *)callToActionLabelContainerView;
-(id)createCallToActionLabel;
-(void)_addCallToActionLabel;
-(void)_addControlCenterTutors;
-(void)_layoutHomeAffordanceContainer;
-(void)_layoutControlCenterGrabberAndGlyph;
-(id)_callToActionLabelFont;
-(void)setCallToActionLabelContainerView:(UIView *)arg1 ;
-(void)setCallToActionLabelPositionPlaceholderView:(UIView *)arg1 ;
-(void)setControlCenterTutorsContainerView:(UIView *)arg1 ;
-(void)setControlCenterGrabberContainerView:(UIView *)arg1 ;
-(void)setControlCenterGrabberEffectContainerView:(UIView *)arg1 ;
-(void)setControlCenterGrabberView:(UIView *)arg1 ;
-(void)setControlCenterGrabberPositionPlaceholderView:(UIView *)arg1 ;
-(void)setControlCenterGlyphContainerView:(UIView *)arg1 ;
-(void)setControlCenterGlyphView:(UIImageView *)arg1 ;
-(UIView *)homeAffordanceContainerView;
-(UIView *)controlCenterGrabberEffectContainerView;
-(CGPoint)_grabberCenterForCointainerBounds:(CGRect)arg1 grabberTop:(double)arg2 grabberSize:(CGSize)arg3 ;
-(UIStatusBar *)statusBarToFollow;
@end

