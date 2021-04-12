/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOIndexQueryNode : PBCodable <NSCopying> {

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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_field : 1;
		unsigned wrote_operands : 1;
		unsigned wrote_value : 1;
		unsigned wrote_type : 1;
	}  _flags;

}

@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) NSString * field; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSMutableArray * operands; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)operandsType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)_readValue;
-(NSString *)field;
-(void)setField:(NSString *)arg1 ;
-(BOOL)hasValue;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasField;
-(void)_readField;
-(void)_readOperands;
-(void)_addNoFlagsOperands:(id)arg1 ;
-(unsigned long long)operandsCount;
-(void)clearOperands;
-(id)operandsAtIndex:(unsigned long long)arg1 ;
-(void)addOperands:(id)arg1 ;
-(NSMutableArray *)operands;
-(void)setOperands:(NSMutableArray *)arg1 ;
@end

