/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFCreateNoteAction : WFHandleSystemIntentAction
+(void)getNoteContentFromInput:(id)arg1 includingImages:(BOOL)arg2 actionName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(id)inputContentClasses;
-(id)targetDataInfo;
-(BOOL)inputPassthrough;
-(void)selectedAppDidChange;
-(id)groupParameter;
@end

