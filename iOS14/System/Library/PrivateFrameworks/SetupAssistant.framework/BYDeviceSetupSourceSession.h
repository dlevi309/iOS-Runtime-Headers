/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYBuddyDaemonProximitySourceProtocol.h>
#import <libobjc.A.dylib/SASProximitySessionDelegate.h>

@class CUMessageSession, RPFileTransferSession, BYBuddyDaemonProximitySourceClient, BYBuddyDaemonMigrationSourceClient, NSString;

@interface BYDeviceSetupSourceSession : NSObject <BYBuddyDaemonProximitySourceProtocol, SASProximitySessionDelegate> {

	BOOL _hasBackupCompleted;
	BOOL _hasSyncCompleted;
	/*^block*/id _sendObjectHandler;
	/*^block*/id _progressHandler;
	CUMessageSession* _messageSession;
	RPFileTransferSession* _fileTransferSessionTemplate;
	BYBuddyDaemonProximitySourceClient* _client;
	BYBuddyDaemonMigrationSourceClient* _migrationSourceClient;
	double _backupProgress;
	double _syncProgress;
	double _timeRemaining;
	unsigned long long _currentPhase;

}

@property (retain) BYBuddyDaemonProximitySourceClient * client;                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) BYBuddyDaemonMigrationSourceClient * migrationSourceClient;              //@synthesize migrationSourceClient=_migrationSourceClient - In the implementation block
@property (assign) double backupProgress;                                                             //@synthesize backupProgress=_backupProgress - In the implementation block
@property (assign) double syncProgress;                                                               //@synthesize syncProgress=_syncProgress - In the implementation block
@property (assign) BOOL hasBackupCompleted;                                                           //@synthesize hasBackupCompleted=_hasBackupCompleted - In the implementation block
@property (assign) BOOL hasSyncCompleted;                                                             //@synthesize hasSyncCompleted=_hasSyncCompleted - In the implementation block
@property (assign) double timeRemaining;                                                              //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (assign) unsigned long long currentPhase;                                                   //@synthesize currentPhase=_currentPhase - In the implementation block
@property (nonatomic,copy) id sendObjectHandler;                                                      //@synthesize sendObjectHandler=_sendObjectHandler - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,retain) CUMessageSession * messageSession;                                       //@synthesize messageSession=_messageSession - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSessionTemplate;                     //@synthesize fileTransferSessionTemplate=_fileTransferSessionTemplate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BYBuddyDaemonProximitySourceClient *)client;
-(void)setClient:(BYBuddyDaemonProximitySourceClient *)arg1 ;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(BYBuddyDaemonMigrationSourceClient *)migrationSourceClient;
-(void)setMigrationSourceClient:(BYBuddyDaemonMigrationSourceClient *)arg1 ;
-(void)activate;
-(void)setCurrentPhase:(unsigned long long)arg1 ;
-(void)setTimeRemaining:(double)arg1 ;
-(BOOL)hasBackupCompleted;
-(double)backupProgress;
-(double)syncProgress;
-(double)timeRemaining;
-(void)setBackupProgress:(double)arg1 ;
-(void)setHasBackupCompleted:(BOOL)arg1 ;
-(void)setSyncProgress:(double)arg1 ;
-(void)setHasSyncCompleted:(BOOL)arg1 ;
-(void)finishedWithError:(id)arg1 ;
-(void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2 ;
-(void)backupCompletedWithError:(id)arg1 ;
-(void)receivedObject:(id)arg1 ;
-(id)sendObjectHandler;
-(void)setSendObjectHandler:(id)arg1 ;
-(BOOL)hasSyncCompleted;
-(unsigned long long)currentPhase;
-(CUMessageSession *)messageSession;
-(void)setMessageSession:(CUMessageSession *)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)invalidate;
-(id)progressHandler;
-(void)updateProgress;
-(RPFileTransferSession *)fileTransferSessionTemplate;
-(void)setFileTransferSessionTemplate:(RPFileTransferSession *)arg1 ;
@end

