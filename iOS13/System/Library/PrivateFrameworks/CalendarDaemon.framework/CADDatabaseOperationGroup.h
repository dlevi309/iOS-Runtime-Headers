/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDatabaseInterface.h>

@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetUUID:(/*^block*/id)arg1 ;
-(void)CADDatabaseRegisterForDetailedChangeTracking:(/*^block*/id)arg1 ;
-(void)CADDatabaseUnregisterForDetailedChangeTracking:(/*^block*/id)arg1 ;
-(void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetSequenceNumber:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetNextAssignableColorWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(/*^block*/id)arg6 ;
-(void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 preventLineFolding:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseRebuildOccurrenceCacheWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseSaveWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCommitWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseRollbackWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseResetWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCanModifyCalendarDatabase:(/*^block*/id)arg1 ;
-(void)CADDatabaseLastConfirmedSplashScreenVersion:(/*^block*/id)arg1 ;
-(CFSetRef)_copyToIntCFSetRef:(id)arg1 ;
-(CFArrayRef)_copyToIntCFArrayRef:(id)arg1 ;
-(BOOL)_CADDatabaseCanModifyCalendarDatabase;
-(id)_importEvents:(id)arg1 data:(id)arg2 intoCalendarWithID:(int)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 outError:(int*)arg6 ;
@end

