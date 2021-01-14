/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICPushNotificationsResponse;

@interface ICPushNotificationsDisableTypesRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _notificationType;
	ICPushNotificationsResponse* _response;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 notificationType:(id)arg2 ;
@end

