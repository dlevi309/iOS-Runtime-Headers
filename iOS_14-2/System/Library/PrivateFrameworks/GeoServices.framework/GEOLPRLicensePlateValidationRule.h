/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLPRLicensePlateValidationRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _impliedPowerTypeKeys;
	NSMutableArray* _impliedVehicleTypeKeys;
	NSString* _regularExpression;
	NSString* _validCharacters;
	NSMutableArray* _validationRanges;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxLength;
	unsigned _minLength;
	struct {
		unsigned has_maxLength : 1;
		unsigned has_minLength : 1;
		unsigned read_impliedPowerTypeKeys : 1;
		unsigned read_impliedVehicleTypeKeys : 1;
		unsigned read_regularExpression : 1;
		unsigned read_validCharacters : 1;
		unsigned read_validationRanges : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRegularExpression; 
@property (nonatomic,retain) NSString * regularExpression; 
@property (assign,nonatomic) BOOL hasMinLength; 
@property (assign,nonatomic) unsigned minLength; 
@property (assign,nonatomic) BOOL hasMaxLength; 
@property (assign,nonatomic) unsigned maxLength; 
@property (nonatomic,readonly) BOOL hasValidCharacters; 
@property (nonatomic,retain) NSString * validCharacters; 
@property (nonatomic,retain) NSMutableArray * validationRanges; 
@property (nonatomic,retain) NSMutableArray * impliedPowerTypeKeys; 
@property (nonatomic,retain) NSMutableArray * impliedVehicleTypeKeys; 
+(BOOL)isValid:(id)arg1 ;
+(Class)validationRangesType;
+(Class)impliedPowerTypeKeyType;
+(Class)impliedVehicleTypeKeyType;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setMinLength:(unsigned)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)maxLength;
-(NSString *)regularExpression;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)minLength;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)validCharacters;
-(NSMutableArray *)impliedPowerTypeKeys;
-(NSMutableArray *)impliedVehicleTypeKeys;
-(void)setRegularExpression:(NSString *)arg1 ;
-(void)setValidCharacters:(NSString *)arg1 ;
-(void)addValidationRanges:(id)arg1 ;
-(void)addImpliedPowerTypeKey:(id)arg1 ;
-(void)addImpliedVehicleTypeKey:(id)arg1 ;
-(unsigned long long)validationRangesCount;
-(void)clearValidationRanges;
-(id)validationRangesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)impliedPowerTypeKeysCount;
-(void)clearImpliedPowerTypeKeys;
-(id)impliedPowerTypeKeyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)impliedVehicleTypeKeysCount;
-(void)clearImpliedVehicleTypeKeys;
-(id)impliedVehicleTypeKeyAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRegularExpression;
-(void)setHasMinLength:(BOOL)arg1 ;
-(BOOL)hasMinLength;
-(void)setHasMaxLength:(BOOL)arg1 ;
-(BOOL)hasMaxLength;
-(BOOL)hasValidCharacters;
-(NSMutableArray *)validationRanges;
-(void)setValidationRanges:(NSMutableArray *)arg1 ;
-(void)setImpliedPowerTypeKeys:(NSMutableArray *)arg1 ;
-(void)setImpliedVehicleTypeKeys:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxLength:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

