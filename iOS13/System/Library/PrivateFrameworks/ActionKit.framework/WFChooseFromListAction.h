/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(id)itemsFromDictionaryItem:(id)arg1 ;
-(id)contentItemsFromSelectedItem:(id)arg1 ;
-(void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2 ;
@end

