/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSArray, UIView, UIColor, IKImageElement;

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _templateElement;
	NSArray* _templateSubviews;
	NSArray* _templateSubcontrollers;
	UIView* _preferredFocusView;
	UIColor* _backgroundColor;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;

}
-(long long)_blurEffectStyle;
-(void)loadView;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_normalizeButtonsInViews:(id)arg1 ;
@end

