/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _breadcrumb;
	unsigned _errorCode;
	unsigned _hardwareType;
	unsigned _type;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasBreadcrumb; 
@property (nonatomic,retain) NSData * breadcrumb;                       //@synthesize breadcrumb=_breadcrumb - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareType; 
@property (assign,nonatomic) unsigned hardwareType;                     //@synthesize hardwareType=_hardwareType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setHasType:(BOOL)arg1 ;
-(unsigned)hardwareType;
-(void)setHardwareType:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasHardwareType:(BOOL)arg1 ;
-(BOOL)hasBreadcrumb;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)errorCode;
-(void)setType:(unsigned)arg1 ;
-(BOOL)hasErrorCode;
-(id)description;
-(BOOL)hasHardwareType;
-(unsigned)type;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setBreadcrumb:(NSData *)arg1 ;
-(NSData *)breadcrumb;
@end

