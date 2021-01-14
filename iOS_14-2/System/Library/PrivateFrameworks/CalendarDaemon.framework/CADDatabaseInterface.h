/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol CADDatabaseInterface
@required
-(void)CADDatabaseRollbackWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseCanModifyCalendarDatabase:(/*^block*/id)arg1;
-(void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetUUID:(/*^block*/id)arg1;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetNextAssignableColorWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseRebuildOccurrenceCacheWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseExportICSDataForCalendar:(id)arg1 options:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseUnregisterForDetailedChangeTracking:(/*^block*/id)arg1;
-(void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(/*^block*/id)arg6;
-(void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 options:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseGetSequenceNumber:(/*^block*/id)arg1;
-(void)CADDatabaseCommitWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseLastConfirmedSplashScreenVersion:(/*^block*/id)arg1;
-(void)CADDatabaseSaveWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(/*^block*/id)arg3;

@end

