/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContactsWithIdentifiersPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString;

@interface CNiOSABContactIdentifiersPredicate : CNContactsWithIdentifiersPredicate <CNiOSContactPredicate> {

	BOOL _ignoreUnifiedIdentifiers;

}

@property (readonly) BOOL ignoreUnifiedIdentifiers;                 //@synthesize ignoreUnifiedIdentifiers=_ignoreUnifiedIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)ignoreUnifiedIdentifiers;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsEncodedFetching;
-(id)initWithIdentifiers:(id)arg1 ignoreUnifiedIdentifiers:(BOOL)arg2 ;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4 ;
-(BOOL)cn_supportsNativeSorting;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(_CFError*)arg5 ;
@end

