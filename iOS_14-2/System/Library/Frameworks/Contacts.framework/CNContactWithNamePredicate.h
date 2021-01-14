/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNMAIDPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNContactWithNamePredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate> {

	NSString* _name;
	unsigned long long _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)doesPerson:(id)arg1 matchName:(id)arg2 ;
+(id)descriptionForOptions:(unsigned long long)arg1 ;
-(id)contactsFromCLSDataStore:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

