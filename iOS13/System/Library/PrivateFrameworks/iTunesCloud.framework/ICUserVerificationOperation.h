/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(ICUserVerificationRequest *)verificationRequest;
@end

