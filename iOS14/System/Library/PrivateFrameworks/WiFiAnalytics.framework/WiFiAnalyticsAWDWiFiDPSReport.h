/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiDPSEpilogue, WiFiAnalyticsAWDWiFiDPSSnapshot;

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _dpsCounterSamples;
	WiFiAnalyticsAWDWiFiDPSEpilogue* _dpsEpiloge;
	NSMutableArray* _probeResults;
	WiFiAnalyticsAWDWiFiDPSSnapshot* _snapshot;
	NSMutableArray* _stallNotifications;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * stallNotifications;                       //@synthesize stallNotifications=_stallNotifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * probeResults;                             //@synthesize probeResults=_probeResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * dpsCounterSamples;                        //@synthesize dpsCounterSamples=_dpsCounterSamples - In the implementation block
@property (nonatomic,readonly) BOOL hasDpsEpiloge; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSEpilogue * dpsEpiloge;              //@synthesize dpsEpiloge=_dpsEpiloge - In the implementation block
@property (nonatomic,readonly) BOOL hasSnapshot; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSSnapshot * snapshot;                //@synthesize snapshot=_snapshot - In the implementation block
+(Class)stallNotificationType;
+(Class)probeResultType;
+(Class)dpsCounterSampleType;
-(WiFiAnalyticsAWDWiFiDPSSnapshot *)snapshot;
-(id)dictionaryRepresentation;
-(void)setSnapshot:(WiFiAnalyticsAWDWiFiDPSSnapshot *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addStallNotification:(id)arg1 ;
-(void)addProbeResult:(id)arg1 ;
-(void)addDpsCounterSample:(id)arg1 ;
-(unsigned long long)stallNotificationsCount;
-(void)clearStallNotifications;
-(id)stallNotificationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)probeResultsCount;
-(void)clearProbeResults;
-(id)probeResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dpsCounterSamplesCount;
-(void)clearDpsCounterSamples;
-(id)dpsCounterSampleAtIndex:(unsigned long long)arg1 ;
-(void)setDpsEpiloge:(WiFiAnalyticsAWDWiFiDPSEpilogue *)arg1 ;
-(BOOL)hasDpsEpiloge;
-(BOOL)hasSnapshot;
-(NSMutableArray *)stallNotifications;
-(void)setStallNotifications:(NSMutableArray *)arg1 ;
-(NSMutableArray *)probeResults;
-(void)setProbeResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dpsCounterSamples;
-(void)setDpsCounterSamples:(NSMutableArray *)arg1 ;
-(WiFiAnalyticsAWDWiFiDPSEpilogue *)dpsEpiloge;
@end

