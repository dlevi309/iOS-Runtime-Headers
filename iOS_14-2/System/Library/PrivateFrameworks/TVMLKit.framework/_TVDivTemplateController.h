/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, TVImageProxy, UIImageView, _TVOrganizerView, NSArray;

@interface _TVDivTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _viewElement;
	TVImageProxy* _backgroundImageProxy;
	UIImageView* _backgroundImageView;
	_TVOrganizerView* _contentView;
	NSArray* _viewControllers;

}

@property (nonatomic,retain) IKViewElement * viewElement;                      //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) TVImageProxy * backgroundImageProxy;              //@synthesize backgroundImageProxy=_backgroundImageProxy - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) _TVOrganizerView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                          //@synthesize viewControllers=_viewControllers - In the implementation block
-(UIImageView *)backgroundImageView;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)preferredFocusEnvironments;
-(id)init;
-(NSArray *)viewControllers;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setContentView:(_TVOrganizerView *)arg1 ;
-(void)loadView;
-(_TVOrganizerView *)contentView;
-(void)_updateContentView;
-(void)viewDidLayoutSubviews;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setBackgroundImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)backgroundImageProxy;
@end

