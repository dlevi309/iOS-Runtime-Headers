/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncSessionDelegate <NSObject>
@optional
-(BOOL)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2;

@required
-(void)syncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3;
-(void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncSessionWillBegin:(id)arg1;

@end

