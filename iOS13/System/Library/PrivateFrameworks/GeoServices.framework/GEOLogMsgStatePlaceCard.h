/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPlaceActionDetails, NSString;

@interface GEOLogMsgStatePlaceCard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _possibleActions;
	SCD_Struct_GE1* _unactionableUiElements;
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
		unsigned wrote_possibleActions : 1;
		unsigned wrote_unactionableUiElements : 1;
		unsigned wrote_placeActionDetails : 1;
		unsigned wrote_placecardCategory : 1;
		unsigned wrote_placecardType : 1;
		unsigned wrote_transitAdvisoryBanner : 1;
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
-(id)init;
-(void)dealloc;
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
-(void)_readPlaceActionDetails;
-(GEOPlaceActionDetails *)placeActionDetails;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(BOOL)hasPlaceActionDetails;
-(void)addPossibleAction:(int)arg1 ;
-(void)addUnactionableUiElement:(int)arg1 ;
-(void)setPlacecardType:(int)arg1 ;
-(void)setPlacecardCategory:(NSString *)arg1 ;
-(void)setTransitAdvisoryBanner:(BOOL)arg1 ;
-(void)_readPossibleActions;
-(void)_addNoFlagsPossibleAction:(int)arg1 ;
-(void)_readUnactionableUiElements;
-(void)_addNoFlagsUnactionableUiElement:(int)arg1 ;
-(void)_readPlacecardCategory;
-(NSString *)placecardCategory;
-(unsigned long long)possibleActionsCount;
-(void)clearPossibleActions;
-(int)possibleActionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)unactionableUiElementsCount;
-(void)clearUnactionableUiElements;
-(int)unactionableUiElementAtIndex:(unsigned long long)arg1 ;
-(int*)possibleActions;
-(void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)possibleActionsAsString:(int)arg1 ;
-(int)StringAsPossibleActions:(id)arg1 ;
-(int*)unactionableUiElements;
-(void)setUnactionableUiElements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)unactionableUiElementsAsString:(int)arg1 ;
-(int)StringAsUnactionableUiElements:(id)arg1 ;
-(BOOL)hasPlacecardCategory;
-(int)placecardType;
-(void)setHasPlacecardType:(BOOL)arg1 ;
-(BOOL)hasPlacecardType;
-(id)placecardTypeAsString:(int)arg1 ;
-(int)StringAsPlacecardType:(id)arg1 ;
-(BOOL)transitAdvisoryBanner;
-(void)setHasTransitAdvisoryBanner:(BOOL)arg1 ;
-(BOOL)hasTransitAdvisoryBanner;
@end

