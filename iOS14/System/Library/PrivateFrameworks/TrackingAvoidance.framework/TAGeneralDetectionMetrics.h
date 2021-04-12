/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TAInterVisitMetricPerDevice;

@interface TAGeneralDetectionMetrics : NSObject <NSSecureCoding> {

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
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)pdState;
-(id)initWithInterVisitMetrics:(id)arg1 dominantUserActivity:(unsigned long long)arg2 pdState:(long long)arg3 geoNavHint:(BOOL)arg4 vehicularStateHint:(BOOL)arg5 ;
-(TAInterVisitMetricPerDevice *)interVisitMetrics;
-(unsigned long long)dominantUserActivity;
-(BOOL)geoNavHint;
-(BOOL)vehicularStateHint;
@end

