/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFSendMessageAction : WFHandleSystemIntentAction
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)skipsProcessingHiddenParameters;
-(BOOL)opensInApp;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(id)minimumSupportedClientVersion;
-(void)getRecipients:(/*^block*/id)arg1 ;
-(void)getContentFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleWatchResponse:(id)arg1 ;
@end

