/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADAccessInterface.h>

@interface CADAccessOperationGroup : CADOperationGroup <CADAccessInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseSetInitializationOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetAccess:(/*^block*/id)arg1 ;
@end

