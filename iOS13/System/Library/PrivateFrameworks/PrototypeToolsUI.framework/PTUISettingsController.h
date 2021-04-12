/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UINavigationController.h>

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)_pxswizzled_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)px_performWithoutAnimations:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)px_shouldPreventAnimations;
-(void)px_setShouldPreventAnimations:(BOOL)arg1 ;
-(void)_dismiss;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)dismissButton;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithRootSettings:(id)arg1 ;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(id)_initWithRootModule:(id)arg1 ;
-(void)_reloadWithRootModule:(id)arg1 ;
@end

