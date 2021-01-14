/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSHashTable, NSMutableSet, NSTimer;

@interface GEOTransitRouteUpdateRequester : NSObject {

	os_unfair_lock_s _updatersLock;
	NSHashTable* _updaters;
	os_unfair_lock_s _processedRequestsLock;
	NSMutableSet* _processedRequests;
	os_unfair_lock_s _inflightRequestsLock;
	NSMutableSet* _inflightRequests;
	NSTimer* _updateTimer;
	unsigned long long _maxRetries;
	unsigned long long _numRetries;
	double _initialDelay;
	double _requestInterval;

}

@property (assign,nonatomic) double initialDelay;                             //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double requestInterval;                          //@synthesize requestInterval=_requestInterval - In the implementation block
@property (nonatomic,readonly) NSHashTable * updaters;                        //@synthesize updaters=_updaters - In the implementation block
@property (nonatomic,readonly) NSMutableSet * processedRequests;              //@synthesize processedRequests=_processedRequests - In the implementation block
+(id)sharedInstance;
-(id)initPrivate;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(double)requestInterval;
-(NSHashTable *)updaters;
-(void)_cancelUpdateTimer;
-(void)_scheduleUpdateTimerWithInterval:(double)arg1 ;
-(void)_purgeAllObjects;
-(void)setRequestInterval:(double)arg1 ;
-(void)_cancelAllRequestsIfNeeded;
-(void)_processRequests;
-(void)_removeRequestsIfApplicable:(id)arg1 ;
-(id)_requestsForUpdaters:(id)arg1 ;
-(void)_sendRequestForRequests:(id)arg1 ;
-(id)_uuidsForRequests:(id)arg1 ;
-(void)_handleResponse:(id)arg1 andError:(id)arg2 forRequest:(id)arg3 ;
-(void)registerRouteUpdater:(id)arg1 ;
-(NSMutableSet *)processedRequests;
-(void)unregisterRouteUpdater:(id)arg1 ;
@end

