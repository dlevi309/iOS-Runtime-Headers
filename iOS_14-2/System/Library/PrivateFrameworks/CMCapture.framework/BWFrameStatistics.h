/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSString, NSDictionary, NSArray;

@interface BWFrameStatistics : NSObject {

	NSString* _portType;
	NSDictionary* _aeStatistics;
	NSArray* _displayStrobeRGBEstimate;
	SCD_Struct_BW121* _storage;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) SCD_Struct_BW8 pts; 
@property (nonatomic,readonly) CGRect finalCropRect; 
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
@property (nonatomic,readonly) unsigned aeFaceAverage; 
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
@property (nonatomic,readonly) NSArray * displayStrobeRGBEstimate; 
-(float)gain;
-(SCD_Struct_BW8)pts;
-(unsigned)ispDGain;
-(NSString *)portType;
-(unsigned)motionDataStatus;
-(BOOL)aeLocked;
-(unsigned)readNoise_8x;
-(BOOL)afLocked;
-(float)sifrGain;
-(double)integrationTime;
-(int)motionFromAEMatrix;
-(unsigned)aeFaceAverage;
-(double)exposureBias;
-(float)lensMakersFocusDistance;
-(int)focusingMethod;
-(int)focusPosition;
-(unsigned)agc;
-(unsigned)sensorDGain;
-(unsigned)readNoise_1x;
-(CGRect)finalCropRect;
-(id)description;
-(BOOL)hrEnabled;
-(unsigned)conversionGain;
-(unsigned)aeAverage;
-(float)ispDGainRangeExpansionFactor;
-(BOOL)aeLimitsReached;
-(void)_setAEStatistics:(id)arg1 ;
-(float)baseISO;
-(SCD_Struct_BW121*)frameStatisticsStorage;
-(NSArray *)displayStrobeRGBEstimate;
-(float)normalizedSNR;
-(unsigned)luxLevel;
-(NSDictionary *)aeStatistics;
-(void)_setDisplayStrobeRGBEstimate:(id)arg1 ;
-(int)logicalFocusLensPosition;
-(id)initWthPortType:(id)arg1 storage:(SCD_Struct_BW121*)arg2 ;
-(int)afStationaryCount;
-(float)focusDistance;
-(float)motionDataBiasErrorEstimate;
-(unsigned)aeTarget;
-(int)ltmCurve;
-(int)afStatus;
-(BOOL)aeStable;
-(void)dealloc;
@end

