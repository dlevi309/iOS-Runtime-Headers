/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSAccountPredicate.h>

@class NSString;

@interface CNiOSABAccountForContainerPredicate : CNPredicate <CNiOSAccountPredicate> {

	NSString* _containerIdentifier;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithPredicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(CFArrayRef)cn_copyAccountsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
@end

