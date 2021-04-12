/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attributeKeys : 1;
		unsigned wrote_photoOptions : 1;
		unsigned wrote_maxBusinessResults : 1;
		unsigned wrote_includeBusinessHours : 1;
		unsigned wrote_includeCenter : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)photoOptionsType;
+(Class)attributeKeyType;
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
-(NSMutableArray *)attributeKeys;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readPhotoOptions;
-(void)_addNoFlagsPhotoOptions:(id)arg1 ;
-(void)_readAttributeKeys;
-(void)_addNoFlagsAttributeKey:(id)arg1 ;
-(unsigned long long)photoOptionsCount;
-(void)clearPhotoOptions;
-(id)photoOptionsAtIndex:(unsigned long long)arg1 ;
-(void)addPhotoOptions:(id)arg1 ;
-(unsigned long long)attributeKeysCount;
-(void)clearAttributeKeys;
-(id)attributeKeyAtIndex:(unsigned long long)arg1 ;
-(void)addAttributeKey:(id)arg1 ;
-(NSMutableArray *)photoOptions;
-(void)setPhotoOptions:(NSMutableArray *)arg1 ;
-(void)setAttributeKeys:(NSMutableArray *)arg1 ;
-(BOOL)includeBusinessHours;
-(void)setIncludeBusinessHours:(BOOL)arg1 ;
-(void)setHasIncludeBusinessHours:(BOOL)arg1 ;
-(BOOL)hasIncludeBusinessHours;
-(int)maxBusinessResults;
-(void)setMaxBusinessResults:(int)arg1 ;
-(void)setHasMaxBusinessResults:(BOOL)arg1 ;
-(BOOL)hasMaxBusinessResults;
-(BOOL)includeCenter;
-(void)setIncludeCenter:(BOOL)arg1 ;
-(void)setHasIncludeCenter:(BOOL)arg1 ;
-(BOOL)hasIncludeCenter;
@end

