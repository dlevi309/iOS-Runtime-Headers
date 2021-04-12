/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUIBannerView.h>

@class CPSBannerItem, SBUIBannerContext, NSString;

@interface CPSBannerView : UIView <SBUIBannerView> {

	CPSBannerItem* _bannerItem;
	SBUIBannerContext* _bannerContext;

}

@property (nonatomic,retain) SBUIBannerContext * bannerContext;              //@synthesize bannerContext=_bannerContext - In the implementation block
@property (nonatomic,retain) CPSBannerItem * bannerItem;                     //@synthesize bannerItem=_bannerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(CPSBannerItem *)bannerItem;
-(id)applicationIconImage;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(SBUIBannerContext *)bannerContext;
-(void)setBannerItem:(CPSBannerItem *)arg1 ;
-(void)setBannerContext:(SBUIBannerContext *)arg1 ;
@end

