/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(void)start;
-(id)purchase;
-(id)initWithPurchase:(id)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(SUPurchaseManager *)purchaseManager;
@end

