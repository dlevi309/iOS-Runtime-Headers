/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PETSchemaPETRawMessage : PBCodable {

	unsigned _type_id;
	NSData* _raw_bytes;
	NSString* _name;
	SCD_Struct_SI1 _has;
	BOOL _hasRaw_bytes;
	BOOL _hasName;

}

@property (assign,nonatomic) unsigned type_id;                 //@synthesize type_id=_type_id - In the implementation block
@property (assign,nonatomic) BOOL hasType_id; 
@property (nonatomic,copy) NSData * raw_bytes;                 //@synthesize raw_bytes=_raw_bytes - In the implementation block
@property (assign,nonatomic) BOOL hasRaw_bytes;                //@synthesize hasRaw_bytes=_hasRaw_bytes - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasName;                     //@synthesize hasName=_hasName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(void)setHasName:(BOOL)arg1 ;
-(unsigned)type_id;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType_id:(unsigned)arg1 ;
-(void)setRaw_bytes:(NSData *)arg1 ;
-(NSData *)raw_bytes;
-(BOOL)hasType_id;
-(void)setHasType_id:(BOOL)arg1 ;
-(BOOL)hasRaw_bytes;
-(void)setHasRaw_bytes:(BOOL)arg1 ;
@end

