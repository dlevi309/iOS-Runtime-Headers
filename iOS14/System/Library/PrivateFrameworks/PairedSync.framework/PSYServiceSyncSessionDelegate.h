/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/


@protocol PSYServiceSyncSessionDelegate <NSObject>
@required
-(void)syncSession:(id)arg1 reportProgress:(double)arg2;
-(void)syncSessionDidComplete:(id)arg1;
-(void)syncSessionDidCompleteSending:(id)arg1;
-(void)syncSession:(id)arg1 didFailWithError:(id)arg2;

@end

