/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent

@property (nonatomic,retain) NSString * displayScheduledTime; 
@property (nonatomic,retain) NSString * errorDescription; 
@property (assign,nonatomic) BOOL postedSuccessfully; 
+(id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2 ;
+(id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2 ;
+(id)_centerForBundleId:(id)arg1 ;
+(id)eventForVideoPlaybackForNotification:(id)arg1 ;
+(id)eventForSettingsChangedWithSettings:(id)arg1 bundleID:(id)arg2 ;
+(id)eventForContentEngagementWithNotification:(id)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 centerBundleId:(id)arg3 ;
-(NSString *)displayScheduledTime;
-(BOOL)postedSuccessfully;
-(void)setDisplayScheduledTime:(NSString *)arg1 ;
-(void)setPostedSuccessfully:(BOOL)arg1 ;
@end

