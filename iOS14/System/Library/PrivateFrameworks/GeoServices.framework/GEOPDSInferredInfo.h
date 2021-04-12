/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDSInferredValue, NSMutableArray;

@interface GEOPDSInferredInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDSInferredValue* _inferredValue;
	NSMutableArray* _operands;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _inferredType;
	int _operator;
	struct {
		unsigned has_inferredType : 1;
		unsigned has_operator : 1;
		unsigned read_unknownFields : 1;
		unsigned read_inferredValue : 1;
		unsigned read_operands : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasInferredType; 
@property (assign,nonatomic) int inferredType; 
@property (nonatomic,readonly) BOOL hasInferredValue; 
@property (nonatomic,retain) GEOPDSInferredValue * inferredValue; 
@property (assign,nonatomic) BOOL hasOperator; 
@property (assign,nonatomic) int operator; 
@property (nonatomic,retain) NSMutableArray * operands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)operandType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setInferredValue:(GEOPDSInferredValue *)arg1 ;
-(int)inferredType;
-(void)setHasInferredType:(BOOL)arg1 ;
-(void)setInferredType:(int)arg1 ;
-(GEOPDSInferredValue *)inferredValue;
-(BOOL)hasInferredType;
-(id)inferredTypeAsString:(int)arg1 ;
-(BOOL)hasOperator;
-(int)StringAsInferredType:(id)arg1 ;
-(BOOL)hasInferredValue;
-(void)setHasOperator:(BOOL)arg1 ;
-(id)operatorAsString:(int)arg1 ;
-(int)StringAsOperator:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)operator;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)operands;
-(id)description;
-(void)setOperator:(int)arg1 ;
-(void)addOperand:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(id)operandAtIndex:(unsigned long long)arg1 ;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

