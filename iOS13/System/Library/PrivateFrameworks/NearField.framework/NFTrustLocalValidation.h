/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFTrustObject.h>
#import <libobjc.A.dylib/NFTrustLocalValidation.h>

@protocol NFTrustLocalValidation
@required
-(unsigned char)primitiveLocalValidation;

@end


@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation> {

	unsigned char _primitiveLocalValidation;

}

@property (assign,nonatomic) unsigned char primitiveLocalValidation;              //@synthesize primitiveLocalValidation=_primitiveLocalValidation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localValidationWithPassCode;
+(id)localValidationWithTouchID;
+(id)localValidationWithFaceID;
+(id)withPrimitiveLocalValidation:(unsigned char)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)primitiveLocalValidation;
-(void)setPrimitiveLocalValidation:(unsigned char)arg1 ;
@end

