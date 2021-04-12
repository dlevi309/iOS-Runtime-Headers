/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_atxAVRouteInfoWithRoute:(id)arg1 ;
-(id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)arg2 ;
-(id)_selectedOrPendingRoute;
-(id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2 ;
-(float)acceptThreshod;
-(id)_predictedRouteWithAcceptThreshold:(float)arg1 ;
-(ATXAVRouteInfo *)predictedRouteInfo;
@end

