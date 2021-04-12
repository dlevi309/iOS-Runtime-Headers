/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentTransactionDetailAmountLineItem.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemFundingSource : NSObject <PKPaymentTransactionDetailAmountLineItem> {

	NSString* _label;
	NSString* _value;
	BOOL _hasTrailingLineSeperator;

}

@property (assign,nonatomic) BOOL hasTrailingLineSeperator;                  //@synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator - In the implementation block
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) BOOL isEmphasized; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)lineItemType;
-(id)initWithAmount:(id)arg1 transactionSource:(id)arg2 ;
-(id)initWithAmount:(id)arg1 credentialType:(long long)arg2 dpanSuffix:(id)arg3 cardDescription:(id)arg4 ;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(BOOL)isEmphasized;
-(NSString *)label;
-(NSString *)value;
@end

