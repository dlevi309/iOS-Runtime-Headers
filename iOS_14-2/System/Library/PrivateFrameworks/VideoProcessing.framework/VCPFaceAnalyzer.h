/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class PVContext, VCPFaceMerger, NSObject, VCPObjectPool;

@interface VCPFaceAnalyzer : NSObject {

	PVContext* _context;
	VCPFaceMerger* _faceMerger;
	NSObject*<OS_dispatch_group> _processingGroup;
	NSObject*<OS_dispatch_queue> _processingQueue;
	VCPObjectPool* _sessionPool;

}
+(BOOL)_allowANE;
-(id)initWithContext:(id)arg1 ;
-(CGRect)_rectFromMappingNormalizedRect:(CGRect)arg1 toBounds:(CGRect)arg2 ;
-(id)getPVFaceFromVNFaceObservation:(id)arg1 withSourceWidth:(unsigned long long)arg2 andSourceHeight:(unsigned long long)arg3 andVisionRequests:(id)arg4 andAlgorithmVersion:(int)arg5 andError:(id*)arg6 ;
-(void)_addRegion:(id)arg1 toBoundingBox:(CGRect*)arg2 ;
-(int)_performAnalysis:(id*)arg1 withRequestHandler:(id)arg2 options:(id)arg3 sourceWidth:(unsigned long long)arg4 sourceHeight:(unsigned long long)arg5 ;
-(long long)_qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2 ;
-(int)analyzeWithImage:(id)arg1 andAsset:(id)arg2 andOptions:(id)arg3 andResults:(id*)arg4 ;
-(int)_createFaceRectanglesRequest:(id*)arg1 andFaceprintRequest:(id*)arg2 ;
-(int)_createFaceRectanglesRequest:(id*)arg1 andFaceLandmarksRequest:(id*)arg2 andFaceExpressionsRequest:(id*)arg3 andFacePoseRequest:(id*)arg4 andFaceprintRequest:(id*)arg5 andClassifyFaceAttributesRequest:(id*)arg6 andFaceCaptureQualityRequest:(id*)arg7 ;
-(id)_pvFaceArrayFromAsset:(id)arg1 ;
-(id)_verifiedPersonsFetchResultWithLocalIdentifiers:(id)arg1 andPhotoLibrary:(id)arg2 andError:(id*)arg3 ;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(void)_checkAnalysisRequests:(id)arg1 forTooSmallFaceObservations:(id)arg2 withAnalysisResults:(id)arg3 ;
-(int)_refineAnalysis:(id*)arg1 forAsset:(id)arg2 andImage:(id)arg3 ;
-(int)_createBlurRequests:(id*)arg1 andExposureRequests:(id*)arg2 forFaceObservations:(id)arg3 ;
-(void)dealloc;
@end

