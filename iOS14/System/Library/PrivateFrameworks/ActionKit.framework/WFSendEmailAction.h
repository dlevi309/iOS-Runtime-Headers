/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction {

	BOOL _contentManaged;

}

@property (assign,getter=isContentManaged,nonatomic) BOOL contentManaged;              //@synthesize contentManaged=_contentManaged - In the implementation block
+(id)userInterfaceProtocol;
-(BOOL)isContentManaged;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatedAccessResource;
-(BOOL)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg1 ;
-(BOOL)requiresRemoteExecution;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(id)prioritizedParameterKeysForRemoteExecution;
-(BOOL)populatesInputFromInputParameter;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(id)targetContentAttribution;
-(id)requiredResourcesForIntentAvailableResource;
-(void)prepareEmailContentFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)checkManagementLevel:(id)arg1 error:(id*)arg2 ;
-(void)generateBodyFromCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleWatchResponse:(id)arg1 ;
-(void)getRecipientsFromParameterValue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateFilesFromCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateEmailFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContentManaged:(BOOL)arg1 ;
@end

