/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class SBTransientOverlayPresentationManager, SBWorkspaceTransientOverlay;

@interface SBWorkspaceTransientOverlayTransitionContext : SBWorkspaceTransitionContext {

	BOOL _animated;
	BOOL _shouldDismissSiriUponPresentation;
	BOOL _shouldPreserveAppSwitcher;
	SBTransientOverlayPresentationManager* _presentationManager;
	SBWorkspaceTransientOverlay* _transientOverlay;
	long long _transitionType;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                          //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissSiriUponPresentation;                                   //@synthesize shouldDismissSiriUponPresentation=_shouldDismissSiriUponPresentation - In the implementation block
@property (assign,nonatomic) BOOL shouldPreserveAppSwitcher;                                           //@synthesize shouldPreserveAppSwitcher=_shouldPreserveAppSwitcher - In the implementation block
@property (nonatomic,retain) SBTransientOverlayPresentationManager * presentationManager;              //@synthesize presentationManager=_presentationManager - In the implementation block
@property (nonatomic,retain) SBWorkspaceTransientOverlay * transientOverlay;                           //@synthesize transientOverlay=_transientOverlay - In the implementation block
@property (assign,nonatomic) long long transitionType;                                                 //@synthesize transitionType=_transitionType - In the implementation block
-(long long)transitionType;
-(BOOL)isAnimated;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setTransitionType:(long long)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setShouldPreserveAppSwitcher:(BOOL)arg1 ;
-(void)setPresentationManager:(SBTransientOverlayPresentationManager *)arg1 ;
-(SBTransientOverlayPresentationManager *)presentationManager;
-(BOOL)shouldPreserveAppSwitcher;
-(SBWorkspaceTransientOverlay *)transientOverlay;
-(void)setShouldDismissSiriUponPresentation:(BOOL)arg1 ;
-(void)setTransientOverlay:(SBWorkspaceTransientOverlay *)arg1 ;
-(BOOL)shouldDismissSiriUponPresentation;
@end

