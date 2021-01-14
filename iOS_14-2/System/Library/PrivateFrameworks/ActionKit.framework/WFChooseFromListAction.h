/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction
+(id)userInterfaceProtocol;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2 ;
-(BOOL)shouldCreateIntentAvailableResource;
-(id)itemsFromDictionaryItem:(id)arg1 ;
-(id)contentItemsFromSelectedItem:(id)arg1 ;
-(void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2 ;
-(id)roundedImageFromWFImage:(id)arg1 roundingStyle:(unsigned long long)arg2 desiredSize:(CGSize)arg3 desiredScale:(double)arg4 ;
@end

