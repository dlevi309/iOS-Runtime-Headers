/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOPDChildPlaceLookupByCategoryParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _categoryMetadata;
	unsigned long long _parentMuid;
	struct {
		unsigned has_parentMuid : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategoryMetadata; 
@property (nonatomic,retain) NSData * categoryMetadata; 
@property (assign,nonatomic) BOOL hasParentMuid; 
@property (assign,nonatomic) unsigned long long parentMuid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)parentMuid;
-(void)setParentMuid:(unsigned long long)arg1 ;
-(BOOL)hasParentMuid;
-(NSData *)categoryMetadata;
-(void)setCategoryMetadata:(NSData *)arg1 ;
-(BOOL)hasCategoryMetadata;
-(void)setHasParentMuid:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

