/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>

@interface CADSpotlightOperationGroup : CADOperationGroup
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(id)whitelistedBundles;
+(BOOL)requiresEventAccess;
-(void)CADPushItemsToSpotlight:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(id)_gatherAllCalendarItemUUIDs;
@end

