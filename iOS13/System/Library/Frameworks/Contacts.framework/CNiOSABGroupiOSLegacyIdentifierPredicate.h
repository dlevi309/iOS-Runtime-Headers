/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSGroupPredicate.h>

@class NSString;

@interface CNiOSABGroupiOSLegacyIdentifierPredicate : CNPredicate <CNiOSGroupPredicate> {

	int _iOSLegacyIdentifier;

}

@property (nonatomic,readonly) int iOSLegacyIdentifier;              //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)iOSLegacyIdentifier;
-(CFArrayRef)cn_copyGroupsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(id)initWithiOSLegacyIdentifier:(int)arg1 ;
@end

