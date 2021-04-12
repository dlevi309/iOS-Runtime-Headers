/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSMutableDictionary, NSArray, NSString;

@interface CNContactsWithIdentifiersPredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSMutableDictionary* _internalIdentifiers;
	NSArray* _identifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)identifiers;
-(id)initWithIdentifiers:(id)arg1 ;
-(BOOL)cn_supportsNativeSorting;
-(id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(id)internalIdentifiersForStoreWithIdentifier:(id)arg1 ;
-(id)contactsFromDonationStore:(id)arg1 ;
@end

