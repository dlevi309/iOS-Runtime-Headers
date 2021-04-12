/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIIPhoneProductPageView : UIView {

	UIView* _view;
	UIView* _bannerView;
	double _bannerOffset;

}

@property (nonatomic,retain) UIView * view;                    //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) double bannerOffset;              //@synthesize bannerOffset=_bannerOffset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)view;
-(UIView *)bannerView;
-(void)animateYPosition:(double)arg1 ;
-(double)bannerOffset;
-(void)setBannerOffset:(double)arg1 ;
@end

