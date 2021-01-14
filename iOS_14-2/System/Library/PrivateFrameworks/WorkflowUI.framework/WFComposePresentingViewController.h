/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFComposeViewControllerPresenter.h>
#import <libobjc.A.dylib/WFDragCoordinator.h>

@class UIView, NSArray, WFComposeViewController, NSString;

@interface WFComposePresentingViewController : UIViewController <WFComposeViewControllerPresenter, WFDragCoordinator> {

	WFComposeViewController* _composeViewController;

}

@property (nonatomic,readonly) WFComposeViewController * composeViewController;              //@synthesize composeViewController=_composeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) NSArray * participatingViewControllers; 
@property (nonatomic,readonly) NSArray * scrollViewsAffectingDrag; 
@property (nonatomic,readonly) id<WFModuleDelegate> moduleDelegate; 
-(WFComposeViewController *)composeViewController;
-(UIView *)containerView;
-(void)viewDidLoad;
-(NSArray *)participatingViewControllers;
-(NSArray *)scrollViewsAffectingDrag;
-(id<WFModuleDelegate>)moduleDelegate;
-(id)presentingViewControllerForComposeViewController:(id)arg1 ;
-(id)initWithComposeViewController:(id)arg1 ;
@end

