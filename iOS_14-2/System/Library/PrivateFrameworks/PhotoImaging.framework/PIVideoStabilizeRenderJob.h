/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NSDictionary;

@interface PIVideoStabilizeRenderJob : NURenderJob {

	NSArray* _keyframes;
	unsigned long long _allowedAnalysisTypes;
	unsigned long long _analysisType;
	double _allowedCropFraction;
	/*^block*/id _progressHandler;
	NSDictionary* _rawHomographies;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,copy,readonly) NSArray * keyframes;                           //@synthesize keyframes=_keyframes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect;                        //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (assign,nonatomic) unsigned long long allowedAnalysisTypes;              //@synthesize allowedAnalysisTypes=_allowedAnalysisTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long analysisType;                    //@synthesize analysisType=_analysisType - In the implementation block
@property (assign,nonatomic) double allowedCropFraction;                           //@synthesize allowedCropFraction=_allowedCropFraction - In the implementation block
@property (nonatomic,copy) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawHomographies;                     //@synthesize rawHomographies=_rawHomographies - In the implementation block
-(void)setAllowedAnalysisTypes:(unsigned long long)arg1 ;
-(NSDictionary *)rawHomographies;
-(unsigned long long)allowedAnalysisTypes;
-(double)allowedCropFraction;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(void)setProgressHandler:(id)arg1 ;
-(void)setAllowedCropFraction:(double)arg1 ;
-(id)result;
-(id)progressHandler;
-(BOOL)prepare:(out id*)arg1 ;
-(unsigned long long)analysisType;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
@end

