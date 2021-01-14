/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDStorefrontView, NSString;

@interface GEOPDStorefrontPresentation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDStorefrontView* _closeUpView;
	NSString* _overlayImageUrl;
	GEOPDStorefrontView* _standOffView;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_closeUpView : 1;
		unsigned read_overlayImageUrl : 1;
		unsigned read_standOffView : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCloseUpView; 
@property (nonatomic,retain) GEOPDStorefrontView * closeUpView; 
@property (nonatomic,readonly) BOOL hasStandOffView; 
@property (nonatomic,retain) GEOPDStorefrontView * standOffView; 
@property (nonatomic,readonly) BOOL hasOverlayImageUrl; 
@property (nonatomic,retain) NSString * overlayImageUrl; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSString *)overlayImageUrl;
-(id)jsonRepresentation;
-(BOOL)hasStandOffView;
-(void)mergeFrom:(id)arg1 ;
-(void)setStandOffView:(GEOPDStorefrontView *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasOverlayImageUrl;
-(unsigned long long)hash;
-(void)setCloseUpView:(GEOPDStorefrontView *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOPDStorefrontView *)standOffView;
-(GEOPDStorefrontView *)closeUpView;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOverlayImageUrl:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCloseUpView;
@end

