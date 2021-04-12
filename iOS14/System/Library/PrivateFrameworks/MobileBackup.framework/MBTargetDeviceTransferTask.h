/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(void)setKeychainTransferCompletionHandler:(id)arg1 ;
-(id)preflightCompletionHandler;
-(void)_finishKeychainTransferWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransferWithError:(id)arg2 ;
-(void)setPreflightCompletionHandler:(id)arg1 ;
-(id)keychainTransferCompletionHandler;
-(void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_start;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startKeychainTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)taskType;
-(void)startKeychainDataTransferWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPreflightWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancel;
-(void)cancel;
-(void)resume;
-(id)initWithFileTransferSession:(id)arg1 ;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2 ;
@end

