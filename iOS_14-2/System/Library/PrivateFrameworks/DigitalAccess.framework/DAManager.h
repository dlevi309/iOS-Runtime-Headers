/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/


@class NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {

	NSMutableSet* _activeSessions;
	NSXPCConnection* _clientConnection;

}
+(BOOL)isSupported;
+(id)sharedManager;
+(void)listKeysWithSession:(id)arg1 seid:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)registerOwnerSideSharingTestCompletionHandler:(/*^block*/id)arg1 ;
-(id)createSharingSessionWithDelegate:(id)arg1 ;
-(void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)registerFriendSideInvitationUnusableHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)unregisterSession:(id)arg1 ;
-(id)createPairingSessionWithDelegate:(id)arg1 ;
-(void)registerFriendSideSharingTestInvitationHandler:(/*^block*/id)arg1 ;
-(void)unregisterSharingTestHandlers;
-(id)connection;
-(void)registerFriendSideSharingTestCompletion:(/*^block*/id)arg1 ;
-(id)createManagementSessionWithDelegate:(id)arg1 ;
-(void)registerFriendSideSharingTestInvitationUUIDHandler:(/*^block*/id)arg1 ;
-(void)registerSession:(id)arg1 ;
-(void)registerOwnerSideInvitationRequestHandler:(/*^block*/id)arg1 ;
-(void)registerFriendSideSharingTestCompletionHandler:(/*^block*/id)arg1 ;
@end

