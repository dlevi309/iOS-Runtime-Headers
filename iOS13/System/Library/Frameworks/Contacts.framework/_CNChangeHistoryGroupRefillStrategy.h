/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class CNContactStore;

@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(id)fetchGroupsWithIdentifiers:(id)arg1 ;
-(id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2 ;
@end

