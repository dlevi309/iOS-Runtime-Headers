/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIViewControllerAccessibility_super.h>

@interface UIViewControllerAccessibility : __UIViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)setAccessibilityLabel:(id)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setNavigationControllerContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(id)_overridingPreferredFocusEnvironment;
-(void)_primitiveSetNavigationControllerContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(id)_accessibilitySpeakThisViewController;
-(id)_accessibilitySpeakThisViews;
-(id)_accessibilitySpeakThisElementsAndStrings;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(BOOL)arg2 ;
-(BOOL)_accessibilityDidLoadAccessibilityInformation;
-(void)_setAccessibilityDidLoadAccessibilityInformation:(BOOL)arg1 ;
-(BOOL)_accessibilityShouldPostScreenChangedOnPresentation;
-(BOOL)_accessibilityPresentsAsPopup;
-(id)_accessibilitySpeakThisView;
-(id)_accessibilityUserTestingViewControllerInfo;
@end

