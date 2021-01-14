/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindow, UIImageView, NSMapTable, UIScreen;

@interface _UIIdleModeController : NSObject {

	BOOL _didApplyVisualEffects;
	unsigned long long _dismissalTransactionID;
	UIWindow* _backgroundWindow;
	UIImageView* _vignetteView;
	BOOL _keyWindowAllowedGroupBlending;
	UIWindow* _keyWindow;
	NSMapTable* _viewsToCAFilters;
	NSMapTable* _viewsToAttributes;
	NSMapTable* _viewsToOriginalAttributes;
	BOOL _idleModeEnabled;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;                                        //@synthesize screen=_screen - In the implementation block
@property (assign,getter=isIdleModeEnabled,nonatomic) BOOL idleModeEnabled;              //@synthesize idleModeEnabled=_idleModeEnabled - In the implementation block
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2 ;
-(double)_presentationAnimationDuration;
-(void)_completeDismissal;
-(void)_enterIdleMode;
-(void)_animateDismissal;
-(BOOL)_recordLayoutAttributesStartingAtView:(id)arg1 ;
-(void)_animatePresentation;
-(void)_prepareForPresentationWithKeyWindow:(id)arg1 focusedView:(id)arg2 ;
-(id)_imageForTraitCollection:(id)arg1 ;
-(id)_originalAttributesForView:(id)arg1 comparedToIdleModeAttributes:(id)arg2 ;
-(id)_vignetteImageAroundFocusedFrame:(CGRect)arg1 ;
-(void)_applyPresentationLayoutAttributesToViews;
-(BOOL)isIdleModeEnabled;
-(double)_vignetteAlphaForUserInterfaceStyle:(long long)arg1 ;
-(double)_dimmingOverlayWhiteValueForUserInterfaceStyle:(long long)arg1 ;
-(void)_applyDismissalLayoutAttributesToViews;
-(UIScreen *)screen;
-(double)_dismissalAnimationDuration;
-(void)_exitIdleMode;
-(void)dealloc;
@end

