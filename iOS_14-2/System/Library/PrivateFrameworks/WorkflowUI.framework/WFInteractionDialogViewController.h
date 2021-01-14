/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactDialogViewController.h>
#import <libobjc.A.dylib/WFInteractionCardViewControllerDelegate.h>

@class WFInteractionCardViewController, WFInteractionCardProgressViewController, UIInterfaceAction, WFDialogRequest, NSString;

@interface WFInteractionDialogViewController : WFCompactDialogViewController <WFInteractionCardViewControllerDelegate> {

	WFInteractionCardViewController* _cardViewController;
	WFInteractionCardProgressViewController* _progressViewController;
	UIInterfaceAction* _confirmAction;
	WFDialogRequest* _followUpRequest;

}

@property (nonatomic,retain) WFInteractionCardViewController * cardViewController;                          //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) WFInteractionCardProgressViewController * progressViewController;              //@synthesize progressViewController=_progressViewController - In the implementation block
@property (nonatomic,retain) UIInterfaceAction * confirmAction;                                             //@synthesize confirmAction=_confirmAction - In the implementation block
@property (nonatomic,retain) WFDialogRequest * followUpRequest;                                             //@synthesize followUpRequest=_followUpRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCardViewController:(WFInteractionCardViewController *)arg1 ;
-(WFInteractionCardViewController *)cardViewController;
-(void)loadView;
-(void)setProgressViewController:(WFInteractionCardProgressViewController *)arg1 ;
-(WFInteractionCardProgressViewController *)progressViewController;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(void)interactionCardViewControllerDidLoad:(id)arg1 ;
-(void)interactionCardViewControllerDidInvalidateSize:(id)arg1 ;
-(void)interactionCardViewControllerDidRequestPunchout:(id)arg1 ;
-(void)interactionCardViewControllerDidRequestCancel:(id)arg1 ;
-(void)showProgressWithEvent:(unsigned long long)arg1 ;
-(BOOL)showCheckmarkOnAppear;
-(BOOL)canHandleFollowUpRequest:(id)arg1 ;
-(void)handleFollowUpRequest:(id)arg1 ;
-(UIInterfaceAction *)confirmAction;
-(void)setConfirmAction:(UIInterfaceAction *)arg1 ;
-(WFDialogRequest *)followUpRequest;
-(void)setFollowUpRequest:(WFDialogRequest *)arg1 ;
@end
