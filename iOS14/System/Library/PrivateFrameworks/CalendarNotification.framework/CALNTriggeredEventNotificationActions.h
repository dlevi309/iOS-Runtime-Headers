/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationActionUpdater.h>
#import <libobjc.A.dylib/CALNTriggeredEventNotificationResponseLaunchURLProvider.h>

@class NSString;

@interface CALNTriggeredEventNotificationActions : NSObject <CALNTriggeredEventNotificationActionUpdater, CALNTriggeredEventNotificationResponseLaunchURLProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_mailOrganizerActionForNotification:(id)arg1 ;
+(id)_mailtoURLForNotification:(id)arg1 ;
-(id)updatedActionsForNotification:(id)arg1 existingActions:(id)arg2 ;
-(id)launchURLForResponse:(id)arg1 ;
@end

