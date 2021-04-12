/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPStreamDelegate <NSObject>
@required
-(void)streamDidSuspend:(id)arg1;
-(void)streamDidResume:(id)arg1;
-(void)stream:(id)arg1 didCloseWithError:(id)arg2;
-(void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3;

@end

