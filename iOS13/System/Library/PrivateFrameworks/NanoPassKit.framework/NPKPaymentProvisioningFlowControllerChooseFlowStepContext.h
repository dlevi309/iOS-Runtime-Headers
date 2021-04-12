/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerChooseFlowStepContext : NPKPaymentProvisioningFlowStepContext {

	NSArray* _sections;

}

@property (nonatomic,retain) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
@end

