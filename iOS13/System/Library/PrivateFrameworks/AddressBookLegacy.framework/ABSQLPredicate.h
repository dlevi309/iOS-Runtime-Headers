/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)predicateForMeContact;
+(id)predicateForContactsMatchingPreferredChannel:(id)arg1 limitOne:(BOOL)arg2 ;
+(id)predicateForContactsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForContactsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForContactsMatchingPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 containerIdentifiers:(id)arg3 map:(id)arg4 ;
+(id)predicateForContactsMatchingName:(id)arg1 addressBook:(void*)arg2 ;
+(id)predicateForContactsMatchingMultivalueProperty:(int)arg1 values:(id)arg2 groupIdentifiers:(id)arg3 containerIdentifiers:(id)arg4 limitToOneResult:(BOOL)arg5 map:(id)arg6 ;
+(id)predicateForContactsWithLegacyIdentifier:(int)arg1 ;
+(id)predicateForContactsMatchingOrganizationName:(id)arg1 ;
+(id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(BOOL)arg2 ;
+(id)predicateForContactsInRange:(NSRange)arg1 allowedStoreIdentifiers:(id)arg2 sortOrder:(int)arg3 ;
+(id)predicateForContactsInRange:(NSRange)arg1 sortOrder:(int)arg2 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg1 country:(id)arg2 homeCountryCode:(id)arg3 prefixHint:(id)arg4 groupIdentifiers:(id)arg5 limitToOneResult:(BOOL)arg6 ;
+(id)bindPlaceholderStringOfCount:(unsigned long long)arg1 ;
+(id)_sqlListOfLength:(unsigned long long)arg1 ;
+(id)_sqlValuesTableOfLength:(unsigned long long)arg1 columnCount:(unsigned long long)arg2 ;
+(id)predicateForContactsMatchingPhoneNumbers:(id)arg1 containerIdentifiers:(id)arg2 map:(id)arg3 ;
+(id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2 ;
+(id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2 ;
+(id)predicateUnioningPredicate:(id)arg1 withPredicate:(id)arg2 ;
-(void)dealloc;
-(id)storage;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)setStorage:(id)arg1 ;
-(void)setBindBlock:(id)arg1 ;
-(id)bindBlock;
-(void)setMatchInfoProvider:(id)arg1 ;
-(id)matchInfoProvider;
@end

