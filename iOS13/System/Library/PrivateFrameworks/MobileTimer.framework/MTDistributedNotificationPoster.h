/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissNotificationsForAlarm:(id)arg1 ;
-(void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissNotificationsForTimer:(id)arg1 ;
@end

