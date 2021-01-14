/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate> {

	unsigned long long _suggestionIdentifier;

}

@property (readonly) unsigned long long suggestionIdentifier;              //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)cn_supportsNativeSorting;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(id)initWithSuggestionIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)suggestionIdentifier;
@end

