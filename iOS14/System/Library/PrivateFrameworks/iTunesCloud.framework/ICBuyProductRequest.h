/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(BOOL)arg3 ;
-(void)cancel;
-(id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(BOOL)arg3 ;
@end

