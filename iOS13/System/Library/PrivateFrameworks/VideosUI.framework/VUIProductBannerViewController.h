/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUIProductUberBackgroundInterface.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class VUIProductUberBackgroundView, IKViewElement, VUIProductBannerView, NSString;

@interface VUIProductBannerViewController : UIViewController <VUIProductUberBackgroundInterface, TVAppTemplateImpressionable> {

	VUIProductUberBackgroundView* _uberBackgroundView;
	IKViewElement* _viewElement;
	VUIProductBannerView* _bannerView;

}

@property (nonatomic,retain) VUIProductUberBackgroundView * uberBackgroundView;              //@synthesize uberBackgroundView=_uberBackgroundView - In the implementation block
@property (nonatomic,retain) VUIProductBannerView * bannerView;                              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                    //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isUberLayoutActive; 
@property (nonatomic,readonly) BOOL disableGradientBelowNavBar; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double topThreshold; 
-(CGSize)size;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(VUIProductBannerView *)bannerView;
-(void)setBannerView:(VUIProductBannerView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(BOOL)isUberLayoutActive;
-(void)setUberImageOffset:(double)arg1 ;
-(void)setBannerOpacity:(double)arg1 ;
-(BOOL)disableGradientBelowNavBar;
-(double)topThreshold;
-(void)_configureViewSubviews;
-(VUIProductUberBackgroundView *)uberBackgroundView;
-(void)setUberBackgroundView:(VUIProductUberBackgroundView *)arg1 ;
@end

