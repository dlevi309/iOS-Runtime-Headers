/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class NSDictionary;

@interface VideoDefringingTuningParameters : NSObject {

	unsigned long long _mode;
	NSDictionary* _tuningParameters;
	BOOL _defringingEnabled;
	NoiseModel _desaturationParams;
	PatchBasedFusionParameters _radialParams;
	SCD_Struct_Vi62 _correctionParams;

}

@property (nonatomic,readonly) SCD_Struct_Vi62 correctionParams;                     //@synthesize correctionParams=_correctionParams - In the implementation block
@property (nonatomic,readonly) PatchBasedFusionParameters radialParams;              //@synthesize radialParams=_radialParams - In the implementation block
@property (nonatomic,readonly) NoiseModel desaturationParams;                        //@synthesize desaturationParams=_desaturationParams - In the implementation block
@property (nonatomic,readonly) BOOL defringingEnabled;                               //@synthesize defringingEnabled=_defringingEnabled - In the implementation block
+(PatchBasedFusionParameters)defaultRadialParams:(unsigned long long)arg1 ;
+(NoiseModel)defaultLUTParams:(unsigned long long)arg1 ;
+(SCD_Struct_Vi62)defaultCorrectionParams:(unsigned long long)arg1 ;
+(id)defaultTuningDictionary;
+(id)_tuningHeaderForMode:(unsigned long long)arg1 ;
+(BOOL)_validateTuning:(id)arg1 mode:(unsigned long long)arg2 parameterKey:(id)arg3 ;
-(void)setDefaults;
-(BOOL)defringingEnabled;
-(void)setMetadataGain:(float)arg1 exposureTime:(float)arg2 AWBRGain:(float)arg3 AWBBGain:(float)arg4 ;
-(id)initWithTuningParameters:(id)arg1 ;
-(int)selectParametersForTuningMode:(unsigned long long)arg1 ;
-(void)setRadialParamsForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(SCD_Struct_Vi62)correctionParams;
-(PatchBasedFusionParameters)radialParams;
-(NoiseModel)desaturationParams;
-(int)_parseDesaturateTuning:(id)arg1 ;
-(int)_parseRadialTuning:(id)arg1 ;
-(int)_parseCorrectionTuning:(id)arg1 ;
@end

