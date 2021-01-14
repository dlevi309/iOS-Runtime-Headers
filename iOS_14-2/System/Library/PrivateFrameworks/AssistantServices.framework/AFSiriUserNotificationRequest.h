/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriExternalRequest.h>

@class UNNotification, NSString;

@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest> {

	UNNotification* _notification;
	NSString* _sourceAppId;

}
+(BOOL)canBeHandled;
+(BOOL)supportedOnPlatform;
+(BOOL)supportedForApplicationWithBundleId:(id)arg1 ;
-(void)performRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 ;
@end

