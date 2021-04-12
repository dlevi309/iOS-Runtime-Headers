/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@protocol _KSTextReplacementServiceProtocol <NSObject>
@required
-(void)removeAllEntries;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)requestSyncWithReply:(/*^block*/id)arg1;
-(void)cancelPendingUpdatesWithReply:(/*^block*/id)arg1;
-(void)queryTextReplacementEntriesWithReply:(/*^block*/id)arg1;
-(void)queryTextReplacementsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;

@end

