/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _requestLocalTimestamp;
	GEOLatLng* _significantLocation;
	unsigned _maxNumCategoriesPerEntry;
	int _userPreferredTransportType;
	BOOL _shouldMatchNoQueryStateSuggestions;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned has_maxNumCategoriesPerEntry : 1;
		unsigned has_userPreferredTransportType : 1;
		unsigned has_shouldMatchNoQueryStateSuggestions : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,readonly) BOOL hasSignificantLocation; 
@property (nonatomic,retain) GEOLatLng * significantLocation; 
@property (assign,nonatomic) BOOL hasMaxNumCategoriesPerEntry; 
@property (assign,nonatomic) unsigned maxNumCategoriesPerEntry; 
@property (assign,nonatomic) BOOL hasUserPreferredTransportType; 
@property (assign,nonatomic) int userPreferredTransportType; 
@property (assign,nonatomic) BOOL hasShouldMatchNoQueryStateSuggestions; 
@property (assign,nonatomic) BOOL shouldMatchNoQueryStateSuggestions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(double)requestLocalTimestamp;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)significantLocation;
-(void)setSignificantLocation:(GEOLatLng *)arg1 ;
-(void)setMaxNumCategoriesPerEntry:(unsigned)arg1 ;
-(void)setUserPreferredTransportType:(int)arg1 ;
-(BOOL)hasSignificantLocation;
-(void)setShouldMatchNoQueryStateSuggestions:(BOOL)arg1 ;
-(unsigned)maxNumCategoriesPerEntry;
-(void)setHasMaxNumCategoriesPerEntry:(BOOL)arg1 ;
-(BOOL)hasMaxNumCategoriesPerEntry;
-(int)userPreferredTransportType;
-(void)setHasUserPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasUserPreferredTransportType;
-(id)userPreferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsUserPreferredTransportType:(id)arg1 ;
-(BOOL)shouldMatchNoQueryStateSuggestions;
-(void)setHasShouldMatchNoQueryStateSuggestions:(BOOL)arg1 ;
-(BOOL)hasShouldMatchNoQueryStateSuggestions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

