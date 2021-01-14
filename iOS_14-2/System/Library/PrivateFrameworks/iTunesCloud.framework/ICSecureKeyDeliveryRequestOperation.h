/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation {

	ICSecureKeyDeliveryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICSecureKeyDeliveryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setRequest:(ICSecureKeyDeliveryRequest *)arg1 ;
-(id)responseHandler;
-(ICSecureKeyDeliveryRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
@end

