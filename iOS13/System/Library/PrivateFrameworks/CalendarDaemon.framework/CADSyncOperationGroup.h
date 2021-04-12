/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSyncInterface.h>

@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetDeletableCalendars:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetDeletableSources:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetOrCreateSubscribedCalendarsSource:(/*^block*/id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
@end

