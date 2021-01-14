/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPaymentCredential *)credential;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCredential:(PKPaymentCredential *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setAllowsAddingDifferentCard:(BOOL)arg1 ;
-(BOOL)allowsAddingDifferentCard;
@end

