/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)size;
-(id)dictionaryRepresentation;
-(NSString *)url;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)hasSize;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasUrl;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)sizeAsString:(int)arg1 ;
-(int)StringAsSize:(id)arg1 ;
-(id)initWithPlaceDataPhotoContent:(id)arg1 ;
@end

