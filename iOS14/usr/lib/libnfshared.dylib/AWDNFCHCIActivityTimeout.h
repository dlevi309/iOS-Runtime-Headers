/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCIActivityTimeout : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _command;
	unsigned _commandParam1;
	unsigned _commandResult;
	unsigned _expressType;
	unsigned _spid;
	unsigned _timeoutValue;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasSpid; 
@property (assign,nonatomic) unsigned spid;                                          //@synthesize spid=_spid - In the implementation block
@property (assign,nonatomic) BOOL hasCommand; 
@property (assign,nonatomic) unsigned command;                                       //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasCommandParam1; 
@property (assign,nonatomic) unsigned commandParam1;                                 //@synthesize commandParam1=_commandParam1 - In the implementation block
@property (assign,nonatomic) BOOL hasCommandResult; 
@property (assign,nonatomic) unsigned commandResult;                                 //@synthesize commandResult=_commandResult - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutValue; 
@property (assign,nonatomic) unsigned timeoutValue;                                  //@synthesize timeoutValue=_timeoutValue - In the implementation block
@property (assign,nonatomic) BOOL hasExpressType; 
@property (assign,nonatomic) unsigned expressType;                                   //@synthesize expressType=_expressType - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(unsigned)spid;
-(unsigned long long)timestamp;
-(BOOL)hasCommand;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSpid;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)command;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)timeoutValue;
-(void)setTimeoutValue:(unsigned)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setCommandParam1:(unsigned)arg1 ;
-(void)setHasCommandParam1:(BOOL)arg1 ;
-(BOOL)hasCommandParam1;
-(void)setCommandResult:(unsigned)arg1 ;
-(void)setHasCommandResult:(BOOL)arg1 ;
-(BOOL)hasCommandResult;
-(void)setExpressType:(unsigned)arg1 ;
-(void)setHasExpressType:(BOOL)arg1 ;
-(BOOL)hasExpressType;
-(void)setSpid:(unsigned)arg1 ;
-(void)setHasSpid:(BOOL)arg1 ;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(void)setHasTimeoutValue:(BOOL)arg1 ;
-(BOOL)hasTimeoutValue;
@end
