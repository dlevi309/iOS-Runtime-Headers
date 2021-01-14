/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarItemInterface.h>

@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id)_resultsFilteredForTCCAccess:(id)arg1 ;
-(void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseExportCalendarItemAsICS:(id)arg1 withOptions:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned)arg1 ;
-(void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id)_resultsFilteredForJunkEvents:(id)arg1 ;
-(void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(/*^block*/id)arg3 ;
@end

