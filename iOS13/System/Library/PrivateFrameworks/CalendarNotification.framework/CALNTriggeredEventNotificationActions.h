/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

