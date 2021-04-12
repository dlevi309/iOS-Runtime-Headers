/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject {

	BOOL _usedMaximumSuggestion;
	NSDecimalNumber* _value;
	NSString* _title;
	NSString* _displayValue;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * displayValue;                       //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) BOOL usedMaximumSuggestion;                  //@synthesize usedMaximumSuggestion=_usedMaximumSuggestion - In the implementation block
+(id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2 ;
+(id)suggestionWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDecimalNumber *)value;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)displayValue;
-(void)setDisplayValue:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 currencyCode:(id)arg2 ;
-(void)setUsedMaximumSuggestion:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3 ;
-(BOOL)usedMaximumSuggestion;
@end

