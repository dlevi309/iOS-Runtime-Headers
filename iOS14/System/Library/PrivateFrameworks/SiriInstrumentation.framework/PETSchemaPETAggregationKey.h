/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class PETSchemaPETRawMessage, NSData;

@interface PETSchemaPETAggregationKey : PBCodable {

	int _type;
	unsigned _datestamp;
	double _bucket;
	PETSchemaPETRawMessage* _raw_message;
	SCD_Struct_LT0 _has;
	BOOL _hasRaw_message;

}

@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned datestamp;                                //@synthesize datestamp=_datestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDatestamp; 
@property (assign,nonatomic) double bucket;                                     //@synthesize bucket=_bucket - In the implementation block
@property (assign,nonatomic) BOOL hasBucket; 
@property (nonatomic,retain) PETSchemaPETRawMessage * raw_message;              //@synthesize raw_message=_raw_message - In the implementation block
@property (assign,nonatomic) BOOL hasRaw_message;                               //@synthesize hasRaw_message=_hasRaw_message - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(unsigned)datestamp;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasBucket:(BOOL)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasType;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBucket:(double)arg1 ;
-(double)bucket;
-(BOOL)hasDatestamp;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasBucket;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDatestamp:(BOOL)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
-(void)setRaw_message:(PETSchemaPETRawMessage *)arg1 ;
-(PETSchemaPETRawMessage *)raw_message;
-(BOOL)hasRaw_message;
-(void)setHasRaw_message:(BOOL)arg1 ;
@end

