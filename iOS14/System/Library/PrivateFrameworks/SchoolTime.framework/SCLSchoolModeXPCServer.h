/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@protocol SCLSchoolModeXPCServer <NSObject>
@required
-(oneway void)dumpState;
-(oneway void)connectWithPairingID:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3;
-(oneway void)applySchedule:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)setActive:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(oneway void)fetchRecentUnlockHistoryItemsWithCompletion:(/*^block*/id)arg1;
-(oneway void)addUnlockHistoryItem:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)deleteHistoryWithCompletion:(/*^block*/id)arg1;
-(oneway void)noteSignificantUserInteraction;
-(oneway void)triggerRemoteSync;
-(oneway void)reconnectWithPairingID:(id)arg1 identifier:(id)arg2;

@end

