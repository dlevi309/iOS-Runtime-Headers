/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation {

	BOOL _allowsFuseHeaderEnrichment;
	ICMusicSubscriptionStatusRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICMusicSubscriptionStatusRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL allowsFuseHeaderEnrichment;                                //@synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment - In the implementation block
@property (nonatomic,copy) id responseHandler;                                               //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(id)responseHandler;
-(void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(ICMusicSubscriptionStatusRequest *)request;
-(BOOL)allowsFuseHeaderEnrichment;
-(void)setResponseHandler:(id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)setAllowsFuseHeaderEnrichment:(BOOL)arg1 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2 ;
-(BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1 ;
@end

