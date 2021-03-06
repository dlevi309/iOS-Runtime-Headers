/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTNotificationCenter.h>

@class NSString;

@interface MTDistributedNotificationPoster : NSObject <MTNotificationCenter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldNotifyForTrigger:(id)arg1 ;
-(void)dismissNotificationsForTimer:(id)arg1 ;
-(void)dismissNotificationsForAlarm:(id)arg1 ;
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

