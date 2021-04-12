/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setResponseHandler:(id)arg1 ;
-(ICMusicSubscriptionStatusRequest *)request;
-(id)responseHandler;
-(id)initWithRequest:(id)arg1 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2 ;
-(BOOL)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1 ;
-(void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)allowsFuseHeaderEnrichment;
-(void)setAllowsFuseHeaderEnrichment:(BOOL)arg1 ;
@end

