/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentPreference.h>

@class NSString;

@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference {

	NSString* _currency;

}

@property (nonatomic,copy) NSString * currency;              //@synthesize currency=_currency - In the implementation block
-(NSString *)currency;
-(BOOL)supportsDeletion;
-(void)setCurrency:(NSString *)arg1 ;
@end

