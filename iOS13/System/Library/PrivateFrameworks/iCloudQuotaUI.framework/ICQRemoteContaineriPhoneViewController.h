/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <iCloudQuotaUI/ICQRemoteContainerViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface ICQRemoteContaineriPhoneViewController : ICQRemoteContainerViewController <UIViewControllerTransitioningDelegate> {

	CGSize _containerContentSize;

}

@property (assign,nonatomic) CGSize containerContentSize;              //@synthesize containerContentSize=_containerContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(CGRect)_dismissalFrameForContentSize:(CGSize)arg1 ;
-(void)setContainerContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(CGSize)containerContentSize;
-(void)_layoutContainerView:(BOOL)arg1 ;
-(CGRect)_layoutFrameForContentSize:(CGSize)arg1 ;
-(void)setContainerContentSize:(CGSize)arg1 ;
@end

