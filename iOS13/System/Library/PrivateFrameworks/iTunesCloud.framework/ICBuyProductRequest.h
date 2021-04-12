/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	NSDictionary* _buyParameters;
	BOOL _includeKeybagSyncData;
	id _parsedResponse;

}
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(BOOL)arg3 ;
-(id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(BOOL)arg3 ;
@end

