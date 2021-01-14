/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCTSMConnectEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _httpStatus;
	NSData* _uuidReference;
	BOOL _connected;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnected; 
@property (assign,nonatomic) BOOL connected;                                         //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatus; 
@property (assign,nonatomic) unsigned httpStatus;                                    //@synthesize httpStatus=_httpStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
-(BOOL)connected;
-(id)dictionaryRepresentation;
-(void)setConnected:(BOOL)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHttpStatus:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasConnected;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)httpStatus;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasHttpStatus:(BOOL)arg1 ;
-(BOOL)hasHttpStatus;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
@end

