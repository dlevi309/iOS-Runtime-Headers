/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setResponseHandler:(id)arg1 ;
-(ICSecureKeyDeliveryRequest *)request;
-(id)responseHandler;
@end

