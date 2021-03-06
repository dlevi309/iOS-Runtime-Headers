/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)init;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)_dismissalFrameForContentSize:(CGSize)arg1 ;
-(void)setContainerContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(CGSize)containerContentSize;
-(void)_layoutContainerView:(BOOL)arg1 ;
-(CGRect)_layoutFrameForContentSize:(CGSize)arg1 ;
-(void)setContainerContentSize:(CGSize)arg1 ;
@end

