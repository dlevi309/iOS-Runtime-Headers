/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContainerViewControllerDelegate.h>

@protocol CCUIModuleAlertViewControllerDelegate;
@class CCUIContentModuleContainerViewController, CCUIModuleInstance, UIView, MTMaterialView, CCSModulePresentationOptions, NSString;

@interface CCUIModuleAlertViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate> {

	CCUIContentModuleContainerViewController* _moduleContainerViewController;
	CCUIModuleInstance* _moduleInstance;
	UIView* _contentView;
	MTMaterialView* _blurView;
	CCSModulePresentationOptions* _presentationOptions;
	NSString* _moduleIdentifier;
	id<CCUIModuleAlertViewControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;                                     //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) CCSModulePresentationOptions * presentationOptions;              //@synthesize presentationOptions=_presentationOptions - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIModuleAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * moduleAlertView; 
@property (assign,nonatomic) double backgroundViewWeighting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2 ;
-(id<CCUIModuleAlertViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(CCSModulePresentationOptions *)presentationOptions;
-(CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1 ;
-(NSString *)moduleIdentifier;
-(void)setDelegate:(id<CCUIModuleAlertViewControllerDelegate>)arg1 ;
-(void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2 ;
-(void)viewDidLoad;
-(void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2 ;
-(void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2 ;
-(void)loadView;
-(void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2 ;
-(void)dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2 ;
-(UIView *)moduleAlertView;
-(double)backgroundViewWeighting;
-(void)setBackgroundViewWeighting:(double)arg1 ;
@end

