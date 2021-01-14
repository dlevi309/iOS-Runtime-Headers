/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isUberLayoutActive; 
@property (nonatomic,readonly) BOOL disableGradientBelowNavBar; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double topThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(void)setBannerView:(VUIProductBannerView *)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(VUIProductBannerView *)bannerView;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
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

