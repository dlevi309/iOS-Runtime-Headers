/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCReaderSessionTagRead : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _payloadSize;
	unsigned _rawCommandCount;
	unsigned _resultCode;
	unsigned _tagType;
	unsigned _type;
	NSData* _uuidReference;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTagType; 
@property (assign,nonatomic) unsigned tagType;                                       //@synthesize tagType=_tagType - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned payloadSize;                                   //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) unsigned resultCode;                                    //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasRawCommandCount; 
@property (assign,nonatomic) unsigned rawCommandCount;                               //@synthesize rawCommandCount=_rawCommandCount - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(unsigned)resultCode;
-(unsigned long long)timestamp;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(void)setResultCode:(unsigned)arg1 ;
-(unsigned)payloadSize;
-(id)description;
-(void)setTagType:(unsigned)arg1 ;
-(unsigned)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)tagType;
-(unsigned long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(void)setHasTagType:(BOOL)arg1 ;
-(BOOL)hasTagType;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setRawCommandCount:(unsigned)arg1 ;
-(void)setHasRawCommandCount:(BOOL)arg1 ;
-(BOOL)hasRawCommandCount;
-(unsigned)rawCommandCount;
@end

