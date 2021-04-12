/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class LAUIPhysicalButtonView;

@interface BKUIIndicatorViewController : UIViewController {

	BOOL _shouldShow;
	LAUIPhysicalButtonView* _physicalButtonView;

}

@property (nonatomic,retain) LAUIPhysicalButtonView * physicalButtonView;              //@synthesize physicalButtonView=_physicalButtonView - In the implementation block
@property (assign,nonatomic) BOOL shouldShow;                                          //@synthesize shouldShow=_shouldShow - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)init;
-(LAUIPhysicalButtonView *)physicalButtonView;
-(BOOL)shouldShow;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setShouldShow:(BOOL)arg1 ;
-(void)setPhysicalButtonView:(LAUIPhysicalButtonView *)arg1 ;
@end

