/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(void)setConfiguration:(PKPaymentSetupConfiguration *)arg1 ;
-(PKPaymentSetupConfiguration *)configuration;
-(void)setPaymentSetupFeatures:(NSArray *)arg1 ;
-(NSArray *)paymentSetupFeatures;
@end

