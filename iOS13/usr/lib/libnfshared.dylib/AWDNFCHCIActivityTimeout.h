/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW16 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCommand:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)command;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
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
-(BOOL)hasSpid;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(unsigned)spid;
-(void)setTimeoutValue:(unsigned)arg1 ;
-(unsigned)timeoutValue;
-(void)setHasTimeoutValue:(BOOL)arg1 ;
-(BOOL)hasTimeoutValue;
@end

