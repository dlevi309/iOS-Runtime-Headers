/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNEnumeratorRefillStrategy.h>

@class NSArray, CNContactStore;

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy> {

	BOOL _unifyResults;
	NSArray* _keys;
	CNContactStore* _contactStore;

}
-(id)objectsRepresentedByBatch:(id)arg1 ;
-(id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2 ;
@end

