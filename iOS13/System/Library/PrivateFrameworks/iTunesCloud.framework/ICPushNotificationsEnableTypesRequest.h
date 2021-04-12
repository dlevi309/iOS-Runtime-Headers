/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, NSDictionary, ICPushNotificationsResponse;

@interface ICPushNotificationsEnableTypesRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _notificationType;
	NSDictionary* _notificationParams;
	ICPushNotificationsResponse* _response;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 notificationType:(id)arg2 notificationParameters:(id)arg3 ;
@end

