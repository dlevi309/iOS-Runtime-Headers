/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)deliverItem:(id)arg1 ;
-(void)addDeliveryBlock:(/*^block*/id)arg1 ;
-(id)synchronouslyRetrieve:(/*^block*/id)arg1 outDeliveryBlocks:(id*)arg2 ;
@end

