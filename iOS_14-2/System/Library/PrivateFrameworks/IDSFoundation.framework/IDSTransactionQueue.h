/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableArray;

@interface IDSTransactionQueue : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _transactions;

}

@property (nonatomic,retain) NSMutableArray * transactions;              //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                      //@synthesize lock=_lock - In the implementation block
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)transactions;
-(os_unfair_lock_s)lock;
-(void)prependItem:(id)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)appendItem:(id)arg1 ;
-(void)_prependTransaction:(id)arg1 ;
-(/*^block*/id)appendPendingItem:(id)arg1 ;
-(void)executeReadyItemsWithBlock:(/*^block*/id)arg1 ;
-(void)_appendTransaction:(id)arg1 ;
-(void)_readyTransaction:(id)arg1 ;
-(void)_removeTransaction:(id)arg1 ;
@end

