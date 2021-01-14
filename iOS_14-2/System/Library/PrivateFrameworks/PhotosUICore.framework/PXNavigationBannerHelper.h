/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class UIViewController, _UINavigationControllerPalette;

@interface PXNavigationBannerHelper : NSObject {

	BOOL _enabled;
	UIViewController* _viewController;
	_UINavigationControllerPalette* _palette;

}

@property (nonatomic,retain) _UINavigationControllerPalette * palette;                //@synthesize palette=_palette - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
-(_UINavigationControllerPalette *)palette;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIViewController *)viewController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPalette:(_UINavigationControllerPalette *)arg1 ;
-(BOOL)isEnabled;
@end

