/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRequest.h>

@class PKDisbursementRequest;

@interface PKDisbursementPaymentRequest : PKPaymentRequest {

	PKDisbursementRequest* _disbursementRequest;
	unsigned long long _disbursementSource;
	unsigned long long _disbursementTarget;

}

@property (nonatomic,readonly) PKDisbursementRequest * disbursementRequest;              //@synthesize disbursementRequest=_disbursementRequest - In the implementation block
@property (nonatomic,readonly) unsigned long long disbursementSource;                    //@synthesize disbursementSource=_disbursementSource - In the implementation block
@property (nonatomic,readonly) unsigned long long disbursementTarget;                    //@synthesize disbursementTarget=_disbursementTarget - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)disbursementSource;
-(unsigned long long)disbursementTarget;
-(id)initWithDisbursementPaymentRequest:(id)arg1 ;
-(PKDisbursementRequest *)disbursementRequest;
@end

