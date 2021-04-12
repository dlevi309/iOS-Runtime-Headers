/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>

@class CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate {

	CNPostalAddress* _postalAddress;

}

@property (nonatomic,copy,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNPostalAddress *)postalAddress;
-(id)initWithPostalAddress:(id)arg1 ;
@end

