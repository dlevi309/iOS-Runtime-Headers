/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPhoto, NSString;

@interface GEOPDPictureItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPhoto* _photo;
	NSString* _primaryText;
	NSString* _secondaryText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _photoItemType;
	struct {
		unsigned has_photoItemType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_photo : 1;
		unsigned read_primaryText : 1;
		unsigned read_secondaryText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (nonatomic,readonly) BOOL hasPrimaryText; 
@property (nonatomic,retain) NSString * primaryText; 
@property (nonatomic,readonly) BOOL hasSecondaryText; 
@property (nonatomic,retain) NSString * secondaryText; 
@property (assign,nonatomic) BOOL hasPhotoItemType; 
@property (assign,nonatomic) int photoItemType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(BOOL)hasPhoto;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPhoto *)photo;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPhotoItemType:(int)arg1 ;
-(int)photoItemType;
-(void)setHasPhotoItemType:(BOOL)arg1 ;
-(BOOL)hasPhotoItemType;
-(id)photoItemTypeAsString:(int)arg1 ;
-(int)StringAsPhotoItemType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(BOOL)hasPrimaryText;
-(BOOL)hasSecondaryText;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

