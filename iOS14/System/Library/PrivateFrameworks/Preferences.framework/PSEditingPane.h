/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>

@class PSSpecifier, UIViewController;

@interface PSEditingPane : UIView {

	PSSpecifier* _specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(float)preferredHeight;
+(id)defaultBackgroundColor;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(CGRect)contentRect;
-(BOOL)changed;
-(void)insetContent;
-(id)childViewControllerForHostingViewController;
-(BOOL)requiresKeyboard;
-(BOOL)shouldInsetContent;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)preferenceValue;
-(void)setPreferenceValue:(id)arg1 ;
-(void)viewDidBecomeVisible;
-(id)preferenceSpecifier;
-(BOOL)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)specifierLabel;
-(BOOL)wantsNewButton;
-(void)setDelegate:(id)arg1 ;
-(void)editMode;
-(UIViewController *)viewController;
-(void)addNewValue;
-(void)doneEditing;
@end

