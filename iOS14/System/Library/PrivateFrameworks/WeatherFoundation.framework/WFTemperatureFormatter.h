/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter {

	BOOL _includeDegreeSymbol;
	int _inputUnit;
	int _outputUnit;
	int _symbolType;
	UAMeasureFormatRef _measureFormatter;
	NSLocale* _locale;
	NSString* _fallbackTemperatureString;
	unsigned long long _roundingMode;
	unsigned long long _maximumFractionDigits;

}

@property (assign,nonatomic) UAMeasureFormatRef measureFormatter;                   //@synthesize measureFormatter=_measureFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                     //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * fallbackTemperatureString;                    //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (assign,nonatomic) int inputUnit;                                         //@synthesize inputUnit=_inputUnit - In the implementation block
@property (assign,nonatomic) int outputUnit;                                        //@synthesize outputUnit=_outputUnit - In the implementation block
@property (assign,nonatomic) unsigned long long roundingMode;                       //@synthesize roundingMode=_roundingMode - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits;              //@synthesize maximumFractionDigits=_maximumFractionDigits - In the implementation block
@property (assign,nonatomic) int symbolType;                                        //@synthesize symbolType=_symbolType - In the implementation block
@property (assign,nonatomic) BOOL includeDegreeSymbol;                              //@synthesize includeDegreeSymbol=_includeDegreeSymbol - In the implementation block
+(id)temperatureFormatterWithInputUnit:(int)arg1 outputUnit:(int)arg2 ;
-(unsigned long long)roundingMode;
-(unsigned long long)maximumFractionDigits;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setInputUnit:(int)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)setMeasureFormatter:(UAMeasureFormatRef)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(int)inputUnit;
-(void)setIncludeDegreeSymbol:(BOOL)arg1 ;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(id)formattedTemperatureFromString:(id)arg1 ;
-(void)setOutputUnit:(int)arg1 ;
-(void)setSymbolType:(int)arg1 ;
-(BOOL)includeDegreeSymbol;
-(id)formattedStringFromTemperature:(id)arg1 ;
-(int)outputUnit;
-(UAMeasureFormatRef)measureFormatter;
-(id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2 ;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(int)symbolType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(NSString *)fallbackTemperatureString;
-(void)dealloc;
@end

