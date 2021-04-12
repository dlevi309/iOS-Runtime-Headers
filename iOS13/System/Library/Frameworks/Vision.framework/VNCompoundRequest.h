/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
+(id)compoundRequestProcessingDeviceFromOriginalRequestsProcessingDevice:(id)arg1 ;
-(id)description;
-(BOOL)usesCPUOnly;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithOriginalRequests:(id)arg1 ;
-(NSArray *)originalRequests;
-(BOOL)allowsCachingOfResults;
-(id)sequencedRequestPreviousObservationsKey;
-(/*^block*/id)resultsSortingComparator;
-(CGRect)regionOfInterest;
-(id)compoundResults;
-(void)recordWarningsInOriginalRequests;
@end

