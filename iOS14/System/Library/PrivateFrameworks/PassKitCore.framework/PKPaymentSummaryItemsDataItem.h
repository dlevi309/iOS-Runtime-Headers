/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString, NSArray;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSArray * paymentSummaryItems; 
+(long long)dataType;
-(NSString *)currencyCode;
-(NSArray *)paymentSummaryItems;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

