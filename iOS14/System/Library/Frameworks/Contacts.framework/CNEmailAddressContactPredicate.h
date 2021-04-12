/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNMAIDPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSArray, NSString;

@interface CNEmailAddressContactPredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate> {

	BOOL _returnsMultipleResults;
	NSArray* _emailAddresses;
	NSArray* _groupIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * emailAddresses;                //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupIdentifiers;              //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL returnsMultipleResults;                  //@synthesize returnsMultipleResults=_returnsMultipleResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)returnsMultipleResults;
-(id)contactsFromCLSDataStore:(id)arg1 ;
-(id)shortDebugDescription;
-(id)initWithEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 returnMultipleResults:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithEmailAddress:(id)arg1 returnMultipleResults:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(NSArray *)groupIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
@end

