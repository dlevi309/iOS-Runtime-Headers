/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@interface PIVideoStabilizeRequest : NURenderRequest {

	double _allowedCropFraction;
	/*^block*/id _progressHandler;
	unsigned long long _allowedAnalysisTypes;

}

@property (assign,nonatomic) double allowedCropFraction;                           //@synthesize allowedCropFraction=_allowedCropFraction - In the implementation block
@property (nonatomic,copy) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned long long allowedAnalysisTypes;              //@synthesize allowedAnalysisTypes=_allowedAnalysisTypes - In the implementation block
+(BOOL)canPerformGyroBasedStabilizationForAsset:(id)arg1 ;
-(void)setAllowedAnalysisTypes:(unsigned long long)arg1 ;
-(unsigned long long)allowedAnalysisTypes;
-(double)allowedCropFraction;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setAllowedCropFraction:(double)arg1 ;
-(id)progressHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

