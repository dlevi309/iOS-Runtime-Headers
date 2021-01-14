/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSArray;

@interface NPKPaymentProvisioningFlowControllerChooseFlowStepContext : NPKPaymentProvisioningFlowStepContext {

	NSArray* _sections;

}

@property (nonatomic,retain) NSArray * sections;              //@synthesize sections=_sections - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
@end

