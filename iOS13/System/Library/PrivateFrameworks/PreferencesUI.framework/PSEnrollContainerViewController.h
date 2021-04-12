/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController {

	BiometricKitUIEnrollViewController* _enrollController;

}

@property (nonatomic,retain) BiometricKitUIEnrollViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)teardown;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGRect)frameForEnrollmentController;
-(BiometricKitUIEnrollViewController *)enrollController;
-(void)setEnrollController:(BiometricKitUIEnrollViewController *)arg1 ;
@end

