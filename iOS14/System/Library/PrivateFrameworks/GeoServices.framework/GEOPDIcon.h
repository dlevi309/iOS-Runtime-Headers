/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDPhoto;

@interface GEOPDIcon : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDPhoto* _image;
	int _iconType;
	struct {
		unsigned has_iconType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) GEOPDPhoto * image; 
@property (assign,nonatomic) BOOL hasIconType; 
@property (assign,nonatomic) int iconType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setImage:(GEOPDPhoto *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasImage;
-(void)mergeFrom:(id)arg1 ;
-(void)setIconType:(int)arg1 ;
-(void)setHasIconType:(BOOL)arg1 ;
-(BOOL)hasIconType;
-(id)iconTypeAsString:(int)arg1 ;
-(int)StringAsIconType:(id)arg1 ;
-(GEOPDPhoto *)image;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)iconType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

