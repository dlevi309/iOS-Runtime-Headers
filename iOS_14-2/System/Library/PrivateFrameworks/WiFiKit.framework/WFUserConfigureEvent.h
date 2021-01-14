/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFAWDEvent.h>

@class PBCodable, NSString;

@interface WFUserConfigureEvent : NSObject <WFAWDEvent> {

	unsigned _metricIdentifier;
	PBCodable* _metric;

}

@property (assign,nonatomic) unsigned metricIdentifier;              //@synthesize metricIdentifier=_metricIdentifier - In the implementation block
@property (nonatomic,retain) PBCodable * metric;                     //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureEventWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3 ;
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(id)initWithType:(long long)arg1 new:(long long)arg2 old:(long long)arg3 ;
-(unsigned)_metricIdForType:(long long)arg1 ;
-(unsigned)metricIdentifier;
-(void)setMetricIdentifier:(unsigned)arg1 ;
@end

