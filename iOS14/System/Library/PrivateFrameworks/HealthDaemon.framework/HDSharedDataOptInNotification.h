/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDNanoHealthNotification.h>

@class NSString;

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {

	NSString* _guardianDisplayName;

}
+(id)category;
-(id)body;
-(unsigned long long)destinations;
-(id)title;
-(id)initWithNotificationManager:(id)arg1 guardianDisplayName:(id)arg2 ;
@end

