/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString;

@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse {

	NSString* _prerequisiteIdentifier;

}

@property (nonatomic,copy,readonly) NSString * prerequisiteIdentifier;              //@synthesize prerequisiteIdentifier=_prerequisiteIdentifier - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)prerequisiteIdentifier;
@end

