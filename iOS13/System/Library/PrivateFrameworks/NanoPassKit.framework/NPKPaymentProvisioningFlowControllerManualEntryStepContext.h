/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerManualEntryStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _cameraFirstProvisioningEnabled;
	NSArray* _setupFields;

}

@property (assign,nonatomic) BOOL cameraFirstProvisioningEnabled;              //@synthesize cameraFirstProvisioningEnabled=_cameraFirstProvisioningEnabled - In the implementation block
@property (nonatomic,retain) NSArray * setupFields;                            //@synthesize setupFields=_setupFields - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setCameraFirstProvisioningEnabled:(BOOL)arg1 ;
-(void)setSetupFields:(NSArray *)arg1 ;
-(NSArray *)setupFields;
-(BOOL)cameraFirstProvisioningEnabled;
@end

