/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, NSString, GEOStyleAttributes;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitTimeRange* _operatingHours;
	unsigned long long _operatingHoursCount;
	unsigned long long _operatingHoursSpace;
	GEOPBTransitArtwork* _alternateArtwork;
	GEOPBTransitArtwork* _artwork;
	GEOPBTransitLineDisplayHints* _displayHints;
	NSString* _lineColor;
	GEOPBTransitArtwork* _modeArtwork;
	unsigned long long _muid;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _guidanceSnappingType;
	unsigned _lineIndex;
	int _placeDisplayStyle;
	int _preferredDepartureTimeStyle;
	unsigned _systemIndex;
	int _transitType;
	struct {
		unsigned has_muid : 1;
		unsigned has_guidanceSnappingType : 1;
		unsigned has_lineIndex : 1;
		unsigned has_placeDisplayStyle : 1;
		unsigned has_preferredDepartureTimeStyle : 1;
		unsigned has_systemIndex : 1;
		unsigned has_transitType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_operatingHours : 1;
		unsigned read_alternateArtwork : 1;
		unsigned read_artwork : 1;
		unsigned read_displayHints : 1;
		unsigned read_lineColor : 1;
		unsigned read_modeArtwork : 1;
		unsigned read_nameDisplayString : 1;
		unsigned read_styleAttributes : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_operatingHours : 1;
		unsigned wrote_alternateArtwork : 1;
		unsigned wrote_artwork : 1;
		unsigned wrote_displayHints : 1;
		unsigned wrote_lineColor : 1;
		unsigned wrote_modeArtwork : 1;
		unsigned wrote_muid : 1;
		unsigned wrote_nameDisplayString : 1;
		unsigned wrote_styleAttributes : 1;
		unsigned wrote_guidanceSnappingType : 1;
		unsigned wrote_lineIndex : 1;
		unsigned wrote_placeDisplayStyle : 1;
		unsigned wrote_preferredDepartureTimeStyle : 1;
		unsigned wrote_systemIndex : 1;
		unsigned wrote_transitType : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasLineIndex; 
@property (assign,nonatomic) unsigned lineIndex; 
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) BOOL hasModeArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * modeArtwork; 
@property (nonatomic,readonly) BOOL hasAlternateArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * alternateArtwork; 
@property (assign,nonatomic) BOOL hasGuidanceSnappingType; 
@property (assign,nonatomic) int guidanceSnappingType; 
@property (nonatomic,readonly) BOOL hasLineColor; 
@property (nonatomic,retain) NSString * lineColor; 
@property (assign,nonatomic) BOOL hasSystemIndex; 
@property (assign,nonatomic) unsigned systemIndex; 
@property (assign,nonatomic) BOOL hasTransitType; 
@property (assign,nonatomic) int transitType; 
@property (assign,nonatomic) BOOL hasPreferredDepartureTimeStyle; 
@property (assign,nonatomic) int preferredDepartureTimeStyle; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) unsigned long long operatingHoursCount; 
@property (nonatomic,readonly) GEOPBTransitTimeRange* operatingHours; 
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEOPBTransitLineDisplayHints * displayHints; 
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString; 
@property (assign,nonatomic) BOOL hasPlaceDisplayStyle; 
@property (assign,nonatomic) int placeDisplayStyle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setLineColor:(NSString *)arg1 ;
-(NSString *)lineColor;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(unsigned)lineIndex;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readStyleAttributes;
-(void)_readArtwork;
-(GEOPBTransitArtwork *)artwork;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(BOOL)hasStyleAttributes;
-(BOOL)hasArtwork;
-(void)_readDisplayHints;
-(GEOPBTransitLineDisplayHints *)displayHints;
-(void)setDisplayHints:(GEOPBTransitLineDisplayHints *)arg1 ;
-(BOOL)hasDisplayHints;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)clearOperatingHours;
-(void)_readOperatingHours;
-(void)_addNoFlagsOperatingHours:(GEOPBTransitTimeRange)arg1 ;
-(unsigned long long)operatingHoursCount;
-(GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(void)addOperatingHours:(GEOPBTransitTimeRange)arg1 ;
-(GEOPBTransitTimeRange*)operatingHours;
-(void)setOperatingHours:(GEOPBTransitTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(void)_readModeArtwork;
-(void)_readAlternateArtwork;
-(void)_readLineColor;
-(void)_readNameDisplayString;
-(GEOPBTransitArtwork *)modeArtwork;
-(GEOPBTransitArtwork *)alternateArtwork;
-(NSString *)nameDisplayString;
-(void)setModeArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setAlternateArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setLineIndex:(unsigned)arg1 ;
-(void)setHasLineIndex:(BOOL)arg1 ;
-(BOOL)hasLineIndex;
-(BOOL)hasModeArtwork;
-(BOOL)hasAlternateArtwork;
-(int)guidanceSnappingType;
-(void)setGuidanceSnappingType:(int)arg1 ;
-(void)setHasGuidanceSnappingType:(BOOL)arg1 ;
-(BOOL)hasGuidanceSnappingType;
-(id)guidanceSnappingTypeAsString:(int)arg1 ;
-(int)StringAsGuidanceSnappingType:(id)arg1 ;
-(BOOL)hasLineColor;
-(unsigned)systemIndex;
-(void)setSystemIndex:(unsigned)arg1 ;
-(void)setHasSystemIndex:(BOOL)arg1 ;
-(BOOL)hasSystemIndex;
-(int)transitType;
-(void)setTransitType:(int)arg1 ;
-(void)setHasTransitType:(BOOL)arg1 ;
-(BOOL)hasTransitType;
-(int)preferredDepartureTimeStyle;
-(void)setPreferredDepartureTimeStyle:(int)arg1 ;
-(void)setHasPreferredDepartureTimeStyle:(BOOL)arg1 ;
-(BOOL)hasPreferredDepartureTimeStyle;
-(id)preferredDepartureTimeStyleAsString:(int)arg1 ;
-(int)StringAsPreferredDepartureTimeStyle:(id)arg1 ;
-(BOOL)hasNameDisplayString;
-(int)placeDisplayStyle;
-(void)setPlaceDisplayStyle:(int)arg1 ;
-(void)setHasPlaceDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasPlaceDisplayStyle;
-(id)placeDisplayStyleAsString:(int)arg1 ;
-(int)StringAsPlaceDisplayStyle:(id)arg1 ;
-(id)bestName;
-(id)geoTransitLineWithSystem:(id)arg1 locationHint:(SCD_Struct_GE32)arg2 ;
-(id)identifierWithLocationHint:(SCD_Struct_GE32)arg1 ;
@end

