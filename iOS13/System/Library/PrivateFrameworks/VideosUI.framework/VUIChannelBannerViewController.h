/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VUIProductUberBackgroundInterface.h>

@class VUIProductUberBackgroundView, IKViewElement, VUIChannelBannerView, NSString;

@interface VUIChannelBannerViewController : UIViewController <VUIProductUberBackgroundInterface> {

	VUIProductUberBackgroundView* _uberBackgroundView;
	IKViewElement* _viewElement;
	VUIChannelBannerView* _bannerView;

}

@property (nonatomic,readonly) VUIProductUberBackgroundView * uberBackgroundView;              //@synthesize uberBackgroundView=_uberBackgroundView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                      //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUIChannelBannerView * bannerView;                              //@synthesize bannerView=_bannerView - In the implementation block
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
-(void)_configureSubviews;
-(VUIChannelBannerView *)bannerView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)isUberLayoutActive;
-(void)setUberImageOffset:(double)arg1 ;
-(void)setBannerOpacity:(double)arg1 ;
-(BOOL)disableGradientBelowNavBar;
-(double)topThreshold;
-(VUIProductUberBackgroundView *)uberBackgroundView;
@end

