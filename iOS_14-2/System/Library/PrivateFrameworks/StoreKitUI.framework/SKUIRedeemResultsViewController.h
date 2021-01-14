/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>

@class SKUIRedeem;

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController {

	SKUIRedeem* _redeem;
	long long _redeemCategory;

}

@property (nonatomic,retain) SKUIRedeem * redeem;                   //@synthesize redeem=_redeem - In the implementation block
@property (assign,nonatomic) long long redeemCategory;              //@synthesize redeemCategory=_redeemCategory - In the implementation block
+(BOOL)canShowResultsForRedeem:(id)arg1 ;
+(id)redeemResultsControllerForRedeem:(id)arg1 ;
-(SKUIRedeem *)redeem;
-(void)viewDidLoad;
-(void)_doneAction:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithRedeem:(id)arg1 ;
-(void)setRedeemCategory:(long long)arg1 ;
-(void)setRedeem:(SKUIRedeem *)arg1 ;
-(long long)redeemCategory;
@end

