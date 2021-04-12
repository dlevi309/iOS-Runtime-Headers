/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestWarming, VNRequestCancelling, VNTrackerProviding> {

	NSLock* _requestLock;
	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSMutableDictionary* _sequencedRequestObservations;
	NSMutableSet* _trackerKeys;

}
-(id)init;
-(void)dealloc;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)releaseTracker:(id)arg1 ;
-(BOOL)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2 ;
-(id)_dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(id)_orderedRequestsForRequests:(id)arg1 ;
-(BOOL)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
@end

