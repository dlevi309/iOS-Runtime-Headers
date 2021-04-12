/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIShareInvitationViewControllerHost.h>

@protocol _UISharingPublicController;
@class UIViewController, NSString;

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {

	UIViewController*<_UISharingPublicController> _publicController;

}

@property (assign,nonatomic,__weak) UIViewController*<_UISharingPublicController> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)_dismissViewController;
-(void)setPublicController:(UIViewController*<_UISharingPublicController>)arg1 ;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
-(UIViewController*<_UISharingPublicController>)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_dismissViewControllerWithError:(id)arg1 ;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg1 ;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg1 ;
-(void)_cloudSharingControllerDidActivateShowSharedFolder;
-(void)_shareDidChange:(id)arg1 ;
-(void)_shareWasMadePrivate;
-(void)_performAuxiliaryActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performHeaderActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestSavedShareWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissForActivityRepresentation:(/*^block*/id)arg1 ;
-(void)_representFullscreenAfterActivityDismissal:(/*^block*/id)arg1 ;
-(void)_requestContentSize:(CGSize)arg1 ;
-(void)_updateTraitCollectionForPopoverStatus;
-(void)_dismissAndRepresentForActivity:(/*^block*/id)arg1 ;
@end

