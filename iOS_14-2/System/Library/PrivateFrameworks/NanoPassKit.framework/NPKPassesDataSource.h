/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKPassesDataSource <NSObject>
@required
-(void)unregisterObserver:(id)arg1;
-(void)registerObserver:(id)arg1;
-(id)paymentPasses;
-(void)enableRemoteUpdates;
-(id)passes;
-(void)removePass:(id)arg1;
-(void)reloadPasses;
-(void)reloadPassesWithCompletion:(/*^block*/id)arg1;
-(id)passForUniqueID:(id)arg1;
-(BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
-(void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
-(void)setDefaultPaymentPass:(id)arg1;
-(void)suppressRemoteUpdates;

@end

