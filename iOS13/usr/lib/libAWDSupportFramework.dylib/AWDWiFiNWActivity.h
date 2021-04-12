/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDWiFiNWActivityControllerStats;

@interface AWDWiFiNWActivity : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _activities;
	AWDWiFiNWActivityControllerStats* _controllerStats;
	NSMutableArray* _interfaceStats;
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
+(Class)activitiesType;
+(Class)interfaceStatsType;
+(Class)peerStatsType;
-(void)dealloc;
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
-(NSMutableArray *)activities;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)clearActivities;
-(void)addActivities:(id)arg1 ;
-(unsigned long long)activitiesCount;
-(id)activitiesAtIndex:(unsigned long long)arg1 ;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(void)addInterfaceStats:(id)arg1 ;
-(void)addPeerStats:(id)arg1 ;
-(unsigned long long)interfaceStatsCount;
-(void)clearInterfaceStats;
-(id)interfaceStatsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)peerStatsCount;
-(void)clearPeerStats;
-(id)peerStatsAtIndex:(unsigned long long)arg1 ;
-(void)setControllerStats:(AWDWiFiNWActivityControllerStats *)arg1 ;
-(BOOL)hasControllerStats;
-(NSMutableArray *)interfaceStats;
-(void)setInterfaceStats:(NSMutableArray *)arg1 ;
-(NSMutableArray *)peerStats;
-(void)setPeerStats:(NSMutableArray *)arg1 ;
-(AWDWiFiNWActivityControllerStats *)controllerStats;
@end

