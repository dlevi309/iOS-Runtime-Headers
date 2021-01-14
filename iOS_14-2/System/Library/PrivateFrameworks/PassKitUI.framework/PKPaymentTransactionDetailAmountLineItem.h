/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)lineItemType;
-(BOOL)hasTrailingLineSeperator;
-(BOOL)isEmphasized;
-(NSString *)label;
-(NSString *)value;

@end

