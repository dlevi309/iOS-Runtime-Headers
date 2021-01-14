/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPlaceActionDetails, NSString;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _possibleActions;
	SCD_Struct_GE90* _unactionableUiElements;
	GEOPlaceActionDetails* _placeActionDetails;
	NSString* _placecardCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placecardType;
	BOOL _transitAdvisoryBanner;
	struct {
		unsigned has_placecardType : 1;
		unsigned has_transitAdvisoryBanner : 1;
		unsigned read_possibleActions : 1;
		unsigned read_unactionableUiElements : 1;
		unsigned read_placeActionDetails : 1;
		unsigned read_placecardCategory : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails; 
@property (nonatomic,readonly) unsigned long long possibleActionsCount; 
@property (nonatomic,readonly) int* possibleActions; 
@property (nonatomic,readonly) unsigned long long unactionableUiElementsCount; 
@property (nonatomic,readonly) int* unactionableUiElements; 
@property (nonatomic,readonly) BOOL hasPlacecardCategory; 
@property (nonatomic,retain) NSString * placecardCategory; 
@property (assign,nonatomic) BOOL hasPlacecardType; 
@property (assign,nonatomic) int placecardType; 
@property (assign,nonatomic) BOOL hasTransitAdvisoryBanner; 
@property (assign,nonatomic) BOOL transitAdvisoryBanner; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)possibleActionsCount;
-(void)clearPossibleActions;
-(int)possibleActionAtIndex:(unsigned long long)arg1 ;
-(int)placecardType;
-(void)setHasPlacecardType:(BOOL)arg1 ;
-(BOOL)hasPlacecardType;
-(id)placecardTypeAsString:(int)arg1 ;
-(int)StringAsPlacecardType:(id)arg1 ;
-(int*)possibleActions;
-(void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)possibleActionsAsString:(int)arg1 ;
-(int)StringAsPossibleActions:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)placecardCategory;
-(unsigned long long)unactionableUiElementsCount;
-(int*)unactionableUiElements;
-(void)clearUnactionableUiElements;
-(int)unactionableUiElementAtIndex:(unsigned long long)arg1 ;
-(void)setUnactionableUiElements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)unactionableUiElementsAsString:(int)arg1 ;
-(int)StringAsUnactionableUiElements:(id)arg1 ;
-(BOOL)hasPlacecardCategory;
-(BOOL)transitAdvisoryBanner;
-(void)setHasTransitAdvisoryBanner:(BOOL)arg1 ;
-(BOOL)hasTransitAdvisoryBanner;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(BOOL)hasPlaceActionDetails;
-(unsigned long long)hash;
-(void)setPlacecardType:(int)arg1 ;
-(void)addPossibleAction:(int)arg1 ;
-(void)addUnactionableUiElement:(int)arg1 ;
-(void)setPlacecardCategory:(NSString *)arg1 ;
-(void)setTransitAdvisoryBanner:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

