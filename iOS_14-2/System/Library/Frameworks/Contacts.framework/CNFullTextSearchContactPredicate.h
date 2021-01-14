/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString, NSArray;

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSString* _searchString;
	NSArray* _containerIdentifiers;
	NSArray* _groupIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * searchString;                     //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(NSArray *)containerIdentifiers;
-(NSArray *)groupIdentifiers;
-(NSString *)searchString;
@end

