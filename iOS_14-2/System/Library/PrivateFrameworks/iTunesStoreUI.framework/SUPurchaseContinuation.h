/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUContinuation.h>

@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation {

	id _purchase;
	SUPurchaseManager* _purchaseManager;

}

@property (nonatomic,readonly) id purchase;                                           //@synthesize purchase=_purchase - In the implementation block
@property (assign,nonatomic,__weak) SUPurchaseManager * purchaseManager;              //@synthesize purchaseManager=_purchaseManager - In the implementation block
-(id)purchase;
-(void)start;
-(SUPurchaseManager *)purchaseManager;
-(id)initWithPurchase:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
@end

