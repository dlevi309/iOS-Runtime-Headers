/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, NSDictionary;

@interface BWFrameStatistics : NSObject {

	NSString* _portType;
	NSDictionary* _aeStatistics;
	SCD_Struct_BW49* _storage;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) unsigned luxLevel; 
@property (nonatomic,readonly) unsigned conversionGain; 
@property (nonatomic,readonly) unsigned readNoise_1x; 
@property (nonatomic,readonly) unsigned readNoise_8x; 
@property (nonatomic,readonly) float normalizedSNR; 
@property (nonatomic,readonly) double integrationTime; 
@property (nonatomic,readonly) unsigned agc; 
@property (nonatomic,readonly) unsigned ispDGain; 
@property (nonatomic,readonly) unsigned sensorDGain; 
@property (nonatomic,readonly) float ispDGainRangeExpansionFactor; 
@property (nonatomic,readonly) float gain; 
@property (nonatomic,readonly) float baseISO; 
@property (nonatomic,readonly) double exposureBias; 
@property (nonatomic,readonly) unsigned aeAverage; 
@property (nonatomic,readonly) unsigned aeTarget; 
@property (nonatomic,readonly) BOOL aeLimitsReached; 
@property (nonatomic,readonly) BOOL aeStable; 
@property (nonatomic,readonly) BOOL aeLocked; 
@property (nonatomic,readonly) int motionFromAEMatrix; 
@property (nonatomic,readonly) NSDictionary * aeStatistics; 
@property (nonatomic,readonly) BOOL hrEnabled; 
@property (nonatomic,readonly) float sifrGain; 
@property (nonatomic,readonly) int afStatus; 
@property (nonatomic,readonly) BOOL afLocked; 
@property (nonatomic,readonly) int afStationaryCount; 
@property (nonatomic,readonly) int focusingMethod; 
@property (nonatomic,readonly) int focusPosition; 
@property (nonatomic,readonly) int logicalFocusLensPosition; 
@property (nonatomic,readonly) float focusDistance; 
@property (nonatomic,readonly) float lensMakersFocusDistance; 
@property (nonatomic,readonly) unsigned motionDataStatus; 
@property (nonatomic,readonly) float motionDataBiasErrorEstimate; 
@property (nonatomic,readonly) int ltmCurve; 
-(void)dealloc;
-(id)description;
-(NSString *)portType;
-(float)gain;
-(int)focusPosition;
-(double)exposureBias;
-(id)initWthPortType:(id)arg1 storage:(SCD_Struct_BW49*)arg2 ;
-(SCD_Struct_BW49*)frameStatisticsStorage;
-(unsigned)luxLevel;
-(unsigned)conversionGain;
-(unsigned)readNoise_1x;
-(unsigned)readNoise_8x;
-(float)normalizedSNR;
-(double)integrationTime;
-(unsigned)agc;
-(unsigned)ispDGain;
-(unsigned)sensorDGain;
-(float)ispDGainRangeExpansionFactor;
-(float)baseISO;
-(unsigned)aeAverage;
-(unsigned)aeTarget;
-(BOOL)aeLimitsReached;
-(BOOL)aeStable;
-(BOOL)aeLocked;
-(int)motionFromAEMatrix;
-(NSDictionary *)aeStatistics;
-(void)_setAEStatistics:(id)arg1 ;
-(BOOL)hrEnabled;
-(float)sifrGain;
-(int)afStatus;
-(BOOL)afLocked;
-(int)afStationaryCount;
-(int)focusingMethod;
-(int)logicalFocusLensPosition;
-(float)focusDistance;
-(float)lensMakersFocusDistance;
-(unsigned)motionDataStatus;
-(float)motionDataBiasErrorEstimate;
-(int)ltmCurve;
@end

