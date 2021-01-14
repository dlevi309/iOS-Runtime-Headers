/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDWiFiNWActivityControllerStats, AWDLinkQualityMeasurements;

@interface AWDWiFiNWActivity : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _activities;
	AWDWiFiNWActivityControllerStats* _controllerStats;
	NSMutableArray* _interfaceStats;
	AWDLinkQualityMeasurements* _linkQualSample;
	NSMutableArray* _peerStats;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * activities;                                     //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) NSMutableArray * interfaceStats;                                 //@synthesize interfaceStats=_interfaceStats - In the implementation block
@property (nonatomic,retain) NSMutableArray * peerStats;                                      //@synthesize peerStats=_peerStats - In the implementation block
@property (nonatomic,readonly) BOOL hasControllerStats; 
@property (nonatomic,retain) AWDWiFiNWActivityControllerStats * controllerStats;              //@synthesize controllerStats=_controllerStats - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkQualSample; 
@property (nonatomic,retain) AWDLinkQualityMeasurements * linkQualSample;                     //@synthesize linkQualSample=_linkQualSample - In the implementation block
+(Class)activitiesType;
+(Class)interfaceStatsType;
+(Class)peerStatsType;
-(NSMutableArray *)activities;
-(id)dictionaryRepresentation;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)activitiesCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)addActivities:(id)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(id)activitiesAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)clearActivities;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addInterfaceStats:(id)arg1 ;
-(void)addPeerStats:(id)arg1 ;
-(unsigned long long)interfaceStatsCount;
-(void)clearInterfaceStats;
-(id)interfaceStatsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)peerStatsCount;
-(void)clearPeerStats;
-(id)peerStatsAtIndex:(unsigned long long)arg1 ;
-(void)setControllerStats:(AWDWiFiNWActivityControllerStats *)arg1 ;
-(void)setLinkQualSample:(AWDLinkQualityMeasurements *)arg1 ;
-(BOOL)hasControllerStats;
-(BOOL)hasLinkQualSample;
-(NSMutableArray *)interfaceStats;
-(void)setInterfaceStats:(NSMutableArray *)arg1 ;
-(NSMutableArray *)peerStats;
-(void)setPeerStats:(NSMutableArray *)arg1 ;
-(AWDWiFiNWActivityControllerStats *)controllerStats;
-(AWDLinkQualityMeasurements *)linkQualSample;
@end

