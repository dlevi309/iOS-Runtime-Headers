/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/CNDonationValue.h>

@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue : CNDonationValue {

	CNPostalAddress* _postalAddress;
	long long _style;
	NSString* _label;

}

@property (nonatomic,copy,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(long long)style;
-(CNPostalAddress *)postalAddress;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

