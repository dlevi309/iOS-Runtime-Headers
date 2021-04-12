/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFSendMessageAction : WFHandleSystemIntentAction
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)getRecipients:(/*^block*/id)arg1 ;
-(BOOL)skipsProcessingHiddenParameters;
-(BOOL)opensInApp;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(id)minimumSupportedClientVersion;
-(void)getContentFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

