/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFCreateNoteAction : WFHandleSystemIntentAction
+(id)userInterfaceProtocol;
+(void)getNoteContentFromInput:(id)arg1 includingImages:(BOOL)arg2 actionName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)inputPassthrough;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getOutputFromIntentResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)requiresRemoteExecution;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)inputContentClasses;
-(id)targetContentAttribution;
-(void)selectedAppDidChange;
-(id)groupParameter;
@end

