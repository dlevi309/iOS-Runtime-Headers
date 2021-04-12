/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class PKPaymentTransaction, PKMerchant, NSString, NSArray;

@interface PKPaymentTransactionIconRequest : NSObject {

	BOOL _ignoreLogoURL;
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
@property (assign,nonatomic) BOOL ignoreLogoURL;                              //@synthesize ignoreLogoURL=_ignoreLogoURL - In the implementation block
-(NSString *)cacheKey;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(PKMerchant *)merchant;
-(NSArray *)completionHandlers;
-(unsigned long long)hash;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(BOOL)ignoreLogoURL;
-(void)setIgnoreLogoURL:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

