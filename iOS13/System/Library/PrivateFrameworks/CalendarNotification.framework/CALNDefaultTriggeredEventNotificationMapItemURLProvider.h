/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationMapItemURLProvider.h>

@class NSString;

@interface CALNDefaultTriggeredEventNotificationMapItemURLProvider : NSObject <CALNTriggeredEventNotificationMapItemURLProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_mapItemURLForEventLocation:(id)arg1 eventStartDate:(id)arg2 hypothesis:(id)arg3 ;
+(id)_mapItemURLLaunchOptionsForHypothesis:(id)arg1 routing:(id)arg2 eventStartDate:(id)arg3 ;
+(id)_eventLocationFromStructuredLocation:(id)arg1 ;
+(id)_mapItemNameFromEventLocation:(id)arg1 ;
+(id)_directionsModeForHypothesis:(id)arg1 routing:(id)arg2 ;
+(id)_mapItemURLLaunchOptionsForDirectionsMode:(id)arg1 eventDate:(id)arg2 isFromTimeToLeaveNotification:(BOOL)arg3 ;
+(id)_directionsModeForTransportType:(int)arg1 ;
+(id)_directionsModeForRouting:(id)arg1 ;
+(id)_directionsModeForLocationRoutingMode:(long long)arg1 ;
-(id)mapItemURLForOptionalEventLocation:(id)arg1 eventStartDate:(id)arg2 hypothesis:(id)arg3 ;
@end

