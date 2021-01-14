/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAnalyticsAWDWiFiDPSAWDLSnapshot, WiFiAnalyticsAWDWiFiDPSBTSnapshot, WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot;

@interface WiFiAnalyticsAWDWiFiDPSSnapshot : PBCodable <NSCopying> {

	WiFiAnalyticsAWDWiFiDPSAWDLSnapshot* _awdlSnapshot;
	WiFiAnalyticsAWDWiFiDPSBTSnapshot* _btSnapshot;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBE;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBK;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVI;
	WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVO;

}

@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotBE; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBE;              //@synthesize txCompletionSnapshotBE=_txCompletionSnapshotBE - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotBK; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBK;              //@synthesize txCompletionSnapshotBK=_txCompletionSnapshotBK - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotVO; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVO;              //@synthesize txCompletionSnapshotVO=_txCompletionSnapshotVO - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotVI; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVI;              //@synthesize txCompletionSnapshotVI=_txCompletionSnapshotVI - In the implementation block
@property (nonatomic,readonly) BOOL hasBtSnapshot; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSBTSnapshot * btSnapshot;                                         //@synthesize btSnapshot=_btSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL hasAwdlSnapshot; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiDPSAWDLSnapshot * awdlSnapshot;                                     //@synthesize awdlSnapshot=_awdlSnapshot - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTxCompletionSnapshotBE:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotBK:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVO:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVI:(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setBtSnapshot:(WiFiAnalyticsAWDWiFiDPSBTSnapshot *)arg1 ;
-(void)setAwdlSnapshot:(WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *)arg1 ;
-(BOOL)hasTxCompletionSnapshotBE;
-(BOOL)hasTxCompletionSnapshotBK;
-(BOOL)hasTxCompletionSnapshotVO;
-(BOOL)hasTxCompletionSnapshotVI;
-(BOOL)hasBtSnapshot;
-(BOOL)hasAwdlSnapshot;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBE;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBK;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVO;
-(WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVI;
-(WiFiAnalyticsAWDWiFiDPSBTSnapshot *)btSnapshot;
-(WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *)awdlSnapshot;
@end

