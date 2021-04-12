/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	BOOL _isEnabled;
	BOOL _canSubscribe;
	BOOL _isSubscriber;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 ;
@end

