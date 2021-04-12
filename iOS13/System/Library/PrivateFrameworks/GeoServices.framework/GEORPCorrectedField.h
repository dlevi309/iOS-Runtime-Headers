/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_correctedValue : 1;
		unsigned wrote_fieldName : 1;
		unsigned wrote_originalValue : 1;
		unsigned wrote_field : 1;
		unsigned wrote_isMarkedIncorrect : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)field;
-(NSString *)fieldName;
-(void)setField:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readOriginalValue;
-(void)_readCorrectedValue;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(void)_readFieldName;
-(void)setFieldName:(NSString *)arg1 ;
-(void)setHasField:(BOOL)arg1 ;
-(BOOL)hasField;
-(id)fieldAsString:(int)arg1 ;
-(int)StringAsField:(id)arg1 ;
-(BOOL)hasFieldName;
-(BOOL)isMarkedIncorrect;
-(void)setIsMarkedIncorrect:(BOOL)arg1 ;
-(void)setHasIsMarkedIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMarkedIncorrect;
@end

