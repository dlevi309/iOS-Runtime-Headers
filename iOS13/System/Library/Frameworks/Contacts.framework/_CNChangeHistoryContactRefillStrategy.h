/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class NSArray, CNContactStore;

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	BOOL _unifyResults;
	NSArray* _keys;
	CNContactStore* _contactStore;

}

@property (nonatomic,copy,readonly) NSArray * keys;                        //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) BOOL unifyResults;                          //@synthesize unifyResults=_unifyResults - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(NSArray *)keys;
-(CNContactStore *)contactStore;
-(BOOL)unifyResults;
-(id)initWithKeysToFetch:(id)arg1 unifyResults:(BOOL)arg2 contactStore:(id)arg3 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(id)fetchContactsWithIdentifiers:(id)arg1 ;
-(id)updateChanges:(id)arg1 withFetchedContacts:(id)arg2 ;
@end

