/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMDaemonController <NSObject>
@required
-(id)syncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3;
-(id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3;
-(id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)invalidate;
-(id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(id)syncDebugPerformerWithErrorHandler:(/*^block*/id)arg1;
-(id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3;

@end

