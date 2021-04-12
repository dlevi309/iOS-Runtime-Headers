/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFStartCallAction : WFHandleSystemIntentAction
-(long long)callCapability;
-(long long)preferredCallProvider;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2 ;
-(id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorFromHandleResponse:(id)arg1 intent:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)appIdentifierForIdentifier:(id)arg1 ;
-(id)localizedCallServiceName;
-(id)appConfigurationRequiredError;
-(id)callingServiceNotAvailableError;
-(id)contactNotSupportedByAppErrorForContacts:(id)arg1 ;
-(id)airplaneModeError;
-(id)errorFromStartCallResponse:(id)arg1 intent:(id)arg2 ;
@end

