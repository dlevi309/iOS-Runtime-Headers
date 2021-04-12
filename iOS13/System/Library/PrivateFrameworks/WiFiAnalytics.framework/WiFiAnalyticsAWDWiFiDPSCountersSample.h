/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setControllerStats:(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)arg1 ;
-(BOOL)hasControllerStats;
-(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)peerStats;
-(void)setPeerStats:(WiFiAnalyticsAWDWiFiNWActivityPeerStats *)arg1 ;
-(WiFiAnalyticsAWDWiFiNWActivityControllerStats *)controllerStats;
-(BOOL)hasPeerStats;
@end

