/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSceneDelegate.h>
#import <libobjc.A.dylib/CKMessagesControllerDelegate.h>
#import <libobjc.A.dylib/CKAlertSuppressionContextsProviding.h>

@class CKMessagesController, CKSceneDelegateState, CKRegistrationViewController, NSSet;

@interface CKMessagesSceneDelegate : CKSceneDelegate <CKMessagesControllerDelegate, CKAlertSuppressionContextsProviding> {

	BOOL _suspended;
	BOOL _locked;
	BOOL _shouldShowRegistrationOverride;
	CKMessagesController* _messagesController;
	CKSceneDelegateState* _storedState;
	CKRegistrationViewController* _madridRegistrationController;

}

@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                        //@synthesize suspended=_suspended - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                                              //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) CKSceneDelegateState * storedState;                                       //@synthesize storedState=_storedState - In the implementation block
@property (nonatomic,retain) CKRegistrationViewController * madridRegistrationController;              //@synthesize madridRegistrationController=_madridRegistrationController - In the implementation block
@property (assign,nonatomic) BOOL shouldShowRegistrationOverride;                                      //@synthesize shouldShowRegistrationOverride=_shouldShowRegistrationOverride - In the implementation block
@property (nonatomic,readonly) CKMessagesController * messagesController;                              //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,readonly) NSSet * alertSuppressionContexts; 
-(BOOL)isLocked;
-(BOOL)isSuspended;
-(CKMessagesController *)messagesController;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_messageUnknownFilteringEnabled;
-(CKSceneDelegateState *)storedState;
-(void)messagesController:(id)arg1 didUpdateCurrentConversation:(id)arg2 ;
-(void)windowSceneDidBecomeVisible:(id)arg1 ;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg1 ;
-(void)openSURFURL:(id)arg1 ;
-(id)sharedConversationList;
-(void)_handleAccountsChanged:(id)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_destroyMadridRegistrationView;
-(void)_scheduleDeferredSetup;
-(void)_prepareForResume:(BOOL)arg1 ;
-(void)_showMadridRegistrationViewIfNecessary;
-(void)_updateStoredState;
-(BOOL)restoreStateFromUserActivity:(id)arg1 ;
-(void)_showPeerPaymentUIForPerson:(id)arg1 amount:(id)arg2 ;
-(BOOL)_restoreState:(id)arg1 ;
-(BOOL)_shouldShowMadridRegistrationView;
-(void)_updateMadridRegistrationViewAnimated:(BOOL)arg1 ;
-(void)_clearOldInputContextIdentifiersIfNeeded;
-(void)loadConversationWithMessageGUID:(id)arg1 ;
-(void)_setMessageFilterModeBy:(id)arg1 ;
-(id)validIntentDictionaryWithURLParameters:(id)arg1 ;
-(BOOL)shouldRestoreToConversationListForState:(id)arg1 ;
-(void)setStoredState:(CKSceneDelegateState *)arg1 ;
-(void)__showMadridRegistrationViewIfNecessary;
-(void)_createMadridRegistrationViewIfNecessary;
-(id)_oldInputContextIdentifiers;
-(CKRegistrationViewController *)madridRegistrationController;
-(void)setMadridRegistrationController:(CKRegistrationViewController *)arg1 ;
-(BOOL)shouldShowRegistrationOverride;
-(void)setShouldShowRegistrationOverride:(BOOL)arg1 ;
-(id)stateRestorationActivityForScene:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(long long)type;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_updateAppSnapshot;
-(void)__updateAppSnapshot;
-(id)prefersToActivatePredicate;
-(id)canActivatePredicate;
-(void)scene:(id)arg1 continueUserActivity:(id)arg2 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(NSSet *)alertSuppressionContexts;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)sceneWillResignActive:(id)arg1 ;
-(void)scene:(id)arg1 openURLContexts:(id)arg2 ;
-(void)_prepareForSuspend;
-(void)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)openSMSURL:(id)arg1 ;
-(void)dealloc;
@end

