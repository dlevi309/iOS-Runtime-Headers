/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(id)shortDebugDescription;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(NSArray *)groupIdentifiers;
-(id)initWithEmailAddress:(id)arg1 groupIdentifiers:(id)arg2 returnMultipleResults:(BOOL)arg3 ;
-(BOOL)returnsMultipleResults;
-(id)initWithEmailAddress:(id)arg1 returnMultipleResults:(BOOL)arg2 ;
-(id)contactsFromCLSDataStore:(id)arg1 ;
@end

