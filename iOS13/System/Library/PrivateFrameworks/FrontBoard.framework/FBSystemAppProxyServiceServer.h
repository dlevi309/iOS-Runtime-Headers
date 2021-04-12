/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSServiceFacility {

	FBServiceClientAuthenticator* _shutdownAuthenticator;
	FBServiceClientAuthenticator* _keyboardFocusAuthenticator;

}
+(id)sharedInstance;
+(id)targetQueue;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)_initWithQueue:(id)arg1 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2 ;
-(void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2 ;
-(void)_handleActions:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 forClient:(id)arg2 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2 ;
@end

