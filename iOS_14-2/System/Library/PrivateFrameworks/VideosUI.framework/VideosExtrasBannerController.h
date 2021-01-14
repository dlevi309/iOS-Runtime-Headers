/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class IKDocumentBannerElement, UIView, UIScrollView, NSArray, UIImageView, NSLayoutConstraint;

@interface VideosExtrasBannerController : NSObject {

	IKDocumentBannerElement* _bannerElement;
	unsigned long long _vignetteType;
	UIView* _installedView;
	UIScrollView* _trackingScrollView;
	NSArray* _installedConstraints;
	UIImageView* _bannerImageView;
	UIImageView* _vignetteImageView;
	NSLayoutConstraint* _bannerImageViewHeightConstraint;
	UIView* _maskView;

}

@property (assign,nonatomic,__weak) UIView * installedView;                                     //@synthesize installedView=_installedView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * trackingScrollView;                          //@synthesize trackingScrollView=_trackingScrollView - In the implementation block
@property (nonatomic,retain) NSArray * installedConstraints;                                    //@synthesize installedConstraints=_installedConstraints - In the implementation block
@property (nonatomic,retain) UIImageView * bannerImageView;                                     //@synthesize bannerImageView=_bannerImageView - In the implementation block
@property (nonatomic,retain) UIImageView * vignetteImageView;                                   //@synthesize vignetteImageView=_vignetteImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bannerImageViewHeightConstraint;              //@synthesize bannerImageViewHeightConstraint=_bannerImageViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIView * maskView;                                                 //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,readonly) IKDocumentBannerElement * bannerElement;                         //@synthesize bannerElement=_bannerElement - In the implementation block
@property (assign,nonatomic) unsigned long long vignetteType;                                   //@synthesize vignetteType=_vignetteType - In the implementation block
-(UIView *)maskView;
-(void)setMaskView:(UIView *)arg1 ;
-(void)setVignetteType:(unsigned long long)arg1 ;
-(unsigned long long)vignetteType;
-(id)initWithBannerElement:(id)arg1 ;
-(void)installBannerOnView:(id)arg1 anchoredToScrollView:(id)arg2 ;
-(UIScrollView *)trackingScrollView;
-(UIView *)installedView;
-(void)_updateVignetteImage;
-(void)_configureBanner;
-(void)_doAllSetup;
-(IKDocumentBannerElement *)bannerElement;
-(void)setInstalledView:(UIView *)arg1 ;
-(void)setTrackingScrollView:(UIScrollView *)arg1 ;
-(NSArray *)installedConstraints;
-(void)setInstalledConstraints:(NSArray *)arg1 ;
-(UIImageView *)bannerImageView;
-(void)setBannerImageView:(UIImageView *)arg1 ;
-(UIImageView *)vignetteImageView;
-(void)setVignetteImageView:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)bannerImageViewHeightConstraint;
-(void)setBannerImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

