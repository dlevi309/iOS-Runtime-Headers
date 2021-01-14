/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
*/

#import <libobjc.A.dylib/BRRTCMetric.h>

@class NSNumber, NSMutableDictionary, NSString;

@interface BRRTCPairingMetric : NSObject <BRRTCMetric> {

	unsigned short _rtcType;
	unsigned long long _pairingBeginsType;
	NSNumber* _subreasonCode;
	NSMutableDictionary* _metricDict;

}

@property (assign,nonatomic) unsigned long long pairingBeginsType;              //@synthesize pairingBeginsType=_pairingBeginsType - In the implementation block
@property (assign,nonatomic) unsigned short rtcType;                            //@synthesize rtcType=_rtcType - In the implementation block
@property (assign,nonatomic) NSNumber * subreasonCode;                          //@synthesize subreasonCode=_subreasonCode - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metricDict;                  //@synthesize metricDict=_metricDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(unsigned short)rtcType;
-(id)initWithPairingBeginsType:(unsigned long long)arg1 ;
-(void)setPairingBeginsType:(unsigned long long)arg1 ;
-(void)setMetricDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metricDict;
-(unsigned long long)pairingBeginsType;
-(NSNumber *)subreasonCode;
-(void)setRtcType:(unsigned short)arg1 ;
-(void)addPairingTimeEventToMetricDict:(id)arg1 withValue:(id)arg2 ;
-(void)addPairingTimePerformanceEventToMetricDict:(id)arg1 withTime:(id)arg2 ;
-(void)setSubreasonCode:(NSNumber *)arg1 ;
@end

