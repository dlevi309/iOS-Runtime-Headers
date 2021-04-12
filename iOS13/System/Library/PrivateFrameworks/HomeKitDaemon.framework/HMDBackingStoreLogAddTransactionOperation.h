/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreTransactionBlock;

@interface HMDBackingStoreLogAddTransactionOperation : HMDBackingStoreOperation {

	HMDBackingStoreTransactionBlock* _transaction;
	long long _pushFlags;

}

@property (nonatomic,retain) HMDBackingStoreTransactionBlock * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) long long pushFlags;                                        //@synthesize pushFlags=_pushFlags - In the implementation block
-(HMDBackingStoreTransactionBlock *)transaction;
-(void)setTransaction:(HMDBackingStoreTransactionBlock *)arg1 ;
-(long long)pushFlags;
-(void)setPushFlags:(long long)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(id)mainReturningError;
@end

