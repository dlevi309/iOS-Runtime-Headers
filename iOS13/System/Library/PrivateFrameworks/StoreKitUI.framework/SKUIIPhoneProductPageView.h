/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)bannerView;
-(void)setBannerView:(UIView *)arg1 ;
-(void)animateYPosition:(double)arg1 ;
-(double)bannerOffset;
-(void)setBannerOffset:(double)arg1 ;
@end

