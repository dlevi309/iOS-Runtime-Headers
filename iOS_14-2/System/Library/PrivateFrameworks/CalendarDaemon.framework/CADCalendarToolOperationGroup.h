/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarToolInterface.h>

@class NSString;

@interface CADCalendarToolOperationGroup : CADOperationGroup <CADCalendarToolInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventAccess;
-(void)CADPurgeChangeTrackingReply:(/*^block*/id)arg1 ;
-(void)CADPostSyntheticRouteHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
@end

