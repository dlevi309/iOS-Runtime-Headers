/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreRequestContext, ICStoreURLRequest, ICMusicAccountNotificationsSettingsResponse, NSDictionary;

@interface ICMusicAccountNotificationsSettingsRequestOperation : ICRequestOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	ICMusicAccountNotificationsSettingsResponse* _response;
	long long _requestMethod;
	NSDictionary* _bodyDictionary;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 andBodyDictionary:(id)arg3 ;
-(void)cancel;
@end

