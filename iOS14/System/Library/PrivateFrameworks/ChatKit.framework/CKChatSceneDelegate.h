/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSceneDelegate.h>
#import <libobjc.A.dylib/CKChatControllerDelegate.h>

@class CKDetailsNavigationController, CKNavigationController, CKCoreChatController, NSString;

@interface CKChatSceneDelegate : CKSceneDelegate <CKChatControllerDelegate> {

	CKDetailsNavigationController* _detailsNavigationController;
	CKNavigationController* _navigationController;
	CKCoreChatController* _chatController;

}

@property (nonatomic,retain) CKNavigationController * navigationController;                                   //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) CKCoreChatController * chatController;                                           //@synthesize chatController=_chatController - In the implementation block
@property (assign,nonatomic,__weak) CKDetailsNavigationController * detailsNavigationController;              //@synthesize detailsNavigationController=_detailsNavigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setNavigationController:(CKNavigationController *)arg1 ;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(id)conversation;
-(id)stateRestorationActivityForScene:(id)arg1 ;
-(void)chatController:(id)arg1 forwardComposition:(id)arg2 ;
-(long long)type;
-(CKCoreChatController *)chatController;
-(void)showConversation:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_handleRegistryWillUnregisterChatNotification:(id)arg1 ;
-(void)setChatController:(CKCoreChatController *)arg1 ;
-(void)_updateAppSnapshot;
-(void)__updateAppSnapshot;
-(id)prefersToActivatePredicate;
-(void)setDetailsNavigationController:(CKDetailsNavigationController *)arg1 ;
-(CKDetailsNavigationController *)detailsNavigationController;
-(void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2 ;
-(void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2 ;
-(void)prewarmCameraIfNecessaryForChatController:(id)arg1 ;
-(void)doneButtonPressedForChatController:(id)arg1 ;
-(void)chatController:(id)arg1 didDetachDetailsNavigationController:(id)arg2 ;
-(void)presentDetailsNavigationController:(id)arg1 ;
-(BOOL)hasDetailsNavigationController;
-(void)dismissDetailsNavigationController;
-(void)dismissAndReopenDetailsNavigationController;
-(BOOL)isDetailsNavigationControllerDetached;
-(id)canActivatePredicate;
-(void)scene:(id)arg1 continueUserActivity:(id)arg2 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)scene:(id)arg1 openURLContexts:(id)arg2 ;
-(CKNavigationController *)navigationController;
@end

