/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARMLImageProcessingTechnique.h>
#import <ARKitCore/ARTechniqueBusyState.h>

@class ARPersonDetectionData, NSString;

@interface ARPersonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {

	double _lastTimestamp;
	CVPixelBufferPoolRef _depthPixelBufferPool;
	CGSize _imageNetworkSize;
	BOOL _mergeLargelyOverlappingBoxes;
	ARPersonDetectionData* _latestResult;

}

@property (retain) ARPersonDetectionData * latestResult;              //@synthesize latestResult=_latestResult - In the implementation block
@property (nonatomic,readonly) BOOL isBusy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(BOOL)isLoadedModelVersionCorrect:(id)arg1 ;
-(void)changeEspressoConfig:(id)arg1 ;
-(id)createResultDataFromTensors:(SCD_Struct_AR21*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(CGSize)arg6 ;
-(ARPersonDetectionData *)latestResult;
-(void)setLatestResult:(ARPersonDetectionData *)arg1 ;
@end

