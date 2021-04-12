/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFStartCallAction : WFHandleSystemIntentAction
-(long long)callCapability;
-(long long)preferredCallProvider;
-(BOOL)skipsProcessingHiddenParameters;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2 ;
-(id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorFromHandleResponse:(id)arg1 intent:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)displayableAppIdentifierForBundleIdentifier:(id)arg1 ;
-(id)localizedCallServiceName;
-(id)appConfigurationRequiredError;
-(id)callingServiceNotAvailableError;
-(id)contactNotSupportedByAppErrorForContacts:(id)arg1 ;
-(id)airplaneModeError;
-(id)errorFromStartCallResponse:(id)arg1 intent:(id)arg2 ;
@end

