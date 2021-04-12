/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

@interface BRCSyncUpScheduler : BRCFSSchedulerBase
-(void)schedule;
-(id)initWithAccountSession:(id)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(BOOL)isItemInSyncUpAndInFlight:(id)arg1 ;
-(void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2 ;
-(void)deleteSyncUpJobsForItem:(id)arg1 ;
-(BOOL)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2 ;
-(unsigned long long)finishSyncUpForItem:(id)arg1 inZone:(id)arg2 success:(BOOL)arg3 ;
-(unsigned long long)inFlightDiffsForItem:(id)arg1 ;
-(void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(unsigned long long)arg2 inZone:(id)arg3 ;
-(BOOL)isItemPendingSyncUp:(id)arg1 ;
-(unsigned long long)postponeSyncUpForItem:(id)arg1 inZone:(id)arg2 ;
-(void)setState:(int)arg1 forItem:(id)arg2 zone:(id)arg3 ;
-(unsigned long long)inFlightDiffsForItem:(id)arg1 zoneRowID:(id)arg2 ;
-(void)_scheduleSyncUpJob:(id)arg1 ;
@end

