/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitSiriSync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _currentConfigurationVersion;
	unsigned _duration;
	unsigned _lastSyncedConfigurationVersion;
	NSMutableArray* _reasons;
	unsigned _serverConfigurationVersion;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * reasons;                             //@synthesize reasons=_reasons - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentConfigurationVersion; 
@property (assign,nonatomic) unsigned currentConfigurationVersion;                 //@synthesize currentConfigurationVersion=_currentConfigurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasLastSyncedConfigurationVersion; 
@property (assign,nonatomic) unsigned lastSyncedConfigurationVersion;              //@synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasServerConfigurationVersion; 
@property (assign,nonatomic) unsigned serverConfigurationVersion;                  //@synthesize serverConfigurationVersion=_serverConfigurationVersion - In the implementation block
+(Class)reasonsType;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)reasonsCount;
-(void)clearReasons;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setReasons:(NSMutableArray *)arg1 ;
-(void)addReasons:(id)arg1 ;
-(id)description;
-(NSMutableArray *)reasons;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)lastSyncedConfigurationVersion;
-(void)setLastSyncedConfigurationVersion:(unsigned)arg1 ;
-(unsigned)serverConfigurationVersion;
-(void)setCurrentConfigurationVersion:(unsigned)arg1 ;
-(void)setHasCurrentConfigurationVersion:(BOOL)arg1 ;
-(BOOL)hasCurrentConfigurationVersion;
-(void)setHasLastSyncedConfigurationVersion:(BOOL)arg1 ;
-(BOOL)hasLastSyncedConfigurationVersion;
-(void)setServerConfigurationVersion:(unsigned)arg1 ;
-(void)setHasServerConfigurationVersion:(BOOL)arg1 ;
-(BOOL)hasServerConfigurationVersion;
-(unsigned)currentConfigurationVersion;
-(id)reasonsAtIndex:(unsigned long long)arg1 ;
@end

