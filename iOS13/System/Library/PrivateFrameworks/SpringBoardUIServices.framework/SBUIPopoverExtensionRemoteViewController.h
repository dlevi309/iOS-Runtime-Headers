/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(UIViewController*<SBUIPopoverExtension>)extensionViewController;
-(void)setExtensionViewController:(UIViewController*<SBUIPopoverExtension>)arg1 ;
-(id<_SBUIPopoverExtensionHostInterface>)hostService;
-(void)setHostService:(id<_SBUIPopoverExtensionHostInterface>)arg1 ;
-(void)_updateForBundleIdentifier:(id)arg1 ;
-(id)popoverExtensionContext;
-(void)_setupChildViewController:(id)arg1 ;
@end

