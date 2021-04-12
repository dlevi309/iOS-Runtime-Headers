/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
*/

#import <UIKitCore/UIViewController.h>

@protocol ILClassificationExtensionShellViewControllerDelegate;
@class UIViewController, UIBarButtonItem;

@interface ILClassificationExtensionShellViewController : UIViewController {

	BOOL _enableFinishOption;
	id<ILClassificationExtensionShellViewControllerDelegate> _delegate;
	UIViewController* _extensionViewController;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) UIViewController * extensionViewController;                                            //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) id<ILClassificationExtensionShellViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enableFinishOption;                                                               //@synthesize enableFinishOption=_enableFinishOption - In the implementation block
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(id<ILClassificationExtensionShellViewControllerDelegate>)delegate;
-(UIViewController *)extensionViewController;
-(void)setDelegate:(id<ILClassificationExtensionShellViewControllerDelegate>)arg1 ;
-(void)userDidCancel;
-(void)viewDidLoad;
-(void)setExtensionViewController:(UIViewController *)arg1 ;
-(void)displayExtensionViewController:(id)arg1 forExtension:(id)arg2 ;
-(void)setEnableFinishOption:(BOOL)arg1 ;
-(void)userDidFinish;
-(BOOL)enableFinishOption;
@end

