/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
-(id)init;
-(id)_daemonConnection;
-(BOOL)setupAssistantNeedsToRun;
-(void)ensureSilentLoginUpgrade;
-(void)ensureShortLivedTokenUpgrade;
-(id)backupMetadata;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)deferDataMigratorExit;
-(void)cancelDataMigratorDeferredExit;
@end

