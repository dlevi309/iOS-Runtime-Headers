/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPETMessageFrameTypeIntrospectable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDPETQuotaReachedEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {

	unsigned long long _droppedEventsCount;
	unsigned long long _timestamp;
	unsigned _sequenceNumber;
	int _timezoneOffset;
	SCD_Struct_ED16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                            //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasTimezoneOffset; 
@property (assign,nonatomic) int timezoneOffset;                                 //@synthesize timezoneOffset=_timezoneOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDroppedEventsCount; 
@property (assign,nonatomic) unsigned long long droppedEventsCount;              //@synthesize droppedEventsCount=_droppedEventsCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(int)timezoneOffset;
-(void)setTimezoneOffset:(int)arg1 ;
-(int)messageFrameType;
-(void)setHasTimezoneOffset:(BOOL)arg1 ;
-(BOOL)hasTimezoneOffset;
-(void)setDroppedEventsCount:(unsigned long long)arg1 ;
-(void)setHasDroppedEventsCount:(BOOL)arg1 ;
-(BOOL)hasDroppedEventsCount;
-(unsigned long long)droppedEventsCount;
@end

