/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithIdentifiers:(id)arg1 ;
-(NSArray *)identifiers;
-(id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)cn_supportsNativeSorting;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)internalIdentifiersForStoreWithIdentifier:(id)arg1 ;
-(id)contactsFromDonationStore:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

