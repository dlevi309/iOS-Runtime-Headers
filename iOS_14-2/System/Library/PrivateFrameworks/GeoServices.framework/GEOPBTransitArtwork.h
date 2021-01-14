/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPBTransitShield, GEOPBTransitIcon;

@interface GEOPBTransitArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _accessibilityString;
	GEOPBTransitShield* _iconFallbackShield;
	GEOPBTransitIcon* _icon;
	GEOPBTransitShield* _shield;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _artworkType;
	int _artworkUse;
	int _badge;
	struct {
		unsigned has_artworkType : 1;
		unsigned has_artworkUse : 1;
		unsigned has_badge : 1;
		unsigned read_unknownFields : 1;
		unsigned read_accessibilityString : 1;
		unsigned read_iconFallbackShield : 1;
		unsigned read_icon : 1;
		unsigned read_shield : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) int artworkSourceType; 
@property (nonatomic,readonly) int artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasArtworkType; 
@property (assign,nonatomic) int artworkType; 
@property (assign,nonatomic) BOOL hasArtworkUse; 
@property (assign,nonatomic) int artworkUse; 
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) GEOPBTransitShield * shield; 
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) GEOPBTransitIcon * icon; 
@property (nonatomic,readonly) BOOL hasIconFallbackShield; 
@property (nonatomic,retain) GEOPBTransitShield * iconFallbackShield; 
@property (assign,nonatomic) BOOL hasBadge; 
@property (assign,nonatomic) int badge; 
@property (nonatomic,readonly) BOOL hasAccessibilityString; 
@property (nonatomic,retain) NSString * accessibilityString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasIcon;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)artworkType;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOPBTransitShield *)shield;
-(void)setBadge:(int)arg1 ;
-(int)badge;
-(BOOL)hasBadge;
-(GEOPBTransitIcon *)icon;
-(void)mergeFrom:(id)arg1 ;
-(void)setIcon:(GEOPBTransitIcon *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)hasShield;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)artworkUse;
-(GEOPBTransitShield *)iconFallbackShield;
-(NSString *)accessibilityString;
-(void)setArtworkType:(int)arg1 ;
-(void)setArtworkUse:(int)arg1 ;
-(void)setIconFallbackShield:(GEOPBTransitShield *)arg1 ;
-(BOOL)hasArtworkType;
-(void)setAccessibilityString:(NSString *)arg1 ;
-(void)setHasArtworkType:(BOOL)arg1 ;
-(id)artworkTypeAsString:(int)arg1 ;
-(int)StringAsArtworkType:(id)arg1 ;
-(void)setHasArtworkUse:(BOOL)arg1 ;
-(BOOL)hasArtworkUse;
-(id)artworkUseAsString:(int)arg1 ;
-(int)StringAsArtworkUse:(id)arg1 ;
-(id)badgeAsString:(int)arg1 ;
-(BOOL)hasIconFallbackShield;
-(int)StringAsBadge:(id)arg1 ;
-(BOOL)hasAccessibilityString;
-(void)setHasBadge:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setShield:(GEOPBTransitShield *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

