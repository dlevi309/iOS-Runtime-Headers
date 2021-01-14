/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)groupEnumeratorWithChanges:(id)arg1 contactStore:(id)arg2 ;
+(id)contactEnumeratorWithChanges:(id)arg1 keysToFetch:(id)arg2 unifyResults:(BOOL)arg3 contactStore:(id)arg4 ;
-(CNQueue *)changes;
-(id)nextObject;
-(id<CNEnumeratorRefillStrategy>)refillStrategy;
-(CNQueue *)batchFetchQueue;
-(void)_fetchNextBatch;
-(id)initWithChanges:(id)arg1 refillStrategy:(id)arg2 ;
@end

