/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequest.h>

@class NSArray, NSNumber;

@interface VNCompoundRequest : VNRequest {

	NSArray* _originalRequests;
	NSNumber* _cachedDependencyProcessingOrdinality;

}

@property (nonatomic,copy,readonly) NSArray * originalRequests;              //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,readonly) CGRect regionOfInterest; 
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)arg1 ;
-(CGRect)regionOfInterest;
-(long long)dependencyProcessingOrdinality;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)initWithOriginalRequests:(id)arg1 ;
-(NSArray *)originalRequests;
-(BOOL)usesCPUOnly;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(/*^block*/id)resultsSortingComparator;
-(id)sequencedRequestPreviousObservationsKey;
-(id)compoundResults;
-(void)recordWarningsInOriginalRequests;
@end

