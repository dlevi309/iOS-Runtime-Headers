/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDWiFiDPSEpilogue;

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _dpsCounterSamples;
	WiFiAnalyticsAWDWiFiDPSEpilogue* _dpsEpiloge;
	NSMutableArray* _probeResults;
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
+(Class)stallNotificationType;
+(Class)probeResultType;
+(Class)dpsCounterSampleType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
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
-(NSMutableArray *)stallNotifications;
-(void)setStallNotifications:(NSMutableArray *)arg1 ;
-(NSMutableArray *)probeResults;
-(void)setProbeResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dpsCounterSamples;
-(void)setDpsCounterSamples:(NSMutableArray *)arg1 ;
-(WiFiAnalyticsAWDWiFiDPSEpilogue *)dpsEpiloge;
@end

