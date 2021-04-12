/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate {

	CNInstantMessageAddress* _imAddress;

}

@property (nonatomic,copy,readonly) CNInstantMessageAddress * imAddress;              //@synthesize imAddress=_imAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)initWithInstantMessageAddress:(id)arg1 ;
@end

