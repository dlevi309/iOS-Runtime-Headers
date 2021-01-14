/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray, VCPImagePetsAnalyzer, NSArray;

@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer {

	NSMutableArray* _petsDetections;
	NSMutableArray* _petsFaceDetections;
	SCD_Struct_VC6 _timeLastProcess;
	SCD_Struct_VC6 _petsStart;
	SCD_Struct_VC6 _petsFaceStart;
	VCPImagePetsAnalyzer* _petsAnalyer;
	NSArray* _petsActiveRegions;
	NSArray* _petsFaceActiveRegions;

}
-(id)results;
-(id)parseResults:(id)arg1 toDetections:(id)arg2 atTime:(SCD_Struct_VC6)arg3 fromTime:(SCD_Struct_VC6*)arg4 addActiveRegions:(id)arg5 ;
-(void)addDetectionToDict:(SCD_Struct_VC7)arg1 withActiveRegions:(id)arg2 forPetsDetections:(id)arg3 fromTime:(SCD_Struct_VC6)arg4 ;
-(id)initWithTransform:(CGAffineTransform)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(int)finishAnalysisPass:(SCD_Struct_VC7)arg1 ;
@end

