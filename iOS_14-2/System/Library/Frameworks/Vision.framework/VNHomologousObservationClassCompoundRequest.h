/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest {

	NSMapTable* _requestsClassMapping;

}
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(id)initWithSubrequests:(id)arg1 ;
-(id)originalRequestsOfClass:(Class)arg1 ;
@end

