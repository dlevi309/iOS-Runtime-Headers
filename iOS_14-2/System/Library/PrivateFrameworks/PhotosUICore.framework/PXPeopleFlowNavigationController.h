/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PXPeopleFlowViewControllerActionDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol PXPeopleFlowController, PXPeopleFlowViewController;
@class UIBarButtonItem, UIViewController, NSString;

@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate> {

	id<PXPeopleFlowController> _flowController;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _doneButton;
	UIViewController*<PXPeopleFlowViewController> _currentViewController;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButton;                                                     //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                                     //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIViewController*<PXPeopleFlowViewController> currentViewController;              //@synthesize currentViewController=_currentViewController - In the implementation block
@property (nonatomic,retain) id<PXPeopleFlowController> flowController;                                        //@synthesize flowController=_flowController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)back:(id)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)next:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)done:(id)arg1 ;
-(void)_updateActions;
-(void)viewDidLoad;
-(UIViewController*<PXPeopleFlowViewController>)currentViewController;
-(UIBarButtonItem *)backButton;
-(void)requestCancel;
-(void)requestAdvanceToNextInFlow;
-(void)setAdvanceButtonEnabled:(BOOL)arg1 ;
-(id)initWithFlowController:(id)arg1 ;
-(id<PXPeopleFlowController>)flowController;
-(void)setFlowController:(id<PXPeopleFlowController>)arg1 ;
-(void)setCurrentViewController:(UIViewController*<PXPeopleFlowViewController>)arg1 ;
@end

