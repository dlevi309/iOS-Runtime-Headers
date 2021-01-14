/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/ICQViewController.h>

@class _ICQUpgradeOfferPageSpecification;

@interface ICQUpgradeOfferViewController : ICQViewController

@property (nonatomic,readonly) _ICQUpgradeOfferPageSpecification * upgradeOfferPageSpecification; 
@property (assign,getter=isCancelEnabled,nonatomic) BOOL cancelEnabled; 
+(BOOL)supportsPageClassIdentifier:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)loadView;
-(id)initWithPageSpecification:(id)arg1 ;
-(void)setCancelEnabled:(BOOL)arg1 ;
-(_ICQUpgradeOfferPageSpecification *)upgradeOfferPageSpecification;
-(id)initWithUpgradeOfferPageSpecification:(id)arg1 ;
-(BOOL)isCancelEnabled;
@end

