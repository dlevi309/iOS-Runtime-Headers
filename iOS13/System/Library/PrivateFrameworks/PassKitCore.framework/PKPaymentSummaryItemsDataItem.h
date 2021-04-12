/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

