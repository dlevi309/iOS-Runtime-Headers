/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW4 _has;

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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setResultCode:(unsigned)arg1 ;
-(unsigned)resultCode;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setTagType:(unsigned)arg1 ;
-(void)setHasTagType:(BOOL)arg1 ;
-(BOOL)hasTagType;
-(unsigned)tagType;
-(void)setPayloadSize:(unsigned)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setRawCommandCount:(unsigned)arg1 ;
-(void)setHasRawCommandCount:(BOOL)arg1 ;
-(BOOL)hasRawCommandCount;
-(unsigned)payloadSize;
-(unsigned)rawCommandCount;
@end

