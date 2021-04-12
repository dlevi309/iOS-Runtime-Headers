/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>

@interface CADSpotlightOperationGroup : CADOperationGroup
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(void)CADPushItemsToSpotlight:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(id)_gatherAllCalendarItemUUIDs;
@end

