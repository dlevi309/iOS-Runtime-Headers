/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol OS_dispatch_queue;
#import <SetupAssistant/SetupAssistant-Structs.h>
@class NSError, RPFileTransferSession, MBDeviceTransferTask, BKSProcessAssertion, NSHashTable, MBDeviceTransferConnectionInfo, MBDeviceTransferProgress, NSObject;

@interface BYDeviceMigrationManager : NSObject {

	BOOL _willMigrate;
	BOOL _migrating;
	int _passcodeChangeNotificationToken;
	NSError* _error;
	RPFileTransferSession* _fileTransferSession;
	MBDeviceTransferTask* _deviceTransferTask;
	BKSProcessAssertion* _processAssertion;
	MKBAssertionRef _deviceLockAssertion;
	NSHashTable* _delegates;
	MBDeviceTransferConnectionInfo* _connectionInfo;
	MBDeviceTransferProgress* _progressInfo;
	unsigned long long _bytesTransferred;
	unsigned long long _filesTransferred;
	double _durationOfTransfer;
	double _durationOfRestore;
	long long _cancellationCause;
	NSObject*<OS_dispatch_queue> _migrationQueue;

}

@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (assign,getter=isMigrating,nonatomic) BOOL migrating;                            //@synthesize migrating=_migrating - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSession;                  //@synthesize fileTransferSession=_fileTransferSession - In the implementation block
@property (nonatomic,retain) MBDeviceTransferTask * deviceTransferTask;                    //@synthesize deviceTransferTask=_deviceTransferTask - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * processAssertion;                       //@synthesize processAssertion=_processAssertion - In the implementation block
@property (assign,nonatomic) MKBAssertionRef deviceLockAssertion;                          //@synthesize deviceLockAssertion=_deviceLockAssertion - In the implementation block
@property (assign,nonatomic) int passcodeChangeNotificationToken;                          //@synthesize passcodeChangeNotificationToken=_passcodeChangeNotificationToken - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                      //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) MBDeviceTransferConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (nonatomic,retain) MBDeviceTransferProgress * progressInfo;                      //@synthesize progressInfo=_progressInfo - In the implementation block
@property (assign,nonatomic) unsigned long long bytesTransferred;                          //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
@property (assign,nonatomic) unsigned long long filesTransferred;                          //@synthesize filesTransferred=_filesTransferred - In the implementation block
@property (assign,nonatomic) double durationOfTransfer;                                    //@synthesize durationOfTransfer=_durationOfTransfer - In the implementation block
@property (assign,nonatomic) double durationOfRestore;                                     //@synthesize durationOfRestore=_durationOfRestore - In the implementation block
@property (assign,nonatomic) long long cancellationCause;                                  //@synthesize cancellationCause=_cancellationCause - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> migrationQueue;                  //@synthesize migrationQueue=_migrationQueue - In the implementation block
@property (assign,nonatomic) BOOL willMigrate;                                             //@synthesize willMigrate=_willMigrate - In the implementation block
+(id)createDeviceTransferTask:(id)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)didCancel;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(BOOL)isMigrating;
-(NSObject*<OS_dispatch_queue>)migrationQueue;
-(BKSProcessAssertion *)processAssertion;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
-(MKBAssertionRef)deviceLockAssertion;
-(BOOL)takeAssertions;
-(RPFileTransferSession *)fileTransferSession;
-(void)setDeviceTransferTask:(MBDeviceTransferTask *)arg1 ;
-(MBDeviceTransferTask *)deviceTransferTask;
-(void)setConnectionInfo:(MBDeviceTransferConnectionInfo *)arg1 ;
-(void)setProgressInfo:(MBDeviceTransferProgress *)arg1 ;
-(unsigned long long)bytesTransferred;
-(void)setBytesTransferred:(unsigned long long)arg1 ;
-(unsigned long long)filesTransferred;
-(void)setFilesTransferred:(unsigned long long)arg1 ;
-(void)setDurationOfTransfer:(double)arg1 ;
-(void)setDurationOfRestore:(double)arg1 ;
-(void)didCompleteWithError:(id)arg1 ;
-(void)releaseAssertions;
-(void)setMigrating:(BOOL)arg1 ;
-(void)startDeviceTransferTask;
-(void)setWillMigrate:(BOOL)arg1 ;
-(void)cancelDeviceTransferTask;
-(void)setCancellationCause:(long long)arg1 ;
-(MBDeviceTransferConnectionInfo *)connectionInfo;
-(MBDeviceTransferProgress *)progressInfo;
-(BOOL)requiresProcessAssertion;
-(MKBAssertionRef)acquireDeviceLockAssertion;
-(void)setDeviceLockAssertion:(MKBAssertionRef)arg1 ;
-(void)_reacquireDeviceLockAssertion;
-(void)setPasscodeChangeNotificationToken:(int)arg1 ;
-(int)passcodeChangeNotificationToken;
-(BOOL)_hasAssertions;
-(id)initWithFileTranferSession:(id)arg1 ;
-(void)cancelWithCause:(long long)arg1 ;
-(void)restartDeviceTransferTask:(id)arg1 ;
-(BOOL)willMigrate;
-(double)durationOfTransfer;
-(double)durationOfRestore;
-(long long)cancellationCause;
-(void)setMigrationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

