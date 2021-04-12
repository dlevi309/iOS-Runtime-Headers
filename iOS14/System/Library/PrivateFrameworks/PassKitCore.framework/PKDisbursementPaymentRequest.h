/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)disbursementSource;
-(unsigned long long)disbursementTarget;
-(PKDisbursementRequest *)disbursementRequest;
-(id)initWithDisbursementPaymentRequest:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

