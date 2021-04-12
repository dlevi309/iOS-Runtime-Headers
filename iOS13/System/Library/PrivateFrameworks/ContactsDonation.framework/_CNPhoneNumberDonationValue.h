/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/CNDonationValue.h>

@class CNPhoneNumber, NSString;

@interface _CNPhoneNumberDonationValue : CNDonationValue {

	CNPhoneNumber* _phoneNumber;
	NSString* _label;

}

@property (nonatomic,copy,readonly) CNPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                         //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPhoneNumber *)phoneNumber;
-(NSString *)label;
-(id)initWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

