/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSArray, NSMutableArray, NSMapTable;

@interface VNRequestForensics : NSObject {

	NSArray* _originalRequests;
	NSArray* _orderedRequests;
	NSMutableArray* _implicitRequests;
	NSMutableArray* _performedRequests;
	NSMutableArray* _cachedRequestResults;
	NSMutableArray* _checkedCachedResultsOnBehalfOfRequest;
	NSMutableArray* _locatedCachedResultsOnBehalfOfRequest;
	NSMutableArray* _ledger;
	NSMapTable* _requestToHumanReadableLabelMap;

}

@property (nonatomic,copy) NSArray * orderedRequests; 
@property (nonatomic,copy,readonly) NSArray * originalRequests; 
@property (nonatomic,copy,readonly) NSArray * performedRequests; 
-(id)description;
-(id)_humanReadableLabelForRequest:(id)arg1 ;
-(id)initWithOriginalRequests:(id)arg1 ;
-(void)setOrderedRequests:(NSArray *)arg1 ;
-(void)performingOrderedDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 ;
-(void)performingRequest:(id)arg1 ;
-(void)performedRequest:(id)arg1 withError:(id)arg2 ;
-(void)request:(id)arg1 cachedResultsWithObservationsCacheKey:(id)arg2 ;
-(void)cachedObservationsWithKey:(id)arg1 wereCheckedOnBehalfOfRequest:(id)arg2 ;
-(NSArray *)originalRequests;
-(NSArray *)orderedRequests;
-(void)cachedObservationsWithKey:(id)arg1 wereLocatedOnBehalfOfRequest:(id)arg2 ;
-(NSArray *)performedRequests;
-(id)keyUsedToCacheResultsOfRequest:(id)arg1 ;
-(id)requestsThatLookedUpCachedResultsKey:(id)arg1 ;
-(id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)arg1 ;
-(id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)arg1 ;
-(id)requestThatProvidedObservationsForRequest:(id)arg1 ;
-(BOOL)resultsObtainedFromObservationsCacheForRequest:(id)arg1 ;
@end

