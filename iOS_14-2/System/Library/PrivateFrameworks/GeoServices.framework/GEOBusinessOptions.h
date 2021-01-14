/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOBusinessOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributeKeys;
	NSMutableArray* _photoOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxBusinessResults;
	BOOL _includeBusinessHours;
	BOOL _includeCenter;
	struct {
		unsigned has_maxBusinessResults : 1;
		unsigned has_includeBusinessHours : 1;
		unsigned has_includeCenter : 1;
		unsigned read_unknownFields : 1;
		unsigned read_attributeKeys : 1;
		unsigned read_photoOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * photoOptions; 
@property (nonatomic,retain) NSMutableArray * attributeKeys; 
@property (assign,nonatomic) BOOL hasIncludeBusinessHours; 
@property (assign,nonatomic) BOOL includeBusinessHours; 
@property (assign,nonatomic) BOOL hasMaxBusinessResults; 
@property (assign,nonatomic) int maxBusinessResults; 
@property (assign,nonatomic) BOOL hasIncludeCenter; 
@property (assign,nonatomic) BOOL includeCenter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)photoOptionsType;
+(Class)attributeKeyType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)attributeKeys;
-(void)addPhotoOptions:(id)arg1 ;
-(void)addAttributeKey:(id)arg1 ;
-(void)setIncludeBusinessHours:(BOOL)arg1 ;
-(void)setMaxBusinessResults:(int)arg1 ;
-(void)setIncludeCenter:(BOOL)arg1 ;
-(unsigned long long)photoOptionsCount;
-(void)clearPhotoOptions;
-(NSMutableArray *)photoOptions;
-(id)photoOptionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributeKeysCount;
-(void)clearAttributeKeys;
-(id)attributeKeyAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoOptions:(NSMutableArray *)arg1 ;
-(void)setAttributeKeys:(NSMutableArray *)arg1 ;
-(BOOL)includeBusinessHours;
-(id)initWithData:(id)arg1 ;
-(void)setHasIncludeBusinessHours:(BOOL)arg1 ;
-(BOOL)hasIncludeBusinessHours;
-(int)maxBusinessResults;
-(BOOL)includeCenter;
-(void)setHasMaxBusinessResults:(BOOL)arg1 ;
-(BOOL)hasMaxBusinessResults;
-(void)setHasIncludeCenter:(BOOL)arg1 ;
-(BOOL)hasIncludeCenter;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

