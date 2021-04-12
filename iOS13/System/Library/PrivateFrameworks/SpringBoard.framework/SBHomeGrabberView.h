/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/SBAttentionAwarenessClientDelegate.h>
#import <libobjc.A.dylib/MTLumaDodgePillBackgroundLuminanceObserver.h>
#import <libobjc.A.dylib/SBSystemCursorInteractionDelegate.h>

@protocol SBHomeGrabberDelegate;
@class SBFHomeGrabberSettings, MTLumaDodgePillSettings, MTLumaDodgePillView, UIView, SBAttentionAwarenessClient, NSMutableSet, NSString;

@interface SBHomeGrabberView : UIView <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver, SBSystemCursorInteractionDelegate> {

	SBFHomeGrabberSettings* _settings;
	MTLumaDodgePillSettings* _pillSettings;
	MTLumaDodgePillView* _pillView;
	UIView* _pointerHitTestBlockingView;
	SBAttentionAwarenessClient* _idleTouchAwarenessClient;
	long long _touchState;
	unsigned long long _lastActivatingToken;
	unsigned long long _lastInitialHideToken;
	BOOL _autoHides;
	BOOL _edgeProtectEnabled;
	BOOL _shouldEnableGestures;
	NSMutableSet* _hiddenOverrides;
	long long _luma;
	long long _presence;
	long long _style;
	unsigned long long _lastVisibilityTransitionToken;
	NSMutableSet* _outstandingVisibilityTransitionTokens;
	BOOL _isSystemCursorInteractionEnabled;
	BOOL _suppressesBounce;
	id<SBHomeGrabberDelegate> _delegate;
	long long _colorBias;

}

@property (assign,nonatomic,__weak) id<SBHomeGrabberDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL autoHides;                                                   //@synthesize autoHides=_autoHides - In the implementation block
@property (assign,getter=isEdgeProtectEnabled,nonatomic) BOOL edgeProtectEnabled;              //@synthesize edgeProtectEnabled=_edgeProtectEnabled - In the implementation block
@property (assign,nonatomic) long long colorBias;                                              //@synthesize colorBias=_colorBias - In the implementation block
@property (assign,nonatomic) BOOL suppressesBounce;                                            //@synthesize suppressesBounce=_suppressesBounce - In the implementation block
@property (nonatomic,readonly) double suggestedEdgeSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<SBHomeGrabberDelegate>)delegate;
-(void)setDelegate:(id<SBHomeGrabberDelegate>)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_bounce;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)updateStyle;
-(void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1 ;
-(double)suggestedEdgeSpacing;
-(CGSize)suggestedSizeForContentWidth:(double)arg1 ;
-(BOOL)shouldBeginCursorInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(id)regionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationSettings:(id)arg3 ;
-(long long)colorBias;
-(void)setColorBias:(long long)arg1 ;
-(void)setAutoHides:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shouldEnableGestures:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 shouldEnableGestures:(BOOL)arg3 ;
-(id)_newPillView;
-(void)_setSystemCursorInteractionEnabled:(BOOL)arg1 ;
-(void)_updateIdleTouchAwarenessClient;
-(BOOL)_autohideEffectivelyEnabled;
-(void)resetAutoHideWithInitialDelay:(double)arg1 ;
-(void)resetAutoHide;
-(long long)_calculateStyle;
-(long long)_calculatePresence;
-(id)_animationSettingsForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 fromPresence:(long long)arg3 toPresence:(long long)arg4 ;
-(void)_updatePresence:(long long)arg1 style:(long long)arg2 withAnimationSettings:(id)arg3 ;
-(void)updateStyleWithAnimationSettings:(id)arg1 ;
-(BOOL)_edgeProtectEffectivelyEnabled;
-(long long)_calculateLumaStyle;
-(void)_animateToStyle:(long long)arg1 disallowAdditive:(BOOL)arg2 withAnimationSettings:(id)arg3 ;
-(CGRect)grabberFrameForBounds:(CGRect)arg1 ;
-(CGRect)_calculatePillFrame;
-(CGRect)_cursorInteractionHitTestRect;
-(void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4 ;
-(void)clientDidResetForUserAttention:(id)arg1 ;
-(void)turnOnAutoHideWithInitialDelay:(double)arg1 ;
-(void)turnOffAutoHideWithDelay:(double)arg1 ;
-(void)setEdgeProtectEnabled:(BOOL)arg1 ;
-(void)forgetBackgroundLuminance;
-(BOOL)_bounceHitTest:(CGPoint)arg1 ;
-(void)_invalidateInitialAutoHideTime;
-(void)_noteActiveForTouchThatShouldUnhideImmediately:(BOOL)arg1 ;
-(BOOL)autoHides;
-(BOOL)isEdgeProtectEnabled;
-(BOOL)suppressesBounce;
-(void)setSuppressesBounce:(BOOL)arg1 ;
@end

