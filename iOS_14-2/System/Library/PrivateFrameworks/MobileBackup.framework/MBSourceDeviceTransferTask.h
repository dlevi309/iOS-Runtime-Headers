/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MBDeviceTransferTask.h>
#import <libobjc.A.dylib/MBManagerDelegate.h>

@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(void)_start;
-(long long)taskType;
-(void)_cancel;
-(void)cancel;
-(void)resume;
-(id)initWithFileTransferSession:(id)arg1 ;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransfer:(id)arg2 ;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2 ;
@end

