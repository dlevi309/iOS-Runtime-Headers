/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableDictionary, NSDictionary, VCPAsset;

@interface VCPPhotoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _analysis;
	unsigned long long _irisAnalyses;
	NSDictionary* _phFaceResults;
	unsigned long long _phFaceFlags;
	VCPAsset* _asset;
	float _imageBlurTextureScore;
	BOOL _allowStreaming;
	long long _status;

}

@property (assign,nonatomic) BOOL allowStreaming;              //@synthesize allowStreaming=_allowStreaming - In the implementation block
@property (readonly) long long status;                         //@synthesize status=_status - In the implementation block
+(BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2 ;
+(id)resourceForAsset:(id)arg1 withResources:(id)arg2 ;
+(id)analyzerWithVCPAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(long long)status;
-(id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(id)analyzeAsset:(/*^block*/id)arg1 ;
-(void)processExistingAnalyses:(id)arg1 ;
-(id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1 ;
-(int)downscaleImage:(CVBufferRef)arg1 scaledImage:(_CVBuffer*)arg2 majorDimension:(int)arg3 ;
-(id)existingAnalysisForMovieAnalyzer;
-(BOOL)allowStreaming;
-(void)setAllowStreaming:(BOOL)arg1 ;
-(int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 movingObjectResults:(id)arg3 cancel:(/*^block*/id)arg4 ;
@end

