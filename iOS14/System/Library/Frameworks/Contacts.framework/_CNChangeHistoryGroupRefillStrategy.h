/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class CNContactStore;

@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 ;
-(id)fetchGroupsWithIdentifiers:(id)arg1 ;
@end

