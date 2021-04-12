/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXCMMWorkflowCoordinatorDelegate.h>
#import <libobjc.A.dylib/PXCMMWorkflowPresenting.h>

@class PXGadgetNavigationHelper, PXCMMWorkflowCoordinator, NSString;

@interface PXCMMWorkflowCoordinatorPresenter : NSObject <PXCMMWorkflowCoordinatorDelegate, PXCMMWorkflowPresenting> {

	PXGadgetNavigationHelper* _navigationHelper;
	PXCMMWorkflowCoordinator* _workflowCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4 ;
-(id)workflowViewControllerWithContext:(id)arg1 ;
-(void)cancelWorkflow;
-(id)initWithNavigationHelper:(id)arg1 ;
-(long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2 ;
@end

