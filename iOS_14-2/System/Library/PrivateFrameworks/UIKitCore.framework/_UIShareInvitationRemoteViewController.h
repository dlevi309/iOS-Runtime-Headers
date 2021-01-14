/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_shareDidChange:(id)arg1 ;
-(void)_dismissViewControllerWithError:(id)arg1 ;
-(void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg1 ;
-(void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg1 ;
-(void)_cloudSharingControllerDidActivateShowSharedFolder;
-(void)_shareWasMadePrivate;
-(void)_cloudSharingControllerDidChooseTransport:(id)arg1 ;
-(void)_requestSavedShareWithCompletion:(/*^block*/id)arg1 ;
-(void)_performAuxiliaryActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performHeaderActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissForActivityRepresentation:(/*^block*/id)arg1 ;
-(void)_representFullscreenAfterActivityDismissal:(/*^block*/id)arg1 ;
-(void)_requestContentSize:(CGSize)arg1 ;
-(void)_dismissAndRepresentForActivity:(/*^block*/id)arg1 ;
-(void)_updateTraitCollectionForPopoverStatus;
-(void)viewDidLoad;
-(void)_dismissViewController;
-(void)setPublicController:(UIViewController*<_UISharingPublicController>)arg1 ;
-(UIViewController*<_UISharingPublicController>)publicController;
-(void)_tintColorDidChangeToColor:(id)arg1 ;
@end

