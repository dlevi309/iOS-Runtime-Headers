/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer, NSMutableArray, VCPVideoMetaLensSwitchAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {

	CGVector _prevEstimatedCenterMv;
	NSMutableData* _deSerializedMetaBuffer;
	VCPVideoMetaFocusAnalyzer* _metaFocusAnalyzer;
	VCPVideoMetaMotionAnalyzer* _metaMotionAnalyzer;
	unsigned long long _requestAnalyses;
	NSMutableArray* _metadataStabilizationArray;
	NSMutableArray* _frameTimestampArray;
	NSMutableArray* _originalFrameTimestampArray;
	VCPVideoMetaLensSwitchAnalyzer* _metaLensSwitchAnalzer;
	BOOL _gyroHomographyIsValid;
	CGSize _gyroHomographyDimension;

}
+(id)referenceSoftwareStackVersion;
+(id)defaultDesiredKeys;
-(id)init;
-(id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(CGSize)readGyroHomographyDimension:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)gyroHomographyVersionIsValid:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)readSoftwareStackVersion:(opaqueCMFormatDescriptionRef)arg1 ;
-(float)compareSoftwareStackVersion:(id)arg1 withReferenceVersion:(id)arg2 ;
-(CFDataRef)getSetupDataFrom:(opaqueCMFormatDescriptionRef)arg1 ;
-(CFDataRef)getFirstAtomWithFourCharCode:(unsigned)arg1 fromSetupData:(CFDataRef)arg2 ;
-(float)compareNumericVersion:(id)arg1 withReferenceVersion:(id)arg2 ;
-(int)convertLivePhotoStruct:(FigLivePhotoMetadata*)arg1 toDictionary:(id)arg2 ;
-(int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2 ;
-(int)finalizeAnalysis;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)privateResults;
@end

