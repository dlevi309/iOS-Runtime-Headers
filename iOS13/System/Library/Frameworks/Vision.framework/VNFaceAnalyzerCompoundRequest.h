/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNHomologousObservationClassCompoundRequest.h>

@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(Class)configurationClass;
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithDetectorType:(id)arg1 configuration:(id)arg2 ;
-(void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputfacesThatNeedAttributes:(id)arg3 isFaceprintRequest:(BOOL)arg4 isAttributeRequest:(BOOL)arg5 ;
-(unsigned long long)detectionLevel;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
@end

