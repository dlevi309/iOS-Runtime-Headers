/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVAppNavigationController.h>

@interface _TVAppNavigationController_iOS : _TVAppNavigationController {

	BOOL _shouldFakeStatusBarVisible;
	BOOL _shouldPreventContentFromShiftingVertically;
	BOOL _originalValueForNavigationBarForceFullHeightInLandscape;

}

@property (assign,nonatomic) BOOL shouldFakeStatusBarVisible;                                           //@synthesize shouldFakeStatusBarVisible=_shouldFakeStatusBarVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventContentFromShiftingVertically;                           //@synthesize shouldPreventContentFromShiftingVertically=_shouldPreventContentFromShiftingVertically - In the implementation block
@property (assign,nonatomic) BOOL originalValueForNavigationBarForceFullHeightInLandscape;              //@synthesize originalValueForNavigationBarForceFullHeightInLandscape=_originalValueForNavigationBarForceFullHeightInLandscape - In the implementation block
-(void)viewDidLoad;
-(long long)preferredStatusBarStyle;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_accessibilityButtonBackgroundDefaultTintColor;
-(void)willPresentTraitsOverridingViewController;
-(void)didPresentTraitsOverridingViewController;
-(void)setShouldPreventContentFromShiftingVertically:(BOOL)arg1 ;
-(void)setOriginalValueForNavigationBarForceFullHeightInLandscape:(BOOL)arg1 ;
-(void)setShouldFakeStatusBarVisible:(BOOL)arg1 ;
-(BOOL)originalValueForNavigationBarForceFullHeightInLandscape;
-(BOOL)shouldPreventContentFromShiftingVertically;
-(BOOL)shouldFakeStatusBarVisible;
@end

