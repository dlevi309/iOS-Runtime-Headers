/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSAccessoryViewController.h>

@class CSAccessoryWalletView;

@interface CSAccessoryWalletViewController : CSAccessoryViewController {

	CSAccessoryWalletView* _walletView;

}

@property (nonatomic,retain) CSAccessoryWalletView * walletView;              //@synthesize walletView=_walletView - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)accessoryView;
-(void)viewDidLoad;
-(id)initWithAccessory:(id)arg1 ;
-(double)animationDurationBeforeDismissal;
-(CSAccessoryWalletView *)walletView;
-(void)setWalletView:(CSAccessoryWalletView *)arg1 ;
@end

