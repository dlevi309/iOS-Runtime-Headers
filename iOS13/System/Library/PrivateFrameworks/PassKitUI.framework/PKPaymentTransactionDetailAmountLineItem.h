/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

@class NSString;


@protocol PKPaymentTransactionDetailAmountLineItem <NSObject>
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isEmphasized; 
@property (nonatomic,readonly) BOOL hasTrailingLineSeperator; 
@required
-(NSString *)value;
-(NSString *)label;
-(BOOL)isEmphasized;
-(BOOL)hasTrailingLineSeperator;
-(unsigned long long)lineItemType;

@end

