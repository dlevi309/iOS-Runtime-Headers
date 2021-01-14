/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDWiFiNWActivityPeerStats;

@interface WiFiAnalyticsAWDWiFiDPSCountersSample : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	WiFiAnalyticsAWDWiFiNWActivityControllerStats* _controllerStats;
	WiFiAnalyticsAWDWiFiNWActivityPeerStats* _peerStats;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasControllerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityControllerStats * controllerStats;              //@synthesize controllerStats=_controllerStats - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerStats; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityPeerStats * peerStats;                          //@synthesize peerStats=_peerStats - In the implementation block
-(id)dictionaryRepresentation;
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
-(void)setControllerStats:(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)arg1 ;
-(BOOL)hasControllerStats;
-(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)peerStats;
-(void)setPeerStats:(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)arg1 ;
-(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)controllerStats;
-(BOOL)hasPeerStats;
@end

