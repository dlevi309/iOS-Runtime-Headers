/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <PhotosFormats/PFAssetAdjustments.h>

@interface PFVideoAdjustments : PFAssetAdjustments {

	float _slowMotionRate;
	SCD_Struct_PF4 _slowMotionTimeRange;

}

@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionRampIn; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionRampOut; 
@property (nonatomic,readonly) float slowMotionRate; 
@property (nonatomic,readonly) SCD_Struct_PF4 slowMotionTimeRange; 
@property (assign,nonatomic) float slowMotionRate;                              //@synthesize slowMotionRate=_slowMotionRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF4 slowMotionTimeRange;                //@synthesize slowMotionTimeRange=_slowMotionTimeRange - In the implementation block
+(id)videoAdjustmentsFromAssetAdjustmentsIfRecognized:(id)arg1 ;
+(BOOL)isRecognizedSlowMotionFormatWithIdentifier:(id)arg1 version:(id)arg2 ;
+(id)defaultSlowMotionAdjustmentsForAsset:(id)arg1 ;
+(float)defaultSlowMotionRateForNominalFrameRate:(float)arg1 ;
+(SCD_Struct_PF4)defaultSlowMotionTimeRangeForDuration:(SCD_Struct_PF3)arg1 ;
+(id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1 ;
-(id)description;
-(BOOL)hasSlowMotionAdjustments;
-(SCD_Struct_PF3)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
-(BOOL)isRecognizedFormat;
-(id)initWithPropertyListDictionary:(id)arg1 ;
-(float)slowMotionRate;
-(id)initWithSlowMotionTimeRange:(SCD_Struct_PF4)arg1 rate:(float)arg2 ;
-(SCD_Struct_PF4)slowMotionTimeRange;
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
-(SCD_Struct_PF3)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
@end

