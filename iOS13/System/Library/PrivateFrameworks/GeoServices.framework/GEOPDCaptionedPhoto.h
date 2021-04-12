/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDPhoto;

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _author;
	NSString* _caption;
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
		unsigned read_licenseDescription : 1;
		unsigned read_licenseUrl : 1;
		unsigned read_photo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_author : 1;
		unsigned wrote_caption : 1;
		unsigned wrote_licenseDescription : 1;
		unsigned wrote_licenseUrl : 1;
		unsigned wrote_photo : 1;
		unsigned wrote_displayFullPhotoInline : 1;
		unsigned wrote_displayFullScreenPhotoGallery : 1;
		unsigned wrote_highQuality : 1;
		unsigned wrote_isBusinessOwned : 1;
		unsigned wrote_useGallery : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)captionedPhotosForPlaceData:(id)arg1 ;
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
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPhoto *)photo;
-(BOOL)hasPhoto;
-(void)_readPhoto;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(BOOL)hasLicenseUrl;
-(NSString *)licenseUrl;
-(BOOL)displayFullScreenPhotoGallery;
-(BOOL)displayFullPhotoInline;
-(BOOL)hasUseGallery;
-(BOOL)useGallery;
-(BOOL)hasHighQuality;
-(BOOL)highQuality;
-(BOOL)hasIsBusinessOwned;
-(BOOL)isBusinessOwned;
-(void)_readCaption;
-(void)_readAuthor;
-(void)_readLicenseDescription;
-(void)_readLicenseUrl;
-(void)setCaption:(NSString *)arg1 ;
-(void)setLicenseDescription:(NSString *)arg1 ;
-(void)setLicenseUrl:(NSString *)arg1 ;
-(BOOL)hasCaption;
-(BOOL)hasAuthor;
-(BOOL)hasLicenseDescription;
-(void)setDisplayFullPhotoInline:(BOOL)arg1 ;
-(void)setHasDisplayFullPhotoInline:(BOOL)arg1 ;
-(BOOL)hasDisplayFullPhotoInline;
-(void)setUseGallery:(BOOL)arg1 ;
-(void)setHasUseGallery:(BOOL)arg1 ;
-(void)setHighQuality:(BOOL)arg1 ;
-(void)setHasHighQuality:(BOOL)arg1 ;
-(void)setIsBusinessOwned:(BOOL)arg1 ;
-(void)setHasIsBusinessOwned:(BOOL)arg1 ;
-(void)setDisplayFullScreenPhotoGallery:(BOOL)arg1 ;
-(void)setHasDisplayFullScreenPhotoGallery:(BOOL)arg1 ;
-(BOOL)hasDisplayFullScreenPhotoGallery;
@end

