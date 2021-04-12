/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(_TVOrganizerView *)contentView;
-(void)setContentView:(_TVOrganizerView *)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)_updateContentView;
-(UIImageView *)backgroundImageView;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setBackgroundImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)backgroundImageProxy;
@end

