/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement;

@interface _TVLoadingViewController : _TVBgImageLoadingViewController {

	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	IKViewElement* _loadingTemplateElement;
	double _spinnerDelay;

}
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(void)updateWithLoadingTemplate:(id)arg1 ;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setSpinnerDelay:(double)arg1 ;
@end

