/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSString * phone; 
@property (nonatomic,readonly) NSString * name; 
+(long long)dataType;
-(NSString *)phone;
-(NSString *)name;
-(id)errors;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)email;
-(id)paymentContactFormatErrors;
-(id)requiredContactFields;
-(id)errorsForContactFields:(id)arg1 ;
@end

