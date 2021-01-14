/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

