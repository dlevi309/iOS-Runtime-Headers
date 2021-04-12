/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNEKCalendarNotificationReferenceProvider.h>

@class NSString;

@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject <CALNEKCalendarNotificationReferenceProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 inEventStore:(id)arg3 ;
-(id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 date:(id)arg3 inEventStore:(id)arg4 ;
@end

