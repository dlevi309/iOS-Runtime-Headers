/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOTransitRouteUpdaterDelegate.h>

@protocol MNSessionUpdateManagerDelegate;
@class NSString, GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOTransitRouteUpdater, NSMutableDictionary, NSTimer, GEOETATrafficUpdateRequest;

@interface MNSessionUpdateManager : NSObject <GEOTransitRouteUpdaterDelegate> {

	id<MNSessionUpdateManagerDelegate> _delegate;
	NSString* _requestingAppIdentifier;
	GEOApplicationAuditToken* _auditToken;
	GEODataRequestThrottlerToken* _throttleToken;
	GEOTransitRouteUpdater* _transitUpdater;
	NSMutableDictionary* _subscribers;
	NSTimer* _etaTimer;
	double _etaRequestInterval;
	double _initialRequestDelay;
	double _opportunisticRequestTimeWindow;
	unsigned long long _maxAlternateRoutesCount;
	BOOL _isPaused;
	GEOETATrafficUpdateRequest* _pendingETARequest;

}

@property (assign,nonatomic,__weak) id<MNSessionUpdateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * requestingAppIdentifier;                                //@synthesize requestingAppIdentifier=_requestingAppIdentifier - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * auditToken;                           //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttleToken;                    //@synthesize throttleToken=_throttleToken - In the implementation block
@property (assign,nonatomic) double etaRequestInterval;                                       //@synthesize etaRequestInterval=_etaRequestInterval - In the implementation block
@property (assign,nonatomic) double initialRequestDelay;                                      //@synthesize initialRequestDelay=_initialRequestDelay - In the implementation block
@property (assign,nonatomic) double opportunisticRequestTimeWindow;                           //@synthesize opportunisticRequestTimeWindow=_opportunisticRequestTimeWindow - In the implementation block
@property (assign,nonatomic) unsigned long long maxAlternateRoutesCount;                      //@synthesize maxAlternateRoutesCount=_maxAlternateRoutesCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<MNSessionUpdateManagerDelegate>)delegate;
-(void)setDelegate:(id<MNSessionUpdateManagerDelegate>)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)setAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3 ;
-(void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2 ;
-(GEODataRequestThrottlerToken *)throttleToken;
-(void)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2 ;
-(void)stopUpdateRequests;
-(NSString *)requestingAppIdentifier;
-(void)setRequestingAppIdentifier:(NSString *)arg1 ;
-(unsigned long long)maxAlternateRoutesCount;
-(void)setMaxAlternateRoutesCount:(unsigned long long)arg1 ;
-(void)_handleETAResponse:(id)arg1 forRouteInfo:(id)arg2 request:(id)arg3 error:(id)arg4 ;
-(void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2 ;
-(double)etaRequestInterval;
-(void)setEtaRequestInterval:(double)arg1 ;
-(double)initialRequestDelay;
-(void)setInitialRequestDelay:(double)arg1 ;
-(void)_scheduleETATimerWithInterval:(double)arg1 ;
-(void)_terminateETARequests;
-(void)_continueETARequests;
-(BOOL)_hasAtLeastOneActiveSubscriber;
-(void)_sendETARequest;
-(id)_baseETARequest;
-(BOOL)_updateETARequest:(id)arg1 withRouteInfo:(id)arg2 andUserLocation:(id)arg3 ;
-(void)restartUpdateTimer;
-(void)pauseUpdateRequestsForSubscriber:(id)arg1 ;
-(void)resumeUpdateRequestsForSubscriber:(id)arg1 ;
-(void)setThrottleToken:(GEODataRequestThrottlerToken *)arg1 ;
-(double)opportunisticRequestTimeWindow;
-(void)setOpportunisticRequestTimeWindow:(double)arg1 ;
@end

