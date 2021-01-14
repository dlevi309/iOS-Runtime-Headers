/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFAWDEvent.h>

@class PBCodable, NSString;

@interface WFHealthUIEvent : NSObject <WFAWDEvent> {

	unsigned _metricIdentifier;
	PBCodable* _metric;

}

@property (assign,nonatomic) unsigned metricIdentifier;              //@synthesize metricIdentifier=_metricIdentifier - In the implementation block
@property (nonatomic,retain) PBCodable * metric;                     //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subtitleEventWithIssues:(id)arg1 ssid:(id)arg2 ;
+(id)tapLinkEventWithIssues:(id)arg1 ssid:(id)arg2 ;
+(id)detailEventWithIssues:(id)arg1 ssid:(id)arg2 ;
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricIdentifier;
-(void)setMetricIdentifier:(unsigned)arg1 ;
-(id)initWithEventType:(long long)arg1 issues:(id)arg2 ssid:(id)arg3 ;
@end

