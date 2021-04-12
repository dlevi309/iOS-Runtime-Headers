/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICUserVerificationRequest;

@interface ICUserVerificationOperation : ICAsyncOperation {

	ICUserVerificationRequest* _verificationRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICUserVerificationRequest * verificationRequest;              //@synthesize verificationRequest=_verificationRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                    //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)operationWithVerificationRequest:(id)arg1 ;
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(ICUserVerificationRequest *)verificationRequest;
@end

