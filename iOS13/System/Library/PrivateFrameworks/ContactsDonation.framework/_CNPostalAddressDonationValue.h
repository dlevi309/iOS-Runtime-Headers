/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(NSString *)label;
-(CNPostalAddress *)postalAddress;
-(id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4 ;
-(void)updatePropertyListRepresentation:(id)arg1 ;
-(id)copyWithNewExpirationDate:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg1 ;
@end

