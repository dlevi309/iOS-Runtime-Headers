/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNRequestCancelling.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding> {

	NSLock* _requestLock;
	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSMutableDictionary* _sequencedRequestObservations;
	NSMutableSet* _trackerKeys;

}
-(void)releaseTracker:(id)arg1 ;
-(id)init;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(void)cancelAllRequests;
-(id)orderedRequestsForRequests:(id)arg1 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2 ;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
@end

