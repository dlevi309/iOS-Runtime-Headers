/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableArray;

@interface PKAsyncCacheRetrievalInfo : NSObject {

	os_unfair_lock_s _lock;
	BOOL _itemFetched;
	id _item;
	NSMutableArray* _deliveryBlocks;

}
-(id)init;
-(void)addDeliveryBlock:(/*^block*/id)arg1 ;
-(id)synchronouslyRetrieve:(/*^block*/id)arg1 outDeliveryBlocks:(id*)arg2 ;
-(void)deliverItem:(id)arg1 ;
@end

