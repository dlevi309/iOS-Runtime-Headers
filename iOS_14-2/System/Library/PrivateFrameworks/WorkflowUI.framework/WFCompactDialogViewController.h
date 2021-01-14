/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactPlatterViewController.h>

@protocol WFCompactDialogViewControllerDelegate;
@class WFDialogRequest, NSArray, WFCompactDialogAction;

@interface WFCompactDialogViewController : WFCompactPlatterViewController {

	id<WFCompactDialogViewControllerDelegate> _delegate;
	WFDialogRequest* _request;
	NSArray* _actions;
	WFCompactDialogAction* _preferredAction;

}

@property (nonatomic,copy) NSArray * actions;                                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) WFCompactDialogAction * preferredAction;                                //@synthesize preferredAction=_preferredAction - In the implementation block
@property (assign,nonatomic,__weak) id<WFCompactDialogViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDialogRequest * request;                                            //@synthesize request=_request - In the implementation block
-(void)setActions:(NSArray *)arg1 ;
-(void)setPreferredAction:(WFCompactDialogAction *)arg1 ;
-(id)keyCommands;
-(NSArray *)actions;
-(id<WFCompactDialogViewControllerDelegate>)delegate;
-(WFDialogRequest *)request;
-(BOOL)canBecomeFirstResponder;
-(WFCompactDialogAction *)preferredAction;
-(void)setDelegate:(id<WFCompactDialogViewControllerDelegate>)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)loadView;
-(BOOL)canHandleFollowUpRequest:(id)arg1 ;
-(void)handleFollowUpRequest:(id)arg1 ;
-(void)configureActionGroupWithActions:(id)arg1 ;
-(void)finishWithResponse:(id)arg1 ;
-(void)finishWithResponse:(id)arg1 waitForFollowUpRequest:(BOOL)arg2 ;
-(void)doneKeyPressed;
@end

