/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSAttributedString, CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSAttributedString * formattedAddressString; 
@property (nonatomic,readonly) CNContact * shippingAddress; 
@property (nonatomic,readonly) NSString * shippingType; 
@property (nonatomic,readonly) BOOL isShippingEditable; 
+(long long)dataType;
-(NSAttributedString *)formattedAddressString;
-(id)errors;
-(CNContact *)shippingAddress;
-(NSString *)shippingType;
-(BOOL)isShippingEditable;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)paymentContactFormatErrors;
-(id)_shippingName;
@end

