/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVVisionIntegrating;
@class PVContext;

@interface PVFaceMerger : NSObject {

	PVContext* _context;
	id<PVVisionIntegrating> _visionIntegration;

}
-(id)initWithContext:(id)arg1 visionIntegration:(id)arg2 ;
-(id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3 ;
-(void)_configureRequest:(id)arg1 ;
-(id)_faceObservationsWithBBoxFromPVFaces:(id)arg1 mapping:(id)arg2 ;
-(id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id*)arg3 ;
-(BOOL)_alignBBoxForPVFaces:(id)arg1 forImage:(id)arg2 ;
-(id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2 ;
@end

