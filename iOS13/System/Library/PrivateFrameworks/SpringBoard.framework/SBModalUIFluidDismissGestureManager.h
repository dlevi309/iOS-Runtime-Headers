/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeGestureInteractionDelegate.h>

@class SBTransientOverlayPresentationManager, SBAssistantController, SBHomeGestureSettings, SBHomeGestureInteraction, SBModalUIFluidDismissGestureWorkspaceTransaction, NSString;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate> {

	SBTransientOverlayPresentationManager* _transientOverlayPresentationManager;
	SBAssistantController* _assistantController;
	SBHomeGestureSettings* _homeGestureSettings;
	SBHomeGestureInteraction* _homeGestureInteraction;
	SBModalUIFluidDismissGestureWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,readonly) SBTransientOverlayPresentationManager * transientOverlayPresentationManager;              //@synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager - In the implementation block
@property (nonatomic,readonly) SBAssistantController * assistantController;                                              //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                                //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) SBHomeGestureInteraction * homeGestureInteraction;                                          //@synthesize homeGestureInteraction=_homeGestureInteraction - In the implementation block
@property (nonatomic,retain) SBModalUIFluidDismissGestureWorkspaceTransaction * currentTransaction;                      //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionDidComplete:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(SBModalUIFluidDismissGestureWorkspaceTransaction *)currentTransaction;
-(void)setCurrentTransaction:(SBModalUIFluidDismissGestureWorkspaceTransaction *)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(SBTransientOverlayPresentationManager *)transientOverlayPresentationManager;
-(id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2 ;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SBHomeGestureInteraction *)homeGestureInteraction;
-(void)setHomeGestureInteraction:(SBHomeGestureInteraction *)arg1 ;
-(SBHomeGestureSettings *)homeGestureSettings;
-(SBAssistantController *)assistantController;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(long long)_dismissalTypeForCurrentContext;
@end

