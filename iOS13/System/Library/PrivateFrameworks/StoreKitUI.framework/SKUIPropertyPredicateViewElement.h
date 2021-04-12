/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIPredicateViewElement.h>

@class NSString;

@interface SKUIPropertyPredicateViewElement : SKUIPredicateViewElement {

	long long _comparisonType;
	NSString* _property;
	NSString* _value;

}

@property (nonatomic,readonly) long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                 //@synthesize value=_value - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(NSString *)value;
-(NSString *)property;
-(long long)comparisonType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)entityValuePredicate;
@end

