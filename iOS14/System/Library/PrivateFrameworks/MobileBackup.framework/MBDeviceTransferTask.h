/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <libobjc.A.dylib/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class MBManager, NSObject, NSError, RPFileTransferSession;

@interface MBDeviceTransferTask : NSObject <MBManagerDelegate> {

	MBManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	AB _started;
	AB _canceled;
	AB _finished;
	AB _suspended;
	NSError* _completionError;
	/*^block*/id _progressHandler;
	/*^block*/id _connectionStateHandler;
	/*^block*/id _connectionInfoHandler;
	/*^block*/id _completionHandler;
	RPFileTransferSession* _fileTransferSession;

}

@property (nonatomic,retain) MBManager * manager;                                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSession;              //@synthesize fileTransferSession=_fileTransferSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain) NSError * completionError;                                //@synthesize completionError=_completionError - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id connectionStateHandler;                                  //@synthesize connectionStateHandler=_connectionStateHandler - In the implementation block
@property (nonatomic,copy) id connectionInfoHandler;                                   //@synthesize connectionInfoHandler=_connectionInfoHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(BOOL)finished;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCompletionError:(NSError *)arg1 ;
-(void)setConnectionInfoHandler:(id)arg1 ;
-(void)setConnectionStateHandler:(id)arg1 ;
-(NSError *)completionError;
-(id)connectionStateHandler;
-(id)connectionInfoHandler;
-(BOOL)_handleCompletionWithError:(id*)arg1 ;
-(void)start;
-(BOOL)started;
-(void)_finishWithError:(id)arg1 ;
-(void)setManager:(MBManager *)arg1 ;
-(BOOL)canceled;
-(void)_start;
-(id)completionHandler;
-(void)_suspend;
-(long long)taskType;
-(void)_cancel;
-(void)setProgressHandler:(id)arg1 ;
-(MBManager *)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)progressHandler;
-(void)_resume;
-(void)cancel;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(id)initWithFileTransferSession:(id)arg1 ;
-(RPFileTransferSession *)fileTransferSession;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
-(void)dealloc;
-(void)manager:(id)arg1 didUpdateDeviceTransferConnectionInfo:(id)arg2 ;
@end

