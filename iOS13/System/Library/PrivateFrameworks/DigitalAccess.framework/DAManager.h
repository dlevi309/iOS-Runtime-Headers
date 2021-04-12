/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/


@class NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {

	NSMutableSet* _activeSessions;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,retain) NSXPCConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
+(id)sharedManager;
+(BOOL)isSupported;
-(id)init;
-(id)connection;
-(void)registerSession:(id)arg1 ;
-(void)unregisterSession:(id)arg1 ;
-(void)releaseConnection;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(id)createPairingSessionWithDelegate:(id)arg1 ;
-(id)createSharingSessionWithDelegate:(id)arg1 ;
-(id)createManagementSessionWithDelegate:(id)arg1 ;
-(void)registerOwnerSideSharingTestInvitations:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)registerOwnerSideInvitationRequestHandler:(/*^block*/id)arg1 ;
-(void)registerFriendSideSharingTestInvitationHandler:(/*^block*/id)arg1 ;
-(void)registerFriendSideSharingTestCompletionHandler:(/*^block*/id)arg1 ;
-(void)unregisterSharingTestHandlers;
-(void)establishXpcConnection;
-(void)tearDownXpcConnection;
-(void)invalidateSessions;
-(void)registerFriendSideSharingTestCompletion:(/*^block*/id)arg1 ;
-(void)registerFriendSideSharingTestInvitationUUIDHandler:(/*^block*/id)arg1 ;
-(void)registerOwnerSideSharingTestCompletionHandler:(/*^block*/id)arg1 ;
@end

