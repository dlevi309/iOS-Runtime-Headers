/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPaymentTransactionDetailAmountLineItem.h>

@class NSString;

@interface PKPaymentTransactionDetailAmountLineItemGeneric : NSObject <PKPaymentTransactionDetailAmountLineItem> {

	NSString* _label;
	NSString* _value;
	BOOL _hasTrailingLineSeperator;
	BOOL _isEmphasized;

}

@property (assign,nonatomic) BOOL hasTrailingLineSeperator;                  //@synthesize hasTrailingLineSeperator=_hasTrailingLineSeperator - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                              //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
-(NSString *)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(unsigned long long)lineItemType;
@end

