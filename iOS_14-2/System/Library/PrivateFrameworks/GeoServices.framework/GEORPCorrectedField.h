/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEORPCorrectedField : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _correctedValue;
	NSString* _fieldName;
	NSString* _originalValue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _field;
	BOOL _isMarkedIncorrect;
	struct {
		unsigned has_field : 1;
		unsigned has_isMarkedIncorrect : 1;
		unsigned read_correctedValue : 1;
		unsigned read_fieldName : 1;
		unsigned read_originalValue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasField; 
@property (assign,nonatomic) int field; 
@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) NSString * fieldName; 
@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue; 
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue; 
@property (assign,nonatomic) BOOL hasIsMarkedIncorrect; 
@property (assign,nonatomic) BOOL isMarkedIncorrect; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)field;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(void)setHasField:(BOOL)arg1 ;
-(id)fieldAsString:(int)arg1 ;
-(void)setIsMarkedIncorrect:(BOOL)arg1 ;
-(int)StringAsField:(id)arg1 ;
-(BOOL)isMarkedIncorrect;
-(void)setHasIsMarkedIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMarkedIncorrect;
-(id)jsonRepresentation;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasField;
-(id)description;
-(NSString *)fieldName;
-(unsigned long long)hash;
-(void)setField:(int)arg1 ;
-(BOOL)hasFieldName;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFieldName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

