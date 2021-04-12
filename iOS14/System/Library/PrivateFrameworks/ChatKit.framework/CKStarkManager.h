/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CPTemplateApplicationSceneDelegate.h>
#import <libobjc.A.dylib/CPInterfaceControllerDelegate.h>
#import <UIKit/UISceneDelegate.h>

@class CKStarkConversationController, NSString;

@interface CKStarkManager : NSObject <CPTemplateApplicationSceneDelegate, CPInterfaceControllerDelegate, UISceneDelegate> {

	CKStarkConversationController* _conversationController;

}

@property (nonatomic,retain) CKStarkConversationController * conversationController;              //@synthesize conversationController=_conversationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isCarPlayConnected;
+(id)_directActionSource;
+(void)activateForRecipient:(id)arg1 ;
+(void)_activateSiriWithContext:(id)arg1 ;
+(void)activateForConversation:(id)arg1 ;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(void)scene:(id)arg1 openURLContexts:(id)arg2 ;
-(CKStarkConversationController *)conversationController;
-(void)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)openSMSURL:(id)arg1 ;
-(void)templateApplicationScene:(id)arg1 didConnectInterfaceController:(id)arg2 ;
-(void)setConversationController:(CKStarkConversationController *)arg1 ;
-(void)templateApplicationScene:(id)arg1 didDisconnectInterfaceController:(id)arg2 ;
@end

