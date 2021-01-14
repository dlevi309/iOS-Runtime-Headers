/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long lineItemType; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(unsigned long long)lineItemType;
-(BOOL)hasTrailingLineSeperator;
-(void)setHasTrailingLineSeperator:(BOOL)arg1 ;
-(BOOL)isEmphasized;
-(NSString *)label;
-(NSString *)value;
@end

