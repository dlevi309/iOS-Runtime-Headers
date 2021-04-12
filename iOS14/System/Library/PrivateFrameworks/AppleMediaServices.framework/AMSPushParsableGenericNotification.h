/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSPushParsable.h>

@class NSString;

@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3 ;
+(BOOL)_shouldPresentAlertForPayload:(id)arg1 ;
+(id)_generateDialogRequestFromPayload:(id)arg1 config:(id)arg2 ;
+(id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2 ;
@end

