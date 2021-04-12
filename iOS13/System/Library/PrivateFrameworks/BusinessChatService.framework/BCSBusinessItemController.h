/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/


#import <BusinessChatService/BusinessChatService-Structs.h>
@class BCSBusinessItemPersistentStore;

@interface BCSBusinessItemController : NSObject {

	BCSBusinessItemPersistentStore* _businessItemPersistentStore;

}

@property (nonatomic,readonly) BCSBusinessItemPersistentStore * businessItemPersistentStore;              //@synthesize businessItemPersistentStore=_businessItemPersistentStore - In the implementation block
-(id)init;
-(void)fetchBusinessItemsWithBusinessItemBucket:(SCD_Struct_BC4)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)chatSuggestVisibilityForBusinessItem:(id)arg1 ;
-(void)fetchBusinessItemWithBizID:(id)arg1 TTL:(double)arg2 forClientBundleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)deleteBusinessItemFromPersistentStore;
-(BCSBusinessItemPersistentStore *)businessItemPersistentStore;
-(BOOL)deleteBusinessItemIfExpiredWithBusinessItemObject:(id)arg1 ;
@end

