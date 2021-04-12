/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SBDashBoardHomeAffordanceAnimationViewProviding, SBUIBiometricResource;
@class CSHomeAffordanceViewController, NSTimer, NSMutableDictionary, UITapGestureRecognizer, CSTeachableMomentsContainerView, NSString;

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate, UIGestureRecognizerDelegate> {

	BOOL _authenticated;
	BOOL _updateTextLabelOnNextAnimation;
	BOOL _controlCenterCoachingIsHidden;
	CSHomeAffordanceViewController* _homeAffordanceViewController;
	unsigned long long _animationState;
	id<SBDashBoardHomeAffordanceAnimationViewProviding> _viewProvider;
	id<SBUIBiometricResource> _biometricResource;
	NSTimer* _fireOffAnimationTimer;
	NSMutableDictionary* _cachedLegibilityLabels;
	UITapGestureRecognizer* _homeAffordanceClickGestureRecognizer;

}

@property (nonatomic,retain) NSTimer * fireOffAnimationTimer;                                                      //@synthesize fireOffAnimationTimer=_fireOffAnimationTimer - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                                                   //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,nonatomic) BOOL updateTextLabelOnNextAnimation;                                                  //@synthesize updateTextLabelOnNextAnimation=_updateTextLabelOnNextAnimation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLegibilityLabels;                                         //@synthesize cachedLegibilityLabels=_cachedLegibilityLabels - In the implementation block
@property (assign,nonatomic) BOOL controlCenterCoachingIsHidden;                                                   //@synthesize controlCenterCoachingIsHidden=_controlCenterCoachingIsHidden - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * homeAffordanceClickGestureRecognizer;                        //@synthesize homeAffordanceClickGestureRecognizer=_homeAffordanceClickGestureRecognizer - In the implementation block
@property (nonatomic,readonly) CSTeachableMomentsContainerView * teachableMomentsContainerView; 
@property (nonatomic,readonly) CSHomeAffordanceViewController * homeAffordanceViewController;                      //@synthesize homeAffordanceViewController=_homeAffordanceViewController - In the implementation block
@property (assign,nonatomic) unsigned long long animationState;                                                    //@synthesize animationState=_animationState - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,retain) id<SBUIBiometricResource> biometricResource;                                          //@synthesize biometricResource=_biometricResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_animationKeyForKeyPath:(id)arg1 iteration:(unsigned long long)arg2 reset:(BOOL)arg3 ;
+(void)_addRepeatedAnimationWithProvider:(/*^block*/id)arg1 toLayer:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)currentState;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(unsigned long long)animationState;
-(void)setAnimationState:(unsigned long long)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(id<SBDashBoardHomeAffordanceAnimationViewProviding>)viewProvider;
-(void)setViewProvider:(id<SBDashBoardHomeAffordanceAnimationViewProviding>)arg1 ;
-(void)_contentSizeCategoryChanged;
-(void)_updateText:(id)arg1 ;
-(id<SBUIBiometricResource>)biometricResource;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(void)_setupTimer;
-(void)_updateTextLabel;
-(void)aggregateAppearance:(id)arg1 ;
-(CSTeachableMomentsContainerView *)teachableMomentsContainerView;
-(CSHomeAffordanceViewController *)homeAffordanceViewController;
-(void)_updateLegibilitySettings;
-(void)_homeAffordanceClickRecognized:(id)arg1 ;
-(void)_setControlCenterTutorsHidden:(BOOL)arg1 ;
-(void)setUpdateTextLabelOnNextAnimation:(BOOL)arg1 ;
-(void)_moveUpTimerForFiringAfterDelay:(double)arg1 ;
-(void)_cancelTimerAndResetAnimation;
-(void)_setupTimerWithDelay:(double)arg1 ;
-(void)_updateTextLabelIfNeeded;
-(void)_addHomeAffordanceAnimation;
-(void)_addTextAnimation;
-(BOOL)_shouldTeachAboutControlCenter;
-(void)_addControlCenterGrabberAnimation;
-(void)_addControlCenterGlyphAnimation;
-(void)setFireOffAnimationTimer:(NSTimer *)arg1 ;
-(NSTimer *)fireOffAnimationTimer;
-(void)_addHomeAffordanceResetAnimation;
-(void)_addTextResetAnimation;
-(void)_addControlCenterGrabberResetAnimation;
-(void)_addControlCenterGlyphResetAnimation;
-(void)_removeNormalAnimationsForKeyPath:(id)arg1 onLayer:(id)arg2 ;
-(void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 ;
-(id)_homeAffordancePositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2 ;
-(void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 ;
-(id)_textPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2 ;
-(id)_textAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2 ;
-(id)_controlCenterGrabberPositionAnimationWithDuration:(double)arg1 beginTime:(double)arg2 ;
-(id)_controlCenterGrabberAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2 ;
-(id)_controlCenterGlyphAlphaAnimationWithDuration:(double)arg1 beginTime:(double)arg2 ;
-(BOOL)updateTextLabelOnNextAnimation;
-(NSMutableDictionary *)cachedLegibilityLabels;
-(void)setCachedLegibilityLabels:(NSMutableDictionary *)arg1 ;
-(BOOL)controlCenterCoachingIsHidden;
-(void)setControlCenterCoachingIsHidden:(BOOL)arg1 ;
-(UITapGestureRecognizer *)homeAffordanceClickGestureRecognizer;
-(void)setHomeAffordanceClickGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

