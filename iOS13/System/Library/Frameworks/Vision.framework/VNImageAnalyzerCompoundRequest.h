/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNCompoundRequest.h>

@class VNImageAnalyzerCompoundRequestGroupingConfiguration;

@interface VNImageAnalyzerCompoundRequest : VNCompoundRequest {

	VNImageAnalyzerCompoundRequestGroupingConfiguration* _groupingConfiguration;

}
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(Class)configurationClass;
+(void)_addCompoundRequestsToArray:(id)arg1 forModel:(unsigned long long)arg2 withGroupingConfigurations:(id)arg3 ;
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(/*^block*/id)resultsSortingComparator;
-(id)initWithDetectorType:(id)arg1 groupingConfiguration:(id)arg2 ;
-(id)_configuredDetectorForRequestRevision:(unsigned long long)arg1 appliedConfigurationOptions:(id*)arg2 error:(id*)arg3 ;
@end

