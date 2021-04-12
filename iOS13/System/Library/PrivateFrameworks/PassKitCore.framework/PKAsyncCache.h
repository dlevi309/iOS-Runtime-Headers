/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject {

	os_unfair_lock_s _lock;
	NSCache* _itemByKey;
	NSMapTable* _weakItemByKey;
	NSMutableDictionary* _outstandingRetrievals;

}
-(id)init;
-(id)initWithCache:(id)arg1 ;
-(void)_executeRetrievalBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)retrieveItemForKey:(id)arg1 synchronous:(BOOL)arg2 retrievalBlock:(/*^block*/id)arg3 deliveryBlock:(/*^block*/id)arg4 ;
@end

