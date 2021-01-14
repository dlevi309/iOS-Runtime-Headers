/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>

@class NSMutableArray, CBColorSample, NSString;

@interface CBColorFilter : CBModule <CBHIDServiceProtocol> {

	NSMutableArray* _services;
	NSMutableArray* _validServices;
	unsigned long long _sensorPolicy;
	unsigned long long _mode;
	CBColorSample* _sample;

}

@property (assign,nonatomic) unsigned long long sensorPolicy;              //@synthesize sensorPolicy=_sensorPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                      //@synthesize mode=_mode - In the implementation block
@property (readonly) CBColorSample * sample;                               //@synthesize sample=_sample - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)calculateCCTForChromaticity:(SCD_Struct_CB33)arg1 ;
+(double)calculateCCTForTristimulus:(SCD_Struct_CB34)arg1 ;
+(SCD_Struct_CB34)calculateTristimulusForChromaticity:(SCD_Struct_CB33)arg1 andLux:(double)arg2 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(unsigned long long)mode;
-(void)unregisterNotificationBlock;
-(CBColorSample *)sample;
-(void)setMode:(unsigned long long)arg1 ;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(void)sendNotificationForKey:(id)arg1 withValue:(id)arg2 ;
-(void)setSensorPolicy:(unsigned long long)arg1 ;
-(BOOL)forceSampleUpdate;
-(void)updateSample;
-(void)updateValidServices;
-(BOOL)hasExtRearSensor;
-(BOOL)hasExtFrontSensor;
-(id)newColorSampleLinearWeightedForServices:(id)arg1 ;
-(id)newColorSampleLinearWeightedForSamples:(id)arg1 ;
-(id)newColorSampleLogWeightedForSamples:(id)arg1 ;
-(unsigned long long)evaluatedFilterMode;
-(id)newColorSampleLogWeighted;
-(id)newColorSampleWinnerTakesAll;
-(id)newColorSampleConditionWeighted;
-(void)reportSampleUpdate;
-(BOOL)ALSServiceConformsToPolicy:(id)arg1 ;
-(unsigned long long)sensorPolicy;
@end

