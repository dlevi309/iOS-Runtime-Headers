/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@end

