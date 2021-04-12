/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments {

	float _slowMotionRate;
	SCD_Struct_PF4 _slowMotionTimeRange;

}

@property (nonatomic,readonly) float slowMotionRate; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionTimeRange; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionRampIn; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionRampOut; 
@property (assign,nonatomic) float slowMotionRate;                              //@synthesize slowMotionRate=_slowMotionRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF4 slowMotionTimeRange;                //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg1 ;
+(SCD_Struct_PF4)defaultSlowMotionTimeRangeForDuration:(SCD_Struct_PF3)arg1 ;
+(BOOL)isRecognizedFormatWithIdentifier:(id)arg1 version:(id)arg2 ;
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1 ;
+(id)defaultSlowMotionAdjustmentsForAsset:(id)arg1 ;
-(id)description;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(id)initWithSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(float)slowMotionRate;
-(SCD_Struct_PF4)slowMotionTimeRange;
-(BOOL)isRecognizedFormat;
-(BOOL)hasSlowMotionAdjustments;
-(SCD_Struct_PF3)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF3)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
-(void)_updateDerivedPropertiesFromVersionedData;
-(BOOL)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF4*)arg2 rate:(float*)arg3 ;
-(BOOL)_parseVersionedDataForSlowMotionTimeRange:(SCD_Struct_PF4*)arg1 rate:(float*)arg2 ;
-(BOOL)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(SCD_Struct_PF4*)arg2 rate:(float*)arg3 ;
-(id)_dictionaryFromSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1 ;
-(void)setSlowMotionRate:(float)arg1 ;
-(void)setSlowMotionTimeRange:(SCD_Struct_PF4)arg1 ;
-(BOOL)_isValidSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(SCD_Struct_PF4)slowMotionRampIn;
-(SCD_Struct_PF4)slowMotionRampOut;
@end

