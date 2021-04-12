/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYPeer, SYVectorClock;

@interface SYMessageHeader : PBCodable <NSCopying> {

	unsigned long long _sequenceNumber;
	double _timeout;
	double _timestamp;
	SYPeer* _sender;
	SYVectorClock* _state;
	unsigned _version;
	SCD_Struct_SY5 _has;

}

@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) SYPeer * sender;                                //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) SYVectorClock * state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTimeout; 
@property (assign,nonatomic) double timeout;                                 //@synthesize timeout=_timeout - In the implementation block
-(id)dictionaryRepresentation;
-(SYPeer *)sender;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)setSender:(SYPeer *)arg1 ;
-(double)timestamp;
-(void)setTimeout:(double)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)mergeFrom:(id)arg1 ;
-(double)timeout;
-(id)description;
-(void)setState:(SYVectorClock *)arg1 ;
-(unsigned long long)hash;
-(SYVectorClock *)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTimeout:(BOOL)arg1 ;
-(BOOL)hasTimeout;
@end

