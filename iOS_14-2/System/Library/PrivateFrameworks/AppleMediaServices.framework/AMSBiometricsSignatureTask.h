/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureTask : AMSTask {

	AMSBiometricsSignatureRequest* _request;

}

@property (nonatomic,readonly) AMSBiometricsSignatureRequest * request;              //@synthesize request=_request - In the implementation block
-(AMSBiometricsSignatureRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(id)performSignature;
-(id)_performSignatureOutOfProcess;
-(id)_performSignatureInProcess;
-(BOOL)_performCardEnrollmentCheck:(id*)arg1 ;
@end

