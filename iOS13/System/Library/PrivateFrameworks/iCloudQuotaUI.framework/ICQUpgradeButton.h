/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class ICQOffer, ICQLink;

@interface ICQUpgradeButton : UIButton {

	ICQOffer* _offer;
	ICQLink* _link;

}

@property (nonatomic,retain) ICQOffer * offer; 
@property (nonatomic,readonly) ICQLink * link;              //@synthesize link=_link - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
+(BOOL)shouldShowForOffer:(id)arg1 ;
+(id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1 ;
+(id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 buttonLinkAttributes:(id)arg3 links:(id)arg4 ;
+(id)upgradeButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(ICQLink *)link;
-(ICQOffer *)offer;
-(void)setOffer:(ICQOffer *)arg1 ;
-(id)buttonAttributes;
-(id)buttonLinkAttributes;
@end

