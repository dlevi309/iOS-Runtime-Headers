/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MBDeviceTransferTask.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>

@interface MBTargetDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate> {

	AB _startedPreflight;
	AB _startedKeychainTransfer;
	AB _startedKeychainDataTransfer;
	AB _startedKeychainDataImport;
	AB _startedDataTransfer;
	/*^block*/id _preflightCompletionHandler;
	/*^block*/id _keychainTransferCompletionHandler;

}

@property (nonatomic,copy) id preflightCompletionHandler;                     //@synthesize preflightCompletionHandler=_preflightCompletionHandler - In the implementation block
@property (nonatomic,copy) id keychainTransferCompletionHandler;              //@synthesize keychainTransferCompletionHandler=_keychainTransferCompletionHandler - In the implementation block
-(void)cancel;
-(void)resume;
-(void)start;
-(void)_start;
-(void)_cancel;
-(void)_finishWithError:(id)arg1 ;
-(long long)taskType;
-(id)initWithFileTransferSession:(id)arg1 ;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2 ;
-(void)startPreflightWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainDataTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setKeychainTransferCompletionHandler:(id)arg1 ;
-(void)_finishKeychainTransferWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransferWithError:(id)arg2 ;
-(id)preflightCompletionHandler;
-(void)setPreflightCompletionHandler:(id)arg1 ;
-(id)keychainTransferCompletionHandler;
@end

