/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

