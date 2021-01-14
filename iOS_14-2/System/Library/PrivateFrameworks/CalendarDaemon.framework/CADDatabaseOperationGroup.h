/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDatabaseInterface.h>

@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADDatabaseRollbackWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCanModifyCalendarDatabase:(/*^block*/id)arg1 ;
-(void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetUUID:(/*^block*/id)arg1 ;
-(BOOL)_CADDatabaseCanModifyCalendarDatabase;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetNextAssignableColorWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)_importEvents:(id)arg1 data:(id)arg2 intoCalendarWithID:(int)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 outError:(int*)arg6 ;
-(CFArrayRef)_copyToIntCFArrayRef:(id)arg1 ;
-(void)CADDatabaseRebuildOccurrenceCacheWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseExportICSDataForCalendar:(id)arg1 options:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(CFSetRef)_copyToIntCFSetRef:(id)arg1 ;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseUnregisterForDetailedChangeTracking:(/*^block*/id)arg1 ;
-(void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 options:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseGetSequenceNumber:(/*^block*/id)arg1 ;
-(void)CADDatabaseCommitWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseLastConfirmedSplashScreenVersion:(/*^block*/id)arg1 ;
-(void)CADDatabaseSaveWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

