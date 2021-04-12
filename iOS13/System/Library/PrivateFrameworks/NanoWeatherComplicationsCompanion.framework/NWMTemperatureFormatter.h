/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <libobjc.A.dylib/NWMDataFormatter.h>

@protocol OS_dispatch_queue;
@class NSLocale, NSObject, NSNumberFormatter, NSMeasurementFormatter, NSMeasurement, NSString;

@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter> {

	BOOL _isCelsiusPreferred;
	BOOL _shouldAvoidDegreeSymbolOnly;
	NSLocale* _referenceLocale;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumberFormatter* _noUnitFormatter;
	NSMeasurementFormatter* _degreeSymbolOnlyFormatter;
	NSMeasurementFormatter* _unitFormatter;
	NSMeasurement* _noMeasurement;
	NSString* _formattedStaleTemperatureWithDegreeSymbol;
	NSString* _formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
	NSString* _formattedStaleTemperatureWithUnit;
	NSString* _formattedStaleTemperatureWithUnitRoundedVariant;
	NSString* _formattedStaleTemperatureWithoutUnit;
	NSString* _formattedStaleTemperatureWithoutUnitRoundedVariant;

}

@property (nonatomic,retain) NSLocale * referenceLocale;                                                      //@synthesize referenceLocale=_referenceLocale - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * noUnitFormatter;                                             //@synthesize noUnitFormatter=_noUnitFormatter - In the implementation block
@property (nonatomic,retain) NSMeasurementFormatter * degreeSymbolOnlyFormatter;                              //@synthesize degreeSymbolOnlyFormatter=_degreeSymbolOnlyFormatter - In the implementation block
@property (nonatomic,retain) NSMeasurementFormatter * unitFormatter;                                          //@synthesize unitFormatter=_unitFormatter - In the implementation block
@property (nonatomic,retain) NSMeasurement * noMeasurement;                                                   //@synthesize noMeasurement=_noMeasurement - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithDegreeSymbol;                            //@synthesize formattedStaleTemperatureWithDegreeSymbol=_formattedStaleTemperatureWithDegreeSymbol - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithDegreeSymbolRoundedVariant;              //@synthesize formattedStaleTemperatureWithDegreeSymbolRoundedVariant=_formattedStaleTemperatureWithDegreeSymbolRoundedVariant - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithUnit;                                    //@synthesize formattedStaleTemperatureWithUnit=_formattedStaleTemperatureWithUnit - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithUnitRoundedVariant;                      //@synthesize formattedStaleTemperatureWithUnitRoundedVariant=_formattedStaleTemperatureWithUnitRoundedVariant - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithoutUnit;                                 //@synthesize formattedStaleTemperatureWithoutUnit=_formattedStaleTemperatureWithoutUnit - In the implementation block
@property (nonatomic,retain) NSString * formattedStaleTemperatureWithoutUnitRoundedVariant;                   //@synthesize formattedStaleTemperatureWithoutUnitRoundedVariant=_formattedStaleTemperatureWithoutUnitRoundedVariant - In the implementation block
@property (readonly) BOOL isCelsiusPreferred;                                                                 //@synthesize isCelsiusPreferred=_isCelsiusPreferred - In the implementation block
@property (readonly) BOOL shouldAvoidDegreeSymbolOnly;                                                        //@synthesize shouldAvoidDegreeSymbolOnly=_shouldAvoidDegreeSymbolOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFormatter;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)value:(id)arg1 ;
-(NSMeasurementFormatter *)unitFormatter;
-(id)formattedWithDegreeSymbol:(id)arg1 style:(unsigned long long)arg2 fallbackStyle:(unsigned long long)arg3 ;
-(id)formattedWithDegreeSymbol:(id)arg1 fallbackStyle:(unsigned long long)arg2 ;
-(id)formattedWithoutUnit:(id)arg1 ;
-(id)formattedWithoutUnit:(id)arg1 style:(unsigned long long)arg2 ;
-(void)_locked_updateStaleTemperatureWithUnit;
-(id)_locked_degreeSymbolOnlyFormatter;
-(id)_locked_noUnitFormatter;
-(BOOL)shouldAvoidDegreeSymbolOnly;
-(id)formattedWithUnit:(id)arg1 ;
-(id)_localizedMeasurementForTemperature:(id)arg1 ;
-(NSMeasurementFormatter *)degreeSymbolOnlyFormatter;
-(id)_formattedStaleTemperatureWithDegreeSymbol:(unsigned long long)arg1 ;
-(id)formattedWithUnit:(id)arg1 style:(unsigned long long)arg2 ;
-(id)_formattedStaleTemperatureWithUnit:(unsigned long long)arg1 ;
-(NSNumberFormatter *)noUnitFormatter;
-(id)_formattedStaleTemperatureWithoutUnit:(unsigned long long)arg1 ;
-(BOOL)isCelsiusPreferred;
-(NSString *)formattedStaleTemperatureWithDegreeSymbol;
-(NSString *)formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
-(NSString *)formattedStaleTemperatureWithUnit;
-(NSString *)formattedStaleTemperatureWithUnitRoundedVariant;
-(NSString *)formattedStaleTemperatureWithoutUnit;
-(NSString *)formattedStaleTemperatureWithoutUnitRoundedVariant;
-(id)_locked_unitFormatter;
-(NSMeasurement *)noMeasurement;
-(void)setFormattedStaleTemperatureWithUnit:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithUnitRoundedVariant:(NSString *)arg1 ;
-(NSLocale *)referenceLocale;
-(void)setReferenceLocale:(NSLocale *)arg1 ;
-(void)setNoUnitFormatter:(NSNumberFormatter *)arg1 ;
-(void)setDegreeSymbolOnlyFormatter:(NSMeasurementFormatter *)arg1 ;
-(void)setUnitFormatter:(NSMeasurementFormatter *)arg1 ;
-(void)setNoMeasurement:(NSMeasurement *)arg1 ;
-(void)setFormattedStaleTemperatureWithDegreeSymbol:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithDegreeSymbolRoundedVariant:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithoutUnit:(NSString *)arg1 ;
-(void)setFormattedStaleTemperatureWithoutUnitRoundedVariant:(NSString *)arg1 ;
@end

