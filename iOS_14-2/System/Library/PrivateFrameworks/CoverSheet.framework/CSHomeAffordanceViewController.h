/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class UIView, NSMutableArray, SBFHomeGrabberSettings, UIHoverGestureRecognizer, CSHomeAffordanceView;

@interface CSHomeAffordanceViewController : CSCoverSheetViewControllerBase {

	UIView* _counterRotationView;
	NSMutableArray* _rotationWrapperViews;
	long long _orientation;
	SBFHomeGrabberSettings* _settings;
	UIHoverGestureRecognizer* _suppressAnimationForPointerGestureRecognizer;
	BOOL _suppressAnimationForPointer;
	CSHomeAffordanceView* _homeAffordanceView;
	CGPoint _homeAffordanceOffset;

}

@property (nonatomic,readonly) CSHomeAffordanceView * homeAffordanceView;              //@synthesize homeAffordanceView=_homeAffordanceView - In the implementation block
@property (assign,nonatomic) CGPoint homeAffordanceOffset;                             //@synthesize homeAffordanceOffset=_homeAffordanceOffset - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(CSHomeAffordanceView *)homeAffordanceView;
-(id)_addWrapperViewWithOrientation:(long long)arg1 ;
-(void)_layoutHomeAffordance;
-(void)setHomeAffordanceOffset:(CGPoint)arg1 ;
-(void)_handleSuppressAnimationForPointerGesture:(id)arg1 ;
-(CGRect)_homeAffordanceRestingFrame;
-(CGPoint)homeAffordanceOffset;
@end

