/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 ;
-(id)initWithRequestContext:(id)arg1 withRequestMethod:(long long)arg2 andBodyDictionary:(id)arg3 ;
@end

