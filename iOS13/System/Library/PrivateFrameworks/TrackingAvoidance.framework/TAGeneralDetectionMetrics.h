/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAInterVisitMetricPerDevice;

@interface TAGeneralDetectionMetrics : NSObject {

	BOOL _geoNavHint;
	BOOL _vehicularStateHint;
	TAInterVisitMetricPerDevice* _interVisitMetrics;
	unsigned long long _dominantUserActivity;
	long long _pdState;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * interVisitMetrics;              //@synthesize interVisitMetrics=_interVisitMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long dominantUserActivity;                      //@synthesize dominantUserActivity=_dominantUserActivity - In the implementation block
@property (nonatomic,readonly) long long pdState;                                            //@synthesize pdState=_pdState - In the implementation block
@property (nonatomic,readonly) BOOL geoNavHint;                                              //@synthesize geoNavHint=_geoNavHint - In the implementation block
@property (nonatomic,readonly) BOOL vehicularStateHint;                                      //@synthesize vehicularStateHint=_vehicularStateHint - In the implementation block
-(id)initWithInterVisitMetrics:(id)arg1 dominantUserActivity:(unsigned long long)arg2 pdState:(long long)arg3 geoNavHint:(BOOL)arg4 vehicularStateHint:(BOOL)arg5 ;
-(TAInterVisitMetricPerDevice *)interVisitMetrics;
-(unsigned long long)dominantUserActivity;
-(long long)pdState;
-(BOOL)geoNavHint;
-(BOOL)vehicularStateHint;
@end

