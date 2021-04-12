/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSMutableArray;

@interface GEOTrafficBannerText : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _bannerLargeText;
	GEOFormattedString* _bannerSmallText;
	NSMutableArray* _localizedIncidentBanners;
	NSMutableArray* _localizedIncidentSpokenTexts;
	NSMutableArray* _localizedIncidentSubBanners;
	GEOFormattedString* _spokenPrompt;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _bannerStyle;
	unsigned _hideAtDistance;
	unsigned _incidentDistance;
	unsigned _incidentIndex;
	int _previousBannerChange;
	unsigned _secondsSaved;
	unsigned _showAtDistance;
	BOOL _disableFasterRerouteByDefault;
	struct {
		unsigned has_bannerStyle : 1;
		unsigned has_hideAtDistance : 1;
		unsigned has_incidentDistance : 1;
		unsigned has_incidentIndex : 1;
		unsigned has_previousBannerChange : 1;
		unsigned has_secondsSaved : 1;
		unsigned has_showAtDistance : 1;
		unsigned has_disableFasterRerouteByDefault : 1;
		unsigned read_unknownFields : 1;
		unsigned read_bannerLargeText : 1;
		unsigned read_bannerSmallText : 1;
		unsigned read_localizedIncidentBanners : 1;
		unsigned read_localizedIncidentSpokenTexts : 1;
		unsigned read_localizedIncidentSubBanners : 1;
		unsigned read_spokenPrompt : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_bannerLargeText : 1;
		unsigned wrote_bannerSmallText : 1;
		unsigned wrote_localizedIncidentBanners : 1;
		unsigned wrote_localizedIncidentSpokenTexts : 1;
		unsigned wrote_localizedIncidentSubBanners : 1;
		unsigned wrote_spokenPrompt : 1;
		unsigned wrote_bannerStyle : 1;
		unsigned wrote_hideAtDistance : 1;
		unsigned wrote_incidentDistance : 1;
		unsigned wrote_incidentIndex : 1;
		unsigned wrote_previousBannerChange : 1;
		unsigned wrote_secondsSaved : 1;
		unsigned wrote_showAtDistance : 1;
		unsigned wrote_disableFasterRerouteByDefault : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * localizedIncidentBanners; 
@property (nonatomic,retain) NSMutableArray * localizedIncidentSubBanners; 
@property (nonatomic,retain) NSMutableArray * localizedIncidentSpokenTexts; 
@property (nonatomic,readonly) BOOL hasBannerLargeText; 
@property (nonatomic,retain) GEOFormattedString * bannerLargeText; 
@property (nonatomic,readonly) BOOL hasBannerSmallText; 
@property (nonatomic,retain) GEOFormattedString * bannerSmallText; 
@property (nonatomic,readonly) BOOL hasSpokenPrompt; 
@property (nonatomic,retain) GEOFormattedString * spokenPrompt; 
@property (assign,nonatomic) BOOL hasShowAtDistance; 
@property (assign,nonatomic) unsigned showAtDistance; 
@property (assign,nonatomic) BOOL hasHideAtDistance; 
@property (assign,nonatomic) unsigned hideAtDistance; 
@property (assign,nonatomic) BOOL hasIncidentDistance; 
@property (assign,nonatomic) unsigned incidentDistance; 
@property (assign,nonatomic) BOOL hasIncidentIndex; 
@property (assign,nonatomic) unsigned incidentIndex; 
@property (assign,nonatomic) BOOL hasPreviousBannerChange; 
@property (assign,nonatomic) int previousBannerChange; 
@property (assign,nonatomic) BOOL hasDisableFasterRerouteByDefault; 
@property (assign,nonatomic) BOOL disableFasterRerouteByDefault; 
@property (assign,nonatomic) BOOL hasBannerStyle; 
@property (assign,nonatomic) int bannerStyle; 
@property (assign,nonatomic) BOOL hasSecondsSaved; 
@property (assign,nonatomic) unsigned secondsSaved; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedIncidentBannerType;
+(Class)localizedIncidentSubBannerType;
+(Class)localizedIncidentSpokenTextType;
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readLocalizedIncidentBanners;
-(void)_addNoFlagsLocalizedIncidentBanner:(id)arg1 ;
-(void)_readLocalizedIncidentSubBanners;
-(void)_addNoFlagsLocalizedIncidentSubBanner:(id)arg1 ;
-(void)_readLocalizedIncidentSpokenTexts;
-(void)_addNoFlagsLocalizedIncidentSpokenText:(id)arg1 ;
-(void)_readBannerLargeText;
-(void)_readBannerSmallText;
-(void)_readSpokenPrompt;
-(NSMutableArray *)localizedIncidentBanners;
-(NSMutableArray *)localizedIncidentSubBanners;
-(NSMutableArray *)localizedIncidentSpokenTexts;
-(GEOFormattedString *)bannerLargeText;
-(GEOFormattedString *)bannerSmallText;
-(GEOFormattedString *)spokenPrompt;
-(unsigned long long)localizedIncidentBannersCount;
-(void)clearLocalizedIncidentBanners;
-(id)localizedIncidentBannerAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedIncidentBanner:(id)arg1 ;
-(unsigned long long)localizedIncidentSubBannersCount;
-(void)clearLocalizedIncidentSubBanners;
-(id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedIncidentSubBanner:(id)arg1 ;
-(unsigned long long)localizedIncidentSpokenTextsCount;
-(void)clearLocalizedIncidentSpokenTexts;
-(id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedIncidentSpokenText:(id)arg1 ;
-(void)setBannerLargeText:(GEOFormattedString *)arg1 ;
-(void)setBannerSmallText:(GEOFormattedString *)arg1 ;
-(void)setSpokenPrompt:(GEOFormattedString *)arg1 ;
-(void)setLocalizedIncidentBanners:(NSMutableArray *)arg1 ;
-(void)setLocalizedIncidentSubBanners:(NSMutableArray *)arg1 ;
-(void)setLocalizedIncidentSpokenTexts:(NSMutableArray *)arg1 ;
-(BOOL)hasBannerLargeText;
-(BOOL)hasBannerSmallText;
-(BOOL)hasSpokenPrompt;
-(unsigned)showAtDistance;
-(void)setShowAtDistance:(unsigned)arg1 ;
-(void)setHasShowAtDistance:(BOOL)arg1 ;
-(BOOL)hasShowAtDistance;
-(unsigned)hideAtDistance;
-(void)setHideAtDistance:(unsigned)arg1 ;
-(void)setHasHideAtDistance:(BOOL)arg1 ;
-(BOOL)hasHideAtDistance;
-(unsigned)incidentDistance;
-(void)setIncidentDistance:(unsigned)arg1 ;
-(void)setHasIncidentDistance:(BOOL)arg1 ;
-(BOOL)hasIncidentDistance;
-(unsigned)incidentIndex;
-(void)setIncidentIndex:(unsigned)arg1 ;
-(void)setHasIncidentIndex:(BOOL)arg1 ;
-(BOOL)hasIncidentIndex;
-(int)previousBannerChange;
-(void)setPreviousBannerChange:(int)arg1 ;
-(void)setHasPreviousBannerChange:(BOOL)arg1 ;
-(BOOL)hasPreviousBannerChange;
-(id)previousBannerChangeAsString:(int)arg1 ;
-(int)StringAsPreviousBannerChange:(id)arg1 ;
-(BOOL)disableFasterRerouteByDefault;
-(void)setDisableFasterRerouteByDefault:(BOOL)arg1 ;
-(void)setHasDisableFasterRerouteByDefault:(BOOL)arg1 ;
-(BOOL)hasDisableFasterRerouteByDefault;
-(int)bannerStyle;
-(void)setBannerStyle:(int)arg1 ;
-(void)setHasBannerStyle:(BOOL)arg1 ;
-(BOOL)hasBannerStyle;
-(id)bannerStyleAsString:(int)arg1 ;
-(int)StringAsBannerStyle:(id)arg1 ;
-(unsigned)secondsSaved;
-(void)setSecondsSaved:(unsigned)arg1 ;
-(void)setHasSecondsSaved:(BOOL)arg1 ;
-(BOOL)hasSecondsSaved;
@end

