/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSDictionary, NSMutableArray;

@interface VCPVideoStabilizer : VCPVideoAnalyzer {

	BOOL _gyroStabilization;
	BOOL _validStabilization;
	float _cropFraction;
	float _analysisConfidence;
	void* _analysisResultRef;
	void* _correctionResultRef;
	NSDictionary* _results;
	NSMutableArray* _motionBlurVector;

}

@property (assign,nonatomic) void* analysisResultRef;                        //@synthesize analysisResultRef=_analysisResultRef - In the implementation block
@property (assign,nonatomic) void* correctionResultRef;                      //@synthesize correctionResultRef=_correctionResultRef - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                         //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) float cropFraction;                             //@synthesize cropFraction=_cropFraction - In the implementation block
@property (nonatomic,retain) NSMutableArray * motionBlurVector;              //@synthesize motionBlurVector=_motionBlurVector - In the implementation block
@property (assign,nonatomic) BOOL gyroStabilization;                         //@synthesize gyroStabilization=_gyroStabilization - In the implementation block
@property (assign,nonatomic) float analysisConfidence;                       //@synthesize analysisConfidence=_analysisConfidence - In the implementation block
@property (assign,nonatomic) BOOL validStabilization;                        //@synthesize validStabilization=_validStabilization - In the implementation block
+(BOOL)saveStabilizationRecipe;
+(id)videoStabilizerforAnalysisType:(unsigned long long)arg1 withMetadata:(id)arg2 sourceSize:(CGSize)arg3 cropRect:(CGRect)arg4 ;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSDictionary *)results;
-(id)init;
-(void)setGyroStabilization:(BOOL)arg1 ;
-(void)setAnalysisResultRef:(void*)arg1 ;
-(void*)analysisResultRef;
-(void)setAnalysisConfidence:(float)arg1 ;
-(float)analysisConfidence;
-(void)setValidStabilization:(BOOL)arg1 ;
-(int)convertAnalysisResult;
-(void*)correctionResultRef;
-(void)setCorrectionResultRef:(void*)arg1 ;
-(float)cropFraction;
-(void)setCropFraction:(float)arg1 ;
-(NSMutableArray *)motionBlurVector;
-(void)setMotionBlurVector:(NSMutableArray *)arg1 ;
-(BOOL)gyroStabilization;
-(BOOL)validStabilization;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
-(void)dealloc;
@end

