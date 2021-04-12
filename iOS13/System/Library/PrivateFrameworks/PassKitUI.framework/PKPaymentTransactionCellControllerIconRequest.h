/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class PKPaymentTransaction, PKMerchant, NSString, NSArray;

@interface PKPaymentTransactionCellControllerIconRequest : NSObject {

	PKPaymentTransaction* _transaction;
	PKMerchant* _merchant;
	NSString* _cacheKey;
	NSArray* _completionHandlers;
	CGSize _size;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                           //@synthesize merchant=_merchant - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                             //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,retain) NSArray * completionHandlers;                    //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(NSArray *)completionHandlers;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(PKMerchant *)merchant;
-(void)setMerchant:(PKMerchant *)arg1 ;
@end

