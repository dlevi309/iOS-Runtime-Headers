/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString;

@interface AMSUserNotificationMetricsEvent : AMSMetricsEvent

@property (nonatomic,retain) NSString * displayScheduledTime; 
@property (nonatomic,retain) NSString * errorDescription; 
@property (assign,nonatomic) BOOL postedSuccessfully; 
+(id)eventForBadgingForMetricsDictionary:(id)arg1 bundleID:(id)arg2 ;
+(id)_centerForBundleId:(id)arg1 ;
+(id)eventFromMetricsDictionary:(id)arg1 centerBundleId:(id)arg2 ;
+(id)eventForSettingsChangedWithSettings:(id)arg1 bundleID:(id)arg2 ;
+(id)eventFromNotificationCenterSettings:(id)arg1 centerBundleId:(id)arg2 ;
+(id)eventForContentEngagementWithNotification:(id)arg1 ;
+(id)eventForVideoPlaybackForNotification:(id)arg1 ;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(void)setDisplayScheduledTime:(NSString *)arg1 ;
-(void)setPostedSuccessfully:(BOOL)arg1 ;
-(NSString *)displayScheduledTime;
-(id)_createDisplayCriteriaFromSettings:(id)arg1 ;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 centerBundleId:(id)arg3 ;
-(BOOL)postedSuccessfully;
-(id)_stringFromNotificationSetting:(long long)arg1 ;
@end

