/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@class WFImage;

@interface WFHandlePaymentIntentAction : WFHandleSystemIntentAction {

	WFImage* _icon;

}
-(id)icon;
-(BOOL)showsWhenRun;
-(BOOL)opensInApp;
-(id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3 ;
-(id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2 ;
-(id)errorFromHandleResponse:(id)arg1 intent:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
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

