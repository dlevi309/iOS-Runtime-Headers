/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSString * phone; 
@property (nonatomic,readonly) NSString * name; 
+(long long)dataType;
-(NSString *)name;
-(id)errors;
-(NSString *)email;
-(NSString *)phone;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)requiredContactFields;
-(id)errorsForContactFields:(id)arg1 ;
@end

