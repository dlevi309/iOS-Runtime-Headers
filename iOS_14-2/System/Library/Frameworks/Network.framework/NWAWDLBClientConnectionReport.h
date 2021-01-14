/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLBClientConnectionReport : PBCodable <NSCopying> {

	long long _bytesReceived;
	long long _bytesSent;
	long long _connectionDuration;
	unsigned long long _connectionServiceId;
	long long _timeToConnectionFailure;
	long long _timeToFirstResponse;
	unsigned long long _timestamp;
	int _connectionJoiningFailure;
	int _connectionJoiningLbConnectionMigration;
	int _connectionJoiningLbConnectionState;
	int _dataPathResult;
	SCD_Struct_NW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionJoiningFailure; 
@property (assign,nonatomic) int connectionJoiningFailure;                                //@synthesize connectionJoiningFailure=_connectionJoiningFailure - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionJoiningLbConnectionState; 
@property (assign,nonatomic) int connectionJoiningLbConnectionState;                      //@synthesize connectionJoiningLbConnectionState=_connectionJoiningLbConnectionState - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionJoiningLbConnectionMigration; 
@property (assign,nonatomic) int connectionJoiningLbConnectionMigration;                  //@synthesize connectionJoiningLbConnectionMigration=_connectionJoiningLbConnectionMigration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionServiceId; 
@property (assign,nonatomic) unsigned long long connectionServiceId;                      //@synthesize connectionServiceId=_connectionServiceId - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionDuration; 
@property (assign,nonatomic) long long connectionDuration;                                //@synthesize connectionDuration=_connectionDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDataPathResult; 
@property (assign,nonatomic) int dataPathResult;                                          //@synthesize dataPathResult=_dataPathResult - In the implementation block
@property (assign,nonatomic) BOOL hasBytesSent; 
@property (assign,nonatomic) long long bytesSent;                                         //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL hasBytesReceived; 
@property (assign,nonatomic) long long bytesReceived;                                     //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToFirstResponse; 
@property (assign,nonatomic) long long timeToFirstResponse;                               //@synthesize timeToFirstResponse=_timeToFirstResponse - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToConnectionFailure; 
@property (assign,nonatomic) long long timeToConnectionFailure;                           //@synthesize timeToConnectionFailure=_timeToConnectionFailure - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setBytesSent:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasBytesSent:(BOOL)arg1 ;
-(id)description;
-(void)setConnectionDuration:(long long)arg1 ;
-(void)setHasConnectionDuration:(BOOL)arg1 ;
-(BOOL)hasConnectionDuration;
-(BOOL)hasBytesSent;
-(void)setBytesReceived:(long long)arg1 ;
-(void)setHasBytesReceived:(BOOL)arg1 ;
-(BOOL)hasBytesReceived;
-(long long)connectionDuration;
-(long long)bytesReceived;
-(BOOL)hasDataPathResult;
-(void)setConnectionJoiningFailure:(int)arg1 ;
-(void)setHasConnectionJoiningFailure:(BOOL)arg1 ;
-(BOOL)hasConnectionJoiningFailure;
-(void)setConnectionJoiningLbConnectionState:(int)arg1 ;
-(void)setHasConnectionJoiningLbConnectionState:(BOOL)arg1 ;
-(BOOL)hasConnectionJoiningLbConnectionState;
-(int)dataPathResult;
-(void)setConnectionJoiningLbConnectionMigration:(int)arg1 ;
-(void)setHasConnectionJoiningLbConnectionMigration:(BOOL)arg1 ;
-(BOOL)hasConnectionJoiningLbConnectionMigration;
-(void)setConnectionServiceId:(unsigned long long)arg1 ;
-(void)setHasConnectionServiceId:(BOOL)arg1 ;
-(BOOL)hasConnectionServiceId;
-(void)setDataPathResult:(int)arg1 ;
-(void)setHasDataPathResult:(BOOL)arg1 ;
-(void)setTimeToFirstResponse:(long long)arg1 ;
-(void)setHasTimeToFirstResponse:(BOOL)arg1 ;
-(BOOL)hasTimeToFirstResponse;
-(void)setTimeToConnectionFailure:(long long)arg1 ;
-(void)setHasTimeToConnectionFailure:(BOOL)arg1 ;
-(BOOL)hasTimeToConnectionFailure;
-(int)connectionJoiningFailure;
-(unsigned long long)connectionServiceId;
-(int)connectionJoiningLbConnectionState;
-(int)connectionJoiningLbConnectionMigration;
-(long long)timeToFirstResponse;
-(long long)timeToConnectionFailure;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)bytesSent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

