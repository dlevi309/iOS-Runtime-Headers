/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_blurEffectStyle;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(void)updateWithLoadingTemplate:(id)arg1 ;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)setSpinnerDelay:(double)arg1 ;
@end

