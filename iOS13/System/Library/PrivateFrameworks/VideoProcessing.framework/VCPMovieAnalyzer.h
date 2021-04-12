/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableDictionary, VCPAsset, NSDictionary;

@interface VCPMovieAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _analysis;
	NSMutableDictionary* _privateResults;
	VCPAsset* _asset;
	BOOL _supportConditionalAnalysis;
	NSDictionary* _existingAnalysis;
	BOOL _allowStreaming;
	long long _status;

}

@property (assign,nonatomic) BOOL allowStreaming;              //@synthesize allowStreaming=_allowStreaming - In the implementation block
@property (readonly) long long status;                         //@synthesize status=_status - In the implementation block
+(BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2 ;
+(id)analyzerWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(long long)status;
-(id)privateResults;
-(id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(id)analyzeAsset:(/*^block*/id)arg1 ;
-(id)processExistingAnalysisForTimeRange:(SCD_Struct_VC28)arg1 analysisTypes:(unsigned long long*)arg2 ;
-(id)createDecoderForTrack:(id)arg1 timerange:(const SCD_Struct_VC28*)arg2 ;
-(id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2 ;
-(int)analyzeVideoSegment:(id)arg1 timerange:(const SCD_Struct_VC28*)arg2 cancel:(/*^block*/id)arg3 ;
-(void)loadPropertiesForAsset:(id)arg1 ;
-(int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(/*^block*/id)arg2 ;
-(int)analyzeVideoTrack:(id)arg1 start:(SCD_Struct_VC6)arg2 cancel:(/*^block*/id)arg3 ;
-(int)generateKeyFrameResource:(id)arg1 ;
-(id)initWithPHAsset:(id)arg1 withPausedAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(BOOL)allowStreaming;
-(void)setAllowStreaming:(BOOL)arg1 ;
@end

