/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@class WFImage;

@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {

	WFImage* _icon;

}
-(id)icon;
-(id)showsWhenRunIfApplicable;
-(BOOL)opensInApp;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorFromHandleResponse:(id)arg1 intent:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(id)minimumSupportedClientVersion;
-(id)localizedDisplayableAppNameForBundleIdentifier:(id)arg1 ;
-(id)localizedPaymentServiceName;
-(id)noRecipientAccountError:(BOOL)arg1 ;
-(id)credentialsUnverifiedError;
-(id)amountBelowMinimumErrorWithAmount:(id)arg1 sending:(BOOL)arg2 ;
-(id)amountAboveMaximumErrorWithAmount:(id)arg1 sending:(BOOL)arg2 ;
-(id)currencyUnsupportedErrorWithAmount:(id)arg1 ;
-(id)noBankAccountError;
-(id)insufficientFundsError;
-(id)errorFromPaymentsResponse:(id)arg1 intent:(id)arg2 ;
@end

