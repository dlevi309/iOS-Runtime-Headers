/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _photoSizes;
	int _maxPhotos;
	int _photoType;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) int maxPhotos; 
@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType; 
@property (nonatomic,readonly) unsigned long long photoSizesCount; 
@property (nonatomic,readonly) int* photoSizes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setPhotoType:(int)arg1 ;
-(int)photoType;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(BOOL)hasPhotoType;
-(id)photoTypeAsString:(int)arg1 ;
-(int)StringAsPhotoType:(id)arg1 ;
-(void)setMaxPhotos:(int)arg1 ;
-(void)addPhotoSize:(int)arg1 ;
-(unsigned long long)photoSizesCount;
-(void)clearPhotoSizes;
-(int)photoSizeAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoSizes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)photoSizesAsString:(int)arg1 ;
-(int)StringAsPhotoSizes:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(int)maxPhotos;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int*)photoSizes;
@end

