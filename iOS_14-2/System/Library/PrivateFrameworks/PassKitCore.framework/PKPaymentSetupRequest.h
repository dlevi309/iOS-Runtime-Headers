/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentSetupConfiguration, NSArray;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding> {

	PKPaymentSetupConfiguration* _configuration;
	NSArray* _paymentSetupFeatures;

}

@property (nonatomic,retain) PKPaymentSetupConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSArray * paymentSetupFeatures;                           //@synthesize paymentSetupFeatures=_paymentSetupFeatures - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPaymentSetupFeatures:(NSArray *)arg1 ;
-(PKPaymentSetupConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)paymentSetupFeatures;
-(void)setConfiguration:(PKPaymentSetupConfiguration *)arg1 ;
@end

