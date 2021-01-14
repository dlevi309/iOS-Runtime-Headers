/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)pushFlags;
-(void)setPushFlags:(long long)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(void)setTransaction:(HMDBackingStoreTransactionBlock *)arg1 ;
-(HMDBackingStoreTransactionBlock *)transaction;
-(id)mainReturningError;
@end

