/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, MSPTransitStorageIcon, MSPTransitStorageShield;

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _accessibilityText;
	int _artworkSourceType;
	int _artworkUseType;
	MSPTransitStorageIcon* _icon;
	MSPTransitStorageShield* _iconFallbackShield;
	MSPTransitStorageShield* _shield;
	BOOL _hasRoutingIncidentBadge;
	SCD_Struct_MS4 _has;

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
@property (assign,nonatomic) BOOL hasArtworkSourceType; 
@property (assign,nonatomic) int artworkSourceType;                                                      //@synthesize artworkSourceType=_artworkSourceType - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkUseType; 
@property (assign,nonatomic) int artworkUseType;                                                         //@synthesize artworkUseType=_artworkUseType - In the implementation block
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) MSPTransitStorageShield * shield;                                           //@synthesize shield=_shield - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) MSPTransitStorageIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL hasIconFallbackShield; 
@property (nonatomic,retain) MSPTransitStorageShield * iconFallbackShield;                               //@synthesize iconFallbackShield=_iconFallbackShield - In the implementation block
@property (assign,nonatomic) BOOL hasHasRoutingIncidentBadge; 
@property (assign,nonatomic) BOOL hasRoutingIncidentBadge;                                               //@synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessibilityText; 
@property (nonatomic,retain) NSString * accessibilityText;                                               //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasIcon;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(MSPTransitStorageShield *)shield;
-(MSPTransitStorageIcon *)icon;
-(void)mergeFrom:(id)arg1 ;
-(void)setIcon:(MSPTransitStorageIcon *)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)hasShield;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(MSPTransitStorageShield *)iconFallbackShield;
-(void)setIconFallbackShield:(MSPTransitStorageShield *)arg1 ;
-(BOOL)hasIconFallbackShield;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShield:(MSPTransitStorageShield *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setArtworkSourceType:(int)arg1 ;
-(void)setArtworkUseType:(int)arg1 ;
-(void)setHasRoutingIncidentBadge:(BOOL)arg1 ;
-(id)initWithArtwork:(id)arg1 ;
-(void)setHasArtworkSourceType:(BOOL)arg1 ;
-(BOOL)hasArtworkSourceType;
-(id)artworkSourceTypeAsString:(int)arg1 ;
-(int)StringAsArtworkSourceType:(id)arg1 ;
-(void)setHasArtworkUseType:(BOOL)arg1 ;
-(BOOL)hasArtworkUseType;
-(id)artworkUseTypeAsString:(int)arg1 ;
-(int)StringAsArtworkUseType:(id)arg1 ;
-(void)setHasHasRoutingIncidentBadge:(BOOL)arg1 ;
-(BOOL)hasHasRoutingIncidentBadge;
-(BOOL)hasAccessibilityText;
@end

