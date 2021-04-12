/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountFeatureDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {

	NSDecimalNumber* _feePercentage;
	NSDecimalNumber* _minimumFee;
	NSDecimalNumber* _maximumFee;

}

@property (nonatomic,copy) NSDecimalNumber * feePercentage;              //@synthesize feePercentage=_feePercentage - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumFee;                 //@synthesize minimumFee=_minimumFee - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumFee;                 //@synthesize maximumFee=_maximumFee - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDecimalNumber *)feePercentage;
-(NSDecimalNumber *)minimumFee;
-(NSDecimalNumber *)maximumFee;
-(BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1 ;
-(void)setFeePercentage:(NSDecimalNumber *)arg1 ;
-(void)setMinimumFee:(NSDecimalNumber *)arg1 ;
-(void)setMaximumFee:(NSDecimalNumber *)arg1 ;
@end

