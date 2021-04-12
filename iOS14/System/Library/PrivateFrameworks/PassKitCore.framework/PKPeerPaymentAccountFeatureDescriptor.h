/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountFeatureDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKOSVersionRequirementRange, NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {

	PKOSVersionRequirementRange* _osVersionRange;
	NSDecimalNumber* _feePercentage;
	NSDecimalNumber* _minimumFee;
	NSDecimalNumber* _maximumFee;

}

@property (nonatomic,retain) PKOSVersionRequirementRange * osVersionRange;              //@synthesize osVersionRange=_osVersionRange - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * feePercentage;                             //@synthesize feePercentage=_feePercentage - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumFee;                                //@synthesize minimumFee=_minimumFee - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumFee;                                //@synthesize maximumFee=_maximumFee - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOsVersionRange:(PKOSVersionRequirementRange *)arg1 ;
-(id)description;
-(PKOSVersionRequirementRange *)osVersionRange;
-(NSDecimalNumber *)minimumFee;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)feePercentage;
-(NSDecimalNumber *)maximumFee;
-(void)setFeePercentage:(NSDecimalNumber *)arg1 ;
-(void)setMaximumFee:(NSDecimalNumber *)arg1 ;
-(void)setMinimumFee:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

