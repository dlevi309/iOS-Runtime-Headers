/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol CNEnumeratorRefillStrategy;
@class CNQueue;

@interface CNChangeHistoryResultEnumerator : NSEnumerator {

	CNQueue* _changes;
	CNQueue* _batchFetchQueue;
	id<CNEnumeratorRefillStrategy> _refillStrategy;

}

@property (nonatomic,copy,readonly) CNQueue * changes;                                     //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) CNQueue * batchFetchQueue;                                  //@synthesize batchFetchQueue=_batchFetchQueue - In the implementation block
@property (nonatomic,readonly) id<CNEnumeratorRefillStrategy> refillStrategy;              //@synthesize refillStrategy=_refillStrategy - In the implementation block
+(id)contactEnumeratorWithChanges:(id)arg1 keysToFetch:(id)arg2 unifyResults:(BOOL)arg3 contactStore:(id)arg4 ;
+(id)groupEnumeratorWithChanges:(id)arg1 contactStore:(id)arg2 ;
-(id)nextObject;
-(CNQueue *)changes;
-(id)initWithChanges:(id)arg1 refillStrategy:(id)arg2 ;
-(void)_fetchNextBatch;
-(CNQueue *)batchFetchQueue;
-(id<CNEnumeratorRefillStrategy>)refillStrategy;
@end

