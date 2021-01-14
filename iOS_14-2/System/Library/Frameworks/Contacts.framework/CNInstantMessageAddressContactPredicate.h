/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate {

	CNInstantMessageAddress* _imAddress;

}

@property (nonatomic,copy,readonly) CNInstantMessageAddress * imAddress;              //@synthesize imAddress=_imAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithInstantMessageAddress:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)initWithCoder:(id)arg1 ;
@end

