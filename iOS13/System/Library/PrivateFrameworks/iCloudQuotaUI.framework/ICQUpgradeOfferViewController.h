/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/ICQViewController.h>

@class _ICQUpgradeOfferPageSpecification;

@interface ICQUpgradeOfferViewController : ICQViewController

@property (nonatomic,readonly) _ICQUpgradeOfferPageSpecification * upgradeOfferPageSpecification; 
@property (assign,getter=isCancelEnabled,nonatomic) BOOL cancelEnabled; 
+(BOOL)supportsPageClassIdentifier:(id)arg1 ;
-(void)loadView;
-(void)cancel:(id)arg1 ;
-(id)initWithPageSpecification:(id)arg1 ;
-(void)setCancelEnabled:(BOOL)arg1 ;
-(_ICQUpgradeOfferPageSpecification *)upgradeOfferPageSpecification;
-(id)initWithUpgradeOfferPageSpecification:(id)arg1 ;
-(BOOL)isCancelEnabled;
@end

