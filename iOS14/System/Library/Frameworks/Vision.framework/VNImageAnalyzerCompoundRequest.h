/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNCompoundRequest.h>

@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {

	VNImageAnalyzerCompoundRequestGroupingConfiguration* _groupingConfiguration;

}
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(void)_addCompoundRequestsToArray:(id)arg1 forModel:(unsigned long long)arg2 withGroupingConfigurations:(id)arg3 ;
+(Class)configurationClass;
-(id)initWithDetectorType:(id)arg1 groupingConfiguration:(id)arg2 ;
-(id)_configuredDetectorForRequestRevision:(unsigned long long)arg1 session:(id)arg2 appliedConfigurationOptions:(id*)arg3 error:(id*)arg4 ;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(/*^block*/id)resultsSortingComparator;
@end

