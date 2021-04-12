/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSyncInterface.h>

@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADDatabaseGetDeletableCalendars:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetDeletableSources:(/*^block*/id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
@end

