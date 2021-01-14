/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class ICQOffer, ICQLink, NSAttributedString;

@interface ICQUpgradeButton : UIButton {

	ICQOffer* _offer;
	ICQLink* _link;
	NSAttributedString* _attributedDetailedText;
	NSAttributedString* _attributedDetailedLink;

}

@property (nonatomic,retain) ICQOffer * offer; 
@property (nonatomic,readonly) ICQLink * link;                                           //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedDetailedText;              //@synthesize attributedDetailedText=_attributedDetailedText - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedDetailedLink;              //@synthesize attributedDetailedLink=_attributedDetailedLink - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
+(BOOL)shouldShowForOffer:(id)arg1 ;
+(id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1 ;
+(id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 buttonLinkAttributes:(id)arg3 links:(id)arg4 ;
+(id)upgradeButton;
-(ICQLink *)link;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOffer:(ICQOffer *)arg1 ;
-(ICQOffer *)offer;
-(id)buttonAttributes;
-(id)buttonLinkAttributes;
-(NSAttributedString *)attributedDetailedText;
-(NSAttributedString *)attributedDetailedLink;
@end

