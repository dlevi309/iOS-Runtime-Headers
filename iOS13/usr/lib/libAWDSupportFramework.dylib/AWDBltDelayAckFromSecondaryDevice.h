/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDBltDelayAckFromSecondaryDevice : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _delayMs;
	unsigned _origSendConnectionType;
	NSString* _uniqueid;
	BOOL _timedout;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueid; 
@property (nonatomic,retain) NSString * uniqueid;                          //@synthesize uniqueid=_uniqueid - In the implementation block
@property (assign,nonatomic) BOOL hasDelayMs; 
@property (assign,nonatomic) unsigned delayMs;                             //@synthesize delayMs=_delayMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                      //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasOrigSendConnectionType; 
@property (assign,nonatomic) unsigned origSendConnectionType;              //@synthesize origSendConnectionType=_origSendConnectionType - In the implementation block
@property (assign,nonatomic) BOOL hasTimedout; 
@property (assign,nonatomic) BOOL timedout;                                //@synthesize timedout=_timedout - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)connectionType;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)timedout;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setDelayMs:(unsigned)arg1 ;
-(void)setUniqueid:(NSString *)arg1 ;
-(void)setOrigSendConnectionType:(unsigned)arg1 ;
-(void)setTimedout:(BOOL)arg1 ;
-(BOOL)hasUniqueid;
-(void)setHasDelayMs:(BOOL)arg1 ;
-(BOOL)hasDelayMs;
-(void)setHasOrigSendConnectionType:(BOOL)arg1 ;
-(BOOL)hasOrigSendConnectionType;
-(void)setHasTimedout:(BOOL)arg1 ;
-(BOOL)hasTimedout;
-(NSString *)uniqueid;
-(unsigned)delayMs;
-(unsigned)origSendConnectionType;
@end

