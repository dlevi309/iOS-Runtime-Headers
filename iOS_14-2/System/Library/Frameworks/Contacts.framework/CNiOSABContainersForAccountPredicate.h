/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContainerPredicate.h>

@class NSString;

@interface CNiOSABContainersForAccountPredicate : CNPredicate <CNiOSContainerPredicate> {

	BOOL _includesDisabledContainers;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL includesDisabledContainers;                //@synthesize includesDisabledContainers=_includesDisabledContainers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithPredicate:(id)arg1 ;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(CFArrayRef)cn_copyContainersInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(BOOL)includesDisabledContainers;
-(id)initWithAccountIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2 ;
@end

