/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSServiceFacility {

	FBServiceClientAuthenticator* _shutdownAuthenticator;
	FBServiceClientAuthenticator* _keyboardFocusAuthenticator;

}
+(id)targetQueue;
+(id)sharedInstance;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg1 forClient:(id)arg2 ;
-(void)_handleShutdown:(id)arg1 forClient:(id)arg2 ;
-(void)_handleTerminateApplication:(id)arg1 forClient:(id)arg2 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)_handleTerminateApplicationGroup:(id)arg1 forClient:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg1 forClient:(id)arg2 ;
-(void)_handleActions:(id)arg1 forClient:(id)arg2 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)_initWithQueue:(id)arg1 ;
-(void)_handleGetProcessHandle:(id)arg1 forClient:(id)arg2 ;
-(void)_handleSetKeyboardFocusApplication:(id)arg1 forClient:(id)arg2 ;
@end

