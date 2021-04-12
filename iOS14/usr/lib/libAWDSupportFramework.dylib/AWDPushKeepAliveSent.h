/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushKeepAliveSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _currentGrowthStage;
	unsigned _dualChannelState;
	NSString* _guid;
	unsigned _keepAliveACKDuration;
	unsigned _keepAliveVersion;
	unsigned _lastKeepAliveInterval;
	int _linkQuality;
	unsigned _nextKeepAliveInterval;
	unsigned _timeSinceConnected;
	unsigned _timeSinceLastKeepAlive;
	unsigned _timeSinceLastSuccessfulKeepAlive;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                        //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                                //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastKeepAlive; 
@property (assign,nonatomic) unsigned timeSinceLastKeepAlive;                        //@synthesize timeSinceLastKeepAlive=_timeSinceLastKeepAlive - In the implementation block
@property (assign,nonatomic) BOOL hasNextKeepAliveInterval; 
@property (assign,nonatomic) unsigned nextKeepAliveInterval;                         //@synthesize nextKeepAliveInterval=_nextKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL hasKeepAliveACKDuration; 
@property (assign,nonatomic) unsigned keepAliveACKDuration;                          //@synthesize keepAliveACKDuration=_keepAliveACKDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                              //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (assign,nonatomic) BOOL hasKeepAliveVersion; 
@property (assign,nonatomic) unsigned keepAliveVersion;                              //@synthesize keepAliveVersion=_keepAliveVersion - In the implementation block
@property (assign,nonatomic) BOOL hasLastKeepAliveInterval; 
@property (assign,nonatomic) unsigned lastKeepAliveInterval;                         //@synthesize lastKeepAliveInterval=_lastKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceConnected; 
@property (assign,nonatomic) unsigned timeSinceConnected;                            //@synthesize timeSinceConnected=_timeSinceConnected - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastSuccessfulKeepAlive; 
@property (assign,nonatomic) unsigned timeSinceLastSuccessfulKeepAlive;              //@synthesize timeSinceLastSuccessfulKeepAlive=_timeSinceLastSuccessfulKeepAlive - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentGrowthStage; 
@property (assign,nonatomic) unsigned currentGrowthStage;                            //@synthesize currentGrowthStage=_currentGrowthStage - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)currentGrowthStage;
-(NSString *)guid;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(int)linkQuality;
-(unsigned)connectionType;
-(void)setLinkQuality:(int)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned)dualChannelState;
-(BOOL)hasDualChannelState;
-(unsigned long long)timestamp;
-(BOOL)hasConnectionType;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setDualChannelState:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setKeepAliveVersion:(unsigned)arg1 ;
-(void)setHasKeepAliveVersion:(BOOL)arg1 ;
-(BOOL)hasKeepAliveVersion;
-(void)setTimeSinceLastSuccessfulKeepAlive:(unsigned)arg1 ;
-(void)setHasTimeSinceLastSuccessfulKeepAlive:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastSuccessfulKeepAlive;
-(void)setLastKeepAliveInterval:(unsigned)arg1 ;
-(void)setHasLastKeepAliveInterval:(BOOL)arg1 ;
-(BOOL)hasLastKeepAliveInterval;
-(void)setTimeSinceConnected:(unsigned)arg1 ;
-(void)setHasTimeSinceConnected:(BOOL)arg1 ;
-(BOOL)hasTimeSinceConnected;
-(void)setCurrentGrowthStage:(unsigned)arg1 ;
-(void)setHasCurrentGrowthStage:(BOOL)arg1 ;
-(BOOL)hasCurrentGrowthStage;
-(unsigned)keepAliveVersion;
-(unsigned)timeSinceLastSuccessfulKeepAlive;
-(unsigned)lastKeepAliveInterval;
-(unsigned)timeSinceConnected;
-(void)setTimeSinceLastKeepAlive:(unsigned)arg1 ;
-(void)setHasTimeSinceLastKeepAlive:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastKeepAlive;
-(void)setNextKeepAliveInterval:(unsigned)arg1 ;
-(void)setHasNextKeepAliveInterval:(BOOL)arg1 ;
-(BOOL)hasNextKeepAliveInterval;
-(void)setKeepAliveACKDuration:(unsigned)arg1 ;
-(void)setHasKeepAliveACKDuration:(BOOL)arg1 ;
-(BOOL)hasKeepAliveACKDuration;
-(unsigned)timeSinceLastKeepAlive;
-(unsigned)nextKeepAliveInterval;
-(unsigned)keepAliveACKDuration;
@end

