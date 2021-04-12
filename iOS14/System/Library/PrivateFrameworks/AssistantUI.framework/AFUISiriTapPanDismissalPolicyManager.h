/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISiriTapPanDismissalPolicyManagerDelegate;
@interface AFUISiriTapPanDismissalPolicyManager : NSObject {

	BOOL _shouldDismissForTapsAndPans;
	BOOL _idleAndQuiet;
	BOOL _dimmingLayerVisible;
	long long _dismissalPolicy;
	id<AFUISiriTapPanDismissalPolicyManagerDelegate> _delegate;

}

@property (assign,setter=_setShouldDismissForTapsAndPans:,getter=_shouldDismissForTapsAndPans,nonatomic) BOOL shouldDismissForTapsAndPans;              //@synthesize shouldDismissForTapsAndPans=_shouldDismissForTapsAndPans - In the implementation block
@property (assign,setter=_setIdleAndQuiet:,getter=_idleAndQuiet,nonatomic) BOOL idleAndQuiet;                                                           //@synthesize idleAndQuiet=_idleAndQuiet - In the implementation block
@property (assign,setter=_setDimmingLayerVisible:,getter=_dimmingLayerVisible,nonatomic) BOOL dimmingLayerVisible;                                      //@synthesize dimmingLayerVisible=_dimmingLayerVisible - In the implementation block
@property (assign,setter=_setDismissalPolicy:,getter=_dismissalPolicy,nonatomic) long long dismissalPolicy;                                             //@synthesize dismissalPolicy=_dismissalPolicy - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<AFUISiriTapPanDismissalPolicyManagerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(id)_delegate;
-(void)invalidate;
-(void)_setDelegate:(id)arg1 ;
-(long long)_dismissalPolicy;
-(void)_setDismissalPolicy:(long long)arg1 ;
-(void)_setShouldDismissForTapsAndPans:(BOOL)arg1 ;
-(void)_setIdleAndQuiet:(BOOL)arg1 ;
-(void)_dismissalPolicyForPassThroughAlways:(BOOL)arg1 forSessionState:(long long)arg2 ;
-(BOOL)_dimmingLayerVisible;
-(void)_dismissalPolicyForPassThroughUnlessDimmed:(BOOL)arg1 forSessionState:(long long)arg2 ;
-(void)_setDimmingLayerVisible:(BOOL)arg1 ;
-(void)_updateDelegateOfPolicyChange;
-(void)_setShouldDismissForTapsAndPans:(BOOL)arg1 shouldDelayDelegateUpdate:(BOOL)arg2 ;
-(BOOL)_shouldDismissForTapsAndPans;
-(id)initWithPolicy:(long long)arg1 delegate:(id)arg2 ;
-(void)idleAndQuietDidChange:(BOOL)arg1 forSessionState:(long long)arg2 dimmingLayerVisible:(BOOL)arg3 ;
-(void)idleAndQuietDidChange:(BOOL)arg1 forSessionState:(long long)arg2 ;
-(void)dimmingLayerVisibilityDidChange:(BOOL)arg1 forSessionState:(long long)arg2 ;
-(BOOL)_idleAndQuiet;
@end

