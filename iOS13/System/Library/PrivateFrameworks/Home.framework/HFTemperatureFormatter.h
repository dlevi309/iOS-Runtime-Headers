/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSMeasurementFormatter.h>
#import <libobjc.A.dylib/HFTemperatureUnitObserver.h>

@class NSNumber, NSString;

@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver> {

	BOOL _inputIsCelsius;
	BOOL _outputIsCelsius;
	NSNumber* _stepValue;
	NSString* _fallbackTemperatureString;

}

@property (assign,nonatomic) BOOL inputIsCelsius;                             //@synthesize inputIsCelsius=_inputIsCelsius - In the implementation block
@property (assign,nonatomic) BOOL outputIsCelsius;                            //@synthesize outputIsCelsius=_outputIsCelsius - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                            //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,copy) NSString * fallbackTemperatureString;              //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(NSString *)fallbackTemperatureString;
-(void)setInputIsCelsius:(BOOL)arg1 ;
-(void)setOutputIsCelsius:(BOOL)arg1 ;
-(BOOL)inputIsCelsius;
-(BOOL)outputIsCelsius;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2 ;
@end

