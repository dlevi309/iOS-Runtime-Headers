/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSPushParsable.h>
#import <libobjc.A.dylib/AMSUserNotificationIntentDelegate.h>

@class NSString;

@interface AMSPushParsableRichNotification : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldSkipAccountCheck;
+(void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3 ;
+(void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 ;
@end

