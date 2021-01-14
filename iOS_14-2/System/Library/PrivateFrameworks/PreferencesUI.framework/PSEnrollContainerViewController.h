/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)teardown;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(BiometricKitUIEnrollViewController *)enrollController;
-(void)setEnrollController:(BiometricKitUIEnrollViewController *)arg1 ;
@end

