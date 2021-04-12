/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class AVRoutingSessionManager, ATXAVRouteInfo;

@interface ATXAVRoutingSessionHelper : NSObject {

	float _threshold;
	AVRoutingSessionManager* _avRoutingSessionManager;
	ATXAVRouteInfo* _internalPredictedRouteInfo;

}

@property (nonatomic,readonly) float acceptThreshod; 
@property (nonatomic,readonly) ATXAVRouteInfo * predictedRouteInfo; 
-(id)init;
-(id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2 ;
-(ATXAVRouteInfo *)predictedRouteInfo;
-(float)acceptThreshod;
-(id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)arg2 ;
-(id)_predictedRouteWithAcceptThreshold:(float)arg1 ;
-(id)_selectedOrPendingRoute;
-(id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2 ;
-(id)_atxAVRouteInfoWithRoute:(id)arg1 ;
@end

