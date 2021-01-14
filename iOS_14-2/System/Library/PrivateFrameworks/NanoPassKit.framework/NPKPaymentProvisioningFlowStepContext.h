/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NPKPaymentProvisioningFlowControllerRequestContext, NSString;

@interface NPKPaymentProvisioningFlowStepContext : NSObject <NSSecureCoding> {

	BOOL _allowsAddLater;
	NPKPaymentProvisioningFlowControllerRequestContext* _requestContext;
	NSString* _stepIdentifier;
	NSString* _backStepIdentifier;

}

@property (readonly) NPKPaymentProvisioningFlowControllerRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) NSString * stepIdentifier;                                                //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,retain) NSString * backStepIdentifier;                                            //@synthesize backStepIdentifier=_backStepIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowsAddLater;                                                      //@synthesize allowsAddLater=_allowsAddLater - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NPKPaymentProvisioningFlowControllerRequestContext *)requestContext;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stepIdentifier;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setBackStepIdentifier:(NSString *)arg1 ;
-(void)setAllowsAddLater:(BOOL)arg1 ;
-(NSString *)backStepIdentifier;
-(BOOL)allowsAddLater;
-(id)welcomeStepContext;
-(id)chooseFlowStepContext;
-(id)chooseProductStepContext;
-(id)chooseCredentialsStepContext;
-(id)digitalIssuanceAmountStepContext;
-(id)digitalIssuancePaymentStepContext;
-(id)moreInformationStepContext;
-(id)readerModeEntryStepContext;
-(id)readerModeIngestionStepContext;
-(id)manualEntryStepContext;
-(id)secondaryManualEntryStepContext;
-(id)localDeviceManualEntryStepContext;
-(id)localDeviceManualEntryProgressStepContext;
-(id)productDisambiguationStepContext;
-(id)passcodeUpgradeStepContext;
-(id)termsAndConditionsStepContext;
-(id)provisioningProgressStepContext;
-(id)provisioningResultStepContext;
-(id)_baseFlowStepDescription;
-(id)verificationChannelsStepContext;
-(id)verificationFieldsStepContext;
-(id)verificationCodeStepContext;
-(id)getIssuerApplicationAddRequestStepContext;
@end

