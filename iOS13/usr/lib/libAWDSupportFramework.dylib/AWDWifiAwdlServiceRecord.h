/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWifiAwdlServiceRecord : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned _opcode;
	unsigned _serviceId;
	NSData* _serviceKey;
	unsigned _type;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasOpcode; 
@property (assign,nonatomic) unsigned opcode;                          //@synthesize opcode=_opcode - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasServiceId; 
@property (assign,nonatomic) unsigned serviceId;                       //@synthesize serviceId=_serviceId - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceKey; 
@property (nonatomic,retain) NSData * serviceKey;                      //@synthesize serviceKey=_serviceKey - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(unsigned)serviceId;
-(void)setServiceId:(unsigned)arg1 ;
-(NSData *)serviceKey;
-(void)setServiceKey:(NSData *)arg1 ;
-(void)setOpcode:(unsigned)arg1 ;
-(unsigned)opcode;
-(void)setHasOpcode:(BOOL)arg1 ;
-(BOOL)hasOpcode;
-(void)setHasServiceId:(BOOL)arg1 ;
-(BOOL)hasServiceId;
-(BOOL)hasServiceKey;
@end
