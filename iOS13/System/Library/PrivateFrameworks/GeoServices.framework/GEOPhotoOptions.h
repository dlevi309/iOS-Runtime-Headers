/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPhotoOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _photoSizes;
	int _maxPhotos;
	int _photoType;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) int maxPhotos; 
@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType; 
@property (nonatomic,readonly) unsigned long long photoSizesCount; 
@property (nonatomic,readonly) int* photoSizes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)photoType;
-(int*)photoSizes;
-(void)setPhotoType:(int)arg1 ;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(BOOL)hasPhotoType;
-(id)photoTypeAsString:(int)arg1 ;
-(int)StringAsPhotoType:(id)arg1 ;
-(unsigned long long)photoSizesCount;
-(void)clearPhotoSizes;
-(int)photoSizeAtIndex:(unsigned long long)arg1 ;
-(void)addPhotoSize:(int)arg1 ;
-(int)maxPhotos;
-(void)setMaxPhotos:(int)arg1 ;
-(void)setPhotoSizes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)photoSizesAsString:(int)arg1 ;
-(int)StringAsPhotoSizes:(id)arg1 ;
@end

