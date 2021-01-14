/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSString;

@interface ABSQLPredicate : NSObject {

	/*^block*/id _bindBlock;
	/*^block*/id _matchInfoProvider;
	id _storage;
	NSString* _query;

}

@property (nonatomic,copy) id bindBlock;                      //@synthesize bindBlock=_bindBlock - In the implementation block
@property (nonatomic,copy) id matchInfoProvider;              //@synthesize matchInfoProvider=_matchInfoProvider - In the implementation block
@property (nonatomic,retain) id storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSString * query;                //@synthesize query=_query - In the implementation block
+(id)bindPlaceholderStringOfCount:(unsigned long long)arg1 ;
+(id)predicateForContactsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForContactsInRange:(NSRange)arg1 allowedStoreIdentifiers:(id)arg2 sortOrder:(int)arg3 ;
+(id)predicateForContactsInRange:(NSRange)arg1 sortOrder:(int)arg2 ;
+(id)_sqlListOfLength:(unsigned long long)arg1 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg1 country:(id)arg2 homeCountryCode:(id)arg3 prefixHint:(id)arg4 groupIdentifiers:(id)arg5 limitToOneResult:(BOOL)arg6 ;
+(id)_sqlValuesTableOfLength:(unsigned long long)arg1 columnCount:(unsigned long long)arg2 ;
+(id)predicateForMeContact;
+(id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(BOOL)arg2 ;
+(id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2 ;
+(id)predicateForContactsWithLegacyIdentifier:(int)arg1 ;
+(id)predicateForContactsMatchingName:(id)arg1 addressBook:(void*)arg2 ;
+(id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2 ;
+(id)predicateForContactsMatchingMultivalueProperty:(int)arg1 values:(id)arg2 groupIdentifiers:(id)arg3 containerIdentifiers:(id)arg4 limitToOneResult:(BOOL)arg5 map:(id)arg6 ;
+(id)predicateForContactsMatchingPhoneNumbers:(id)arg1 containerIdentifiers:(id)arg2 map:(id)arg3 ;
+(id)predicateForContactsMatchingOrganizationName:(id)arg1 ;
+(id)predicateUnioningPredicate:(id)arg1 withPredicate:(id)arg2 ;
+(id)predicateForContactsMatchingPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 containerIdentifiers:(id)arg3 map:(id)arg4 ;
+(id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(BOOL)arg2 ;
+(id)predicateForContactsInGroupWithIdentifier:(id)arg1 ;
-(NSString *)query;
-(void)setStorage:(id)arg1 ;
-(id)storage;
-(id)matchInfoProvider;
-(void)setMatchInfoProvider:(id)arg1 ;
-(id)bindBlock;
-(void)setBindBlock:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)dealloc;
@end

