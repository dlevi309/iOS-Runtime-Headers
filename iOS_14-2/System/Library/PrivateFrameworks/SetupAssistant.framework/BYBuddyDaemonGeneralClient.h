/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(/*^block*/id)factory;
-(id)_daemonConnection;
-(id)init;
-(id)backupMetadata;
-(void)getInternalSkipInfo:(/*^block*/id)arg1 ;
-(BOOL)setupAssistantNeedsToRun;
-(void)deferDataMigratorExit;
-(void)ensureSilentLoginUpgrade;
-(void)ensureShortLivedTokenUpgrade;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)cancelDataMigratorDeferredExit;
-(void)setInternalShouldSkipFlows:(BOOL)arg1 skipExceptions:(id)arg2 ;
-(void)cancelInternalSkipInfo;
@end

