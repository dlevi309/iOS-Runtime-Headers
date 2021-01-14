/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSString, NSArray, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext {

	NSString* _title;
	NSString* _subtitle;
	NSArray* _setupFields;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSArray * setupFields;                        //@synthesize setupFields=_setupFields - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(id)description;
-(PKPaymentSetupProduct *)product;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setSetupFields:(NSArray *)arg1 ;
-(NSArray *)setupFields;
@end

