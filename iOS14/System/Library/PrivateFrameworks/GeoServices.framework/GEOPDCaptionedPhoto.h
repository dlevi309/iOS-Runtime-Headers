/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDJoeColor, GEOPDPhoto;

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _author;
	NSString* _caption;
	GEOPDJoeColor* _joeColor;
	NSString* _licenseDescription;
	NSString* _licenseUrl;
	GEOPDPhoto* _photo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _displayFullPhotoInline;
	BOOL _displayFullScreenPhotoGallery;
	BOOL _highQuality;
	BOOL _isBusinessOwned;
	BOOL _useGallery;
	struct {
		unsigned has_displayFullPhotoInline : 1;
		unsigned has_displayFullScreenPhotoGallery : 1;
		unsigned has_highQuality : 1;
		unsigned has_isBusinessOwned : 1;
		unsigned has_useGallery : 1;
		unsigned read_unknownFields : 1;
		unsigned read_author : 1;
		unsigned read_caption : 1;
		unsigned read_joeColor : 1;
		unsigned read_licenseDescription : 1;
		unsigned read_licenseUrl : 1;
		unsigned read_photo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCaption; 
@property (nonatomic,retain) NSString * caption; 
@property (nonatomic,readonly) BOOL hasAuthor; 
@property (nonatomic,retain) NSString * author; 
@property (nonatomic,readonly) BOOL hasLicenseDescription; 
@property (nonatomic,retain) NSString * licenseDescription; 
@property (nonatomic,readonly) BOOL hasLicenseUrl; 
@property (nonatomic,retain) NSString * licenseUrl; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (assign,nonatomic) BOOL hasDisplayFullPhotoInline; 
@property (assign,nonatomic) BOOL displayFullPhotoInline; 
@property (assign,nonatomic) BOOL hasUseGallery; 
@property (assign,nonatomic) BOOL useGallery; 
@property (assign,nonatomic) BOOL hasHighQuality; 
@property (assign,nonatomic) BOOL highQuality; 
@property (assign,nonatomic) BOOL hasIsBusinessOwned; 
@property (assign,nonatomic) BOOL isBusinessOwned; 
@property (assign,nonatomic) BOOL hasDisplayFullScreenPhotoGallery; 
@property (assign,nonatomic) BOOL displayFullScreenPhotoGallery; 
@property (nonatomic,readonly) BOOL hasJoeColor; 
@property (nonatomic,retain) GEOPDJoeColor * joeColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)captionedPhotosForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(BOOL)hasPhoto;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDisplayFullScreenPhotoGallery;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPhoto *)photo;
-(NSString *)caption;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasJoeColor;
-(void)setIsBusinessOwned:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasDisplayFullPhotoInline;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)licenseDescription;
-(BOOL)hasHighQuality;
-(BOOL)hasLicenseUrl;
-(NSString *)licenseUrl;
-(id)description;
-(BOOL)hasLicenseDescription;
-(void)setDisplayFullScreenPhotoGallery:(BOOL)arg1 ;
-(BOOL)displayFullPhotoInline;
-(void)setDisplayFullPhotoInline:(BOOL)arg1 ;
-(void)setLicenseDescription:(NSString *)arg1 ;
-(void)setHasIsBusinessOwned:(BOOL)arg1 ;
-(GEOPDJoeColor *)joeColor;
-(BOOL)useGallery;
-(BOOL)displayFullScreenPhotoGallery;
-(unsigned long long)hash;
-(BOOL)isBusinessOwned;
-(void)setLicenseUrl:(NSString *)arg1 ;
-(void)setHasDisplayFullScreenPhotoGallery:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIsBusinessOwned;
-(BOOL)hasUseGallery;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)highQuality;
-(BOOL)hasAuthor;
-(void)setHasUseGallery:(BOOL)arg1 ;
-(void)setJoeColor:(GEOPDJoeColor *)arg1 ;
-(void)setHasHighQuality:(BOOL)arg1 ;
-(void)setUseGallery:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHighQuality:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasCaption;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasDisplayFullPhotoInline:(BOOL)arg1 ;
@end

