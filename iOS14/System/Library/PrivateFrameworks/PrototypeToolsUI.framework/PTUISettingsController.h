/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UINavigationController.h>

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(void)px_performWithoutAnimations:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_pxswizzled_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)px_shouldPreventAnimations;
-(void)px_setShouldPreventAnimations:(BOOL)arg1 ;
-(void)_dismiss;
-(id)initWithRootSettings:(id)arg1 ;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(UIBarButtonItem *)dismissButton;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(id)_initWithRootModule:(id)arg1 ;
-(void)_reloadWithRootModule:(id)arg1 ;
@end

