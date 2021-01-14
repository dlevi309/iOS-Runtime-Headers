/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CATRemoteConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2;
-(void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
-(void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
-(void)connectionDidSecure:(id)arg1;
-(void)connectionWillSecure:(id)arg1;
-(void)connectionDidClose:(id)arg1;
-(void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2;
-(void)connection:(id)arg1 didWriteDataFromStream:(id)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4 userInfo:(id)arg5;
-(void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
-(void)connection:(id)arg1 didReceiveStreamData:(id)arg2 moreComing:(BOOL)arg3;
-(void)connectionDidOpen:(id)arg1;

@end

