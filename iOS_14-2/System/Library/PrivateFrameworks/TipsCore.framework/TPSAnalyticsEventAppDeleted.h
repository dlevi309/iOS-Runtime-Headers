/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent
+(BOOL)supportsSecureCoding;
+(id)event;
-(id)eventName;
-(id)appLaunches;
-(id)tipViewTotal;
-(id)desiredOutcomeTotal;
-(id)notificationsPosted;
-(double)timeSinceLastNotification;
-(id)mutableAnalyticsEventRepresentation;
@end

