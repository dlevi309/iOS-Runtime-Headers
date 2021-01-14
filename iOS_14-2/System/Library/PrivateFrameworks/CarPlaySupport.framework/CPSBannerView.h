/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class CPSBannerItem;

@interface CPSBannerView : UIView {

	CPSBannerItem* _bannerItem;

}

@property (nonatomic,retain) CPSBannerItem * bannerItem;              //@synthesize bannerItem=_bannerItem - In the implementation block
-(id)initWithBannerItem:(id)arg1 ;
-(CPSBannerItem *)bannerItem;
-(id)applicationIconImage;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(void)setBannerItem:(CPSBannerItem *)arg1 ;
@end

