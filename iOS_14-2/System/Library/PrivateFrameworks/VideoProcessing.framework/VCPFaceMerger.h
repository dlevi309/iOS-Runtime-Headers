/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PVContext;

@interface VCPFaceMerger : NSObject {

	PVContext* _context;

}
+(BOOL)_allowANE;
-(id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id*)arg3 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)_alignBBoxForPVFaces:(id)arg1 forImage:(id)arg2 ;
-(id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2 ;
-(id)_faceObservationsWithBBoxFromPVFaces:(id)arg1 mapping:(id)arg2 ;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3 ;
@end

