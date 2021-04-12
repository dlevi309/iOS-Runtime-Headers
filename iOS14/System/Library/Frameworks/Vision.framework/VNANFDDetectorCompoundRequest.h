/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNCompoundRequest.h>

@interface VNANFDDetectorCompoundRequest : VNCompoundRequest
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(long long)compoundRequestRevisionForRequest:(id)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(id)initWithDetectorType:(id)arg1 configuration:(id)arg2 ;
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end

