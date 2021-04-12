/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNDonationOrigin;

@interface CNDonationValue : NSObject <NSSecureCoding> {

	CNDonationOrigin* _origin;

}

@property (nonatomic,copy,readonly) CNDonationOrigin * origin;              //@synthesize origin=_origin - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)donationValueWithNameComponents:(id)arg1 origin:(id)arg2 ;
+(id)donationValueWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3 ;
+(id)donationValueWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3 ;
+(id)donationValueWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4 ;
+(id)donationValueWithImageData:(id)arg1 origin:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNDonationOrigin *)origin;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

