/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPeopleBootstrapFlowController.h>

@class PXPeopleBootstrapConfirmationViewController, PXPeopleBootstrapFinalViewController, PHPerson;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController {

	PXPeopleBootstrapConfirmationViewController* _confirmationViewController;
	PXPeopleBootstrapFinalViewController* _finalViewController;

}

@property (nonatomic,retain) PXPeopleBootstrapConfirmationViewController * confirmationViewController;              //@synthesize confirmationViewController=_confirmationViewController - In the implementation block
@property (nonatomic,retain) PXPeopleBootstrapFinalViewController * finalViewController;                            //@synthesize finalViewController=_finalViewController - In the implementation block
@property (nonatomic,readonly) PHPerson * sourcePerson; 
-(void)done:(id)arg1 ;
-(void)computeViewControllersForBootstrapFlow;
-(void)recomputeViewControllersForChangeInKeyPath:(id)arg1 ;
-(PHPerson *)sourcePerson;
-(PXPeopleBootstrapConfirmationViewController *)confirmationViewController;
-(PXPeopleBootstrapFinalViewController *)finalViewController;
-(id)_postNamingViewController;
-(void)setConfirmationViewController:(PXPeopleBootstrapConfirmationViewController *)arg1 ;
-(void)setFinalViewController:(PXPeopleBootstrapFinalViewController *)arg1 ;
@end

