/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIFocusContainerGuide, UIView;

@interface _TVListTemplateView : UIView {

	UIVisualEffectView* _backdropView;
	UIVisualEffectView* _bgVisualEffectView;
	double _bgVisualEffectOffset;
	UIFocusContainerGuide* _previewFocusGuide;
	BOOL _backdropEnabled;
	BOOL _floatingBanner;
	BOOL _shouldAdjustListForTabBar;
	BOOL _shouldAdjustPreviewForTabBar;
	UIView* _bgImageView;
	UIView* _bannerView;
	UIView* _listView;
	UIView* _previewView;

}

@property (nonatomic,retain) UIView * bgImageView;                                       //@synthesize bgImageView=_bgImageView - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                                        //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * listView;                                          //@synthesize listView=_listView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                       //@synthesize previewView=_previewView - In the implementation block
@property (assign,getter=isBackdropEnabled,nonatomic) BOOL backdropEnabled;              //@synthesize backdropEnabled=_backdropEnabled - In the implementation block
@property (nonatomic,readonly) long long listAlignment; 
@property (assign,nonatomic) BOOL floatingBanner;                                        //@synthesize floatingBanner=_floatingBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustListForTabBar;                             //@synthesize shouldAdjustListForTabBar=_shouldAdjustListForTabBar - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustPreviewForTabBar;                          //@synthesize shouldAdjustPreviewForTabBar=_shouldAdjustPreviewForTabBar - In the implementation block
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id)preferredFocusEnvironments;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(UIView *)previewView;
-(void)layoutSubviews;
-(UIView *)listView;
-(UIView *)bannerView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setBgImageView:(UIView *)arg1 ;
-(UIView *)bgImageView;
-(void)setListView:(UIView *)arg1 ;
-(void)setFloatingBanner:(BOOL)arg1 ;
-(void)setBackdropEnabled:(BOOL)arg1 ;
-(void)adjustScrollForListView:(id)arg1 ;
-(void)setOverlayBlurOffset:(double)arg1 ;
-(long long)listAlignment;
-(BOOL)shouldAdjustListForTabBar;
-(BOOL)shouldAdjustPreviewForTabBar;
-(BOOL)isBackdropEnabled;
-(BOOL)floatingBanner;
-(void)setShouldAdjustListForTabBar:(BOOL)arg1 ;
-(void)setShouldAdjustPreviewForTabBar:(BOOL)arg1 ;
@end

