/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {

	NSMapTable* _requestToObservationClassMap;

}
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(id)initWithSubrequestsAndUniqueObservationClasses:(id)arg1 ;
-(id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2 ;
-(id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2 ;
@end

