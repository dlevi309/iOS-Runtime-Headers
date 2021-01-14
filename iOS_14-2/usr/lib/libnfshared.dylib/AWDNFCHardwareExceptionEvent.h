/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDNFCHardwareExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _exceptionData;
	unsigned _hardwareType;
	unsigned _type;
	NSData* _uuidReference;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasExceptionData; 
@property (nonatomic,retain) NSString * exceptionData;                  //@synthesize exceptionData=_exceptionData - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                     //@synthesize hardwareType=_hardwareType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(id)description;
-(BOOL)hasHardwareType;
-(unsigned)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setExceptionData:(NSString *)arg1 ;
-(BOOL)hasExceptionData;
-(NSString *)exceptionData;
@end

