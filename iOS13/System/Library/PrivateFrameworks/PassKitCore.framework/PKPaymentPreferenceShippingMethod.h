/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentPreference.h>

@class NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference {

	NSString* _currency;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
@end

