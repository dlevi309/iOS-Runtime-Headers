/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUDecimalFormatter : NSObject {

	TSUDecimalFormatterCore* _formatter;

}

@property (nonatomic,retain) NSString * format; 
@property (assign,nonatomic) BOOL isLenient; 
@property (assign,nonatomic) int minFractionDigits; 
@property (assign,nonatomic) int maxFractionDigits; 
@property (assign,nonatomic) int minIntegerDigits; 
@property (assign,nonatomic) int maxIntegerDigits; 
@property (assign,nonatomic) unsigned long long roundingMode; 
@property (nonatomic,retain) NSString * minusSign; 
@property (nonatomic,retain) NSString * exponentSymbol; 
@property (assign,nonatomic) BOOL useGroupingSeparator; 
@property (assign,nonatomic) int groupingSize; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSString * currencySymbol; 
+(id)createHarmonizedDecimalFormatterOfStyle:(long long)arg1 locale:(id)arg2 formattingSymbols:(id)arg3 ;
-(unsigned long long)roundingMode;
-(NSString *)currencyCode;
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)currencySymbol;
-(NSString *)format;
-(BOOL)isLenient;
-(TSUDecimalFormatterCore*)formatter;
-(NSString *)minusSign;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(int)groupingSize;
-(void)setMinusSign:(NSString *)arg1 ;
-(NSString *)exponentSymbol;
-(void)setGroupingSize:(int)arg1 ;
-(void)setExponentSymbol:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithLocale:(id)arg1 style:(long long)arg2 ;
-(void)setMinFractionDigits:(int)arg1 maxFractionDigits:(int)arg2 ;
-(id)createStringWithNumber:(id)arg1 ;
-(id)createStringWithValue:(double)arg1 ;
-(void)setMinIntegerDigits:(int)arg1 ;
-(void)harmonizedSetCurrency:(id)arg1 locale:(id)arg2 ;
-(void)setUseGroupingSeparator:(BOOL)arg1 ;
-(BOOL)getValueFromString:(id)arg1 rangePtr:(NSRange*)arg2 valuePtr:(double*)arg3 ;
-(void)setIsLenient:(BOOL)arg1 ;
-(id)createStringWithDecimal:(const TSUDecimal*)arg1 ;
-(int)minFractionDigits;
-(void)setMinFractionDigits:(int)arg1 ;
-(int)maxFractionDigits;
-(void)setMaxFractionDigits:(int)arg1 ;
-(int)minIntegerDigits;
-(int)maxIntegerDigits;
-(void)setMaxIntegerDigits:(int)arg1 ;
-(BOOL)useGroupingSeparator;
@end

