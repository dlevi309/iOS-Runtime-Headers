/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowControllerManualEntryStepContext.h>

@class PKPaymentCredential;

@interface NPKPaymentProvisioningFlowControllerSecondaryManualEntryStepContext : NPKPaymentProvisioningFlowControllerManualEntryStepContext {

	BOOL _allowsAddingDifferentCard;
	PKPaymentCredential* _credential;

}

@property (nonatomic,retain) PKPaymentCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingDifferentCard;                //@synthesize allowsAddingDifferentCard=_allowsAddingDifferentCard - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPaymentCredential *)credential;
-(void)setCredential:(PKPaymentCredential *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setAllowsAddingDifferentCard:(BOOL)arg1 ;
-(BOOL)allowsAddingDifferentCard;
@end

