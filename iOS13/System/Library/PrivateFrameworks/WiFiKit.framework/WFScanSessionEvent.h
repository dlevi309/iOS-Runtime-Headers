/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFAWDEvent.h>

@protocol WFAWDWiFiUIScanSessionMetric;
@class PBCodable, NSString;

@interface WFScanSessionEvent : NSObject <WFAWDEvent> {

	PBCodable*<WFAWDWiFiUIScanSessionMetric> _metric;

}

@property (nonatomic,retain) PBCodable*<WFAWDWiFiUIScanSessionMetric> metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scanSessionEventWithSectionCounts:(id)arg1 duration:(double)arg2 ;
-(PBCodable*<WFAWDWiFiUIScanSessionMetric>)metric;
-(void)setMetric:(PBCodable*<WFAWDWiFiUIScanSessionMetric>)arg1 ;
-(unsigned)metricIdentifier;
-(id)initWithScanSectionCounts:(id)arg1 duration:(double)arg2 ;
-(unsigned long long)_durationBucketFromTimeInterval:(double)arg1 ;
-(id)_countMetricsFromSectionCounts:(id)arg1 ;
@end

