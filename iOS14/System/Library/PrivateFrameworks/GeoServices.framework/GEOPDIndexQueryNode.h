/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _field;
	NSMutableArray* _operands;
	NSString* _value;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _type;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_field : 1;
		unsigned read_operands : 1;
		unsigned read_value : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) NSString * field; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSMutableArray * operands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)operandType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)field;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasValue;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)hasField;
-(NSMutableArray *)operands;
-(id)description;
-(void)addOperand:(id)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(id)operandAtIndex:(unsigned long long)arg1 ;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(void)setField:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

