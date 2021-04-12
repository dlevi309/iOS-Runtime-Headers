/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_closeUpView : 1;
		unsigned wrote_overlayImageUrl : 1;
		unsigned wrote_standOffView : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCloseUpView; 
@property (nonatomic,retain) GEOPDStorefrontView * closeUpView; 
@property (nonatomic,readonly) BOOL hasStandOffView; 
@property (nonatomic,retain) GEOPDStorefrontView * standOffView; 
@property (nonatomic,readonly) BOOL hasOverlayImageUrl; 
@property (nonatomic,retain) NSString * overlayImageUrl; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasCloseUpView;
-(GEOPDStorefrontView *)closeUpView;
-(BOOL)hasStandOffView;
-(GEOPDStorefrontView *)standOffView;
-(BOOL)hasOverlayImageUrl;
-(NSString *)overlayImageUrl;
-(void)_readCloseUpView;
-(void)_readStandOffView;
-(void)_readOverlayImageUrl;
-(void)setCloseUpView:(GEOPDStorefrontView *)arg1 ;
-(void)setStandOffView:(GEOPDStorefrontView *)arg1 ;
-(void)setOverlayImageUrl:(NSString *)arg1 ;
@end

