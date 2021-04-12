/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {

	CGVector _prevEstimatedCenterMv;
	NSMutableData* _deSerializedMetaBuffer;
	VCPVideoMetaFocusAnalyzer* _metaFocusAnalyzer;
	VCPVideoMetaMotionAnalyzer* _metaMotionAnalyzer;

}
+(id)defaultDesiredKeys;
-(id)init;
-(int)finalizeAnalysis;
-(id)privateResults;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)convertLivePhotoStruct:(FigLivePhotoMetadata*)arg1 toDictionary:(id)arg2 ;
-(int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2 ;
@end

