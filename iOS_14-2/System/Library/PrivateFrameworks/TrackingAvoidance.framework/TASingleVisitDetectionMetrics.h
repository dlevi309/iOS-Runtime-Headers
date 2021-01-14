/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject <NSSecureCoding> {

	TAInterVisitMetricPerDevice* _interVisitMetrics;
	unsigned long long _loiType;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * interVisitMetrics;              //@synthesize interVisitMetrics=_interVisitMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long loiType;                                   //@synthesize loiType=_loiType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)loiType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2 ;
-(TAInterVisitMetricPerDevice *)interVisitMetrics;
@end

