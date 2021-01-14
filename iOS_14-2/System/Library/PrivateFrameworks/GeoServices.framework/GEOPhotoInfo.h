/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _url;
	int _size;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)size;
-(id)sizeAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(BOOL)hasSize;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasUrl;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)StringAsSize:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithPlaceDataPhotoContent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
@end

