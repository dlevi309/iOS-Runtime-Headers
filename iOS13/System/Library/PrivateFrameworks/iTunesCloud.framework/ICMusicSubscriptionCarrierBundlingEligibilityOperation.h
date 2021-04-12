/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation {

	NSString* _cellularProviderName;
	NSString* _mobileSubscriberCountryCode;
	NSString* _mobileSubscriberNetworkCode;
	NSString* _phoneNumber;
	NSString* _IMEI;
	BOOL _deepLink;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,getter=isDeepLink,nonatomic) BOOL deepLink;                            //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(ICStoreRequestContext *)requestContext;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setDeepLink:(BOOL)arg1 ;
-(void)_sendEnrichmentRequestWithURL:(id)arg1 preflightResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_sendSilentSMSRequestWithMessage:(id)arg1 number:(id)arg2 preflightResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_sendPreflightRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_finishEnrichmentWithBodyDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_newDefaultRequestBodyDictionary;
-(id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)arg1 error:(id)arg2 ;
-(BOOL)isDeepLink;
@end

