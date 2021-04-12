/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBUIPopoverExtensionRemoteInterface.h>

@protocol _SBUIPopoverExtensionHostInterface, SBUIPopoverExtension;
@class UIViewController;

@interface SBUIPopoverExtensionRemoteViewController : UIViewController <_SBUIPopoverExtensionRemoteInterface> {

	id<_SBUIPopoverExtensionHostInterface> _hostService;
	UIViewController*<SBUIPopoverExtension> _extensionViewController;

}

@property (nonatomic,retain) id<_SBUIPopoverExtensionHostInterface> hostService;                           //@synthesize hostService=_hostService - In the implementation block
@property (nonatomic,retain) UIViewController*<SBUIPopoverExtension> extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
+(BOOL)_isSecureForRemoteViewService;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)_updateForBundleIdentifier:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id<_SBUIPopoverExtensionHostInterface>)hostService;
-(void)setHostService:(id<_SBUIPopoverExtensionHostInterface>)arg1 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(UIViewController*<SBUIPopoverExtension>)extensionViewController;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)popoverExtensionContext;
-(void)_setupChildViewController:(id)arg1 ;
-(void)setExtensionViewController:(UIViewController*<SBUIPopoverExtension>)arg1 ;
-(void)addChildViewController:(id)arg1 ;
@end

