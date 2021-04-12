/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol REMDaemonController <NSObject>
@required
-(void)invalidate;
-(id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3;
-(id)syncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3;
-(id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(id)syncDebugPerformerWithErrorHandler:(/*^block*/id)arg1;
-(id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3;

@end

