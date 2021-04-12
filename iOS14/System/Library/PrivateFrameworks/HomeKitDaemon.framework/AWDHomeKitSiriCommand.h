/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitSiriCommand : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _actionType;
	unsigned _currentConfigurationVersion;
	unsigned _duration;
	unsigned _lastSyncedConfigurationVersion;
	unsigned _numEntities;
	unsigned _numFailures;
	unsigned _numIncompleteOperations;
	int _outcome;
	unsigned _serverConfigurationVersion;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                                       //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasOutcome; 
@property (assign,nonatomic) int outcome;                                          //@synthesize outcome=_outcome - In the implementation block
@property (assign,nonatomic) BOOL hasNumEntities; 
@property (assign,nonatomic) unsigned numEntities;                                 //@synthesize numEntities=_numEntities - In the implementation block
@property (assign,nonatomic) BOOL hasNumFailures; 
@property (assign,nonatomic) unsigned numFailures;                                 //@synthesize numFailures=_numFailures - In the implementation block
@property (assign,nonatomic) BOOL hasNumIncompleteOperations; 
@property (assign,nonatomic) unsigned numIncompleteOperations;                     //@synthesize numIncompleteOperations=_numIncompleteOperations - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentConfigurationVersion; 
@property (assign,nonatomic) unsigned currentConfigurationVersion;                 //@synthesize currentConfigurationVersion=_currentConfigurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasLastSyncedConfigurationVersion; 
@property (assign,nonatomic) unsigned lastSyncedConfigurationVersion;              //@synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion - In the implementation block
@property (assign,nonatomic) BOOL hasServerConfigurationVersion; 
@property (assign,nonatomic) unsigned serverConfigurationVersion;                  //@synthesize serverConfigurationVersion=_serverConfigurationVersion - In the implementation block
-(id)dictionaryRepresentation;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(int)outcome;
-(unsigned long long)timestamp;
-(void)setOutcome:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasOutcome:(BOOL)arg1 ;
-(BOOL)hasOutcome;
-(id)outcomeAsString:(int)arg1 ;
-(int)StringAsOutcome:(id)arg1 ;
-(id)description;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
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
-(void)setNumEntities:(unsigned)arg1 ;
-(void)setHasNumEntities:(BOOL)arg1 ;
-(BOOL)hasNumEntities;
-(void)setNumFailures:(unsigned)arg1 ;
-(void)setHasNumFailures:(BOOL)arg1 ;
-(BOOL)hasNumFailures;
-(void)setNumIncompleteOperations:(unsigned)arg1 ;
-(void)setHasNumIncompleteOperations:(BOOL)arg1 ;
-(BOOL)hasNumIncompleteOperations;
-(void)setCurrentConfigurationVersion:(unsigned)arg1 ;
-(void)setHasCurrentConfigurationVersion:(BOOL)arg1 ;
-(BOOL)hasCurrentConfigurationVersion;
-(void)setHasLastSyncedConfigurationVersion:(BOOL)arg1 ;
-(BOOL)hasLastSyncedConfigurationVersion;
-(void)setServerConfigurationVersion:(unsigned)arg1 ;
-(void)setHasServerConfigurationVersion:(BOOL)arg1 ;
-(BOOL)hasServerConfigurationVersion;
-(unsigned)numEntities;
-(unsigned)numFailures;
-(unsigned)numIncompleteOperations;
-(unsigned)currentConfigurationVersion;
@end

