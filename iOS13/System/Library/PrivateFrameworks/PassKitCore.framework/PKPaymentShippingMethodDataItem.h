/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKShippingMethod;

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKShippingMethod * shippingMethod; 
+(long long)dataType;
-(PKShippingMethod *)shippingMethod;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

