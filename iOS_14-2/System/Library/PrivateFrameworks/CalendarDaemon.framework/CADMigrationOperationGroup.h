/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADMigrationInterface.h>

@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADMigrateDatabaseIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
@end

