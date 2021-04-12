/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(unsigned long long)roundingMode;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)setOutputUnit:(int)arg1 ;
-(void)setIncludeDegreeSymbol:(BOOL)arg1 ;
-(void)setSymbolType:(int)arg1 ;
-(void)setInputUnit:(int)arg1 ;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(int)inputUnit;
-(int)outputUnit;
-(NSString *)fallbackTemperatureString;
-(int)symbolType;
-(void)setMeasureFormatter:(UAMeasureFormatRef)arg1 ;
-(id)formattedTemperatureFromString:(id)arg1 ;
-(id)formattedStringFromTemperature:(id)arg1 ;
-(id)_formatTemperatureValue:(id)arg1 toUnit:(int)arg2 ;
-(UAMeasureFormatRef)measureFormatter;
-(BOOL)includeDegreeSymbol;
@end

