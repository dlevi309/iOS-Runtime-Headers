/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(SYVectorClock *)state;
-(double)timestamp;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setState:(SYVectorClock *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SYPeer *)sender;
-(void)setSender:(SYPeer *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimeout:(BOOL)arg1 ;
-(BOOL)hasTimeout;
@end

