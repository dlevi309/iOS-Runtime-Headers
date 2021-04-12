/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAutocompleteParametersAddressOnly, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteFilter, GEOPDAutocompleteSessionData, GEOPDAutocompleteParametersBrandProfileSearch, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks, GEOPDAutocompleteParametersOfflineRegionSearch, GEOPDAutocompleteParametersPoiAddressOnly, GEOPDAutocompleteParametersSiriSearch, GEOPDAutocompleteParametersVenueSearch;

@interface GEOPDAutocompleteParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteParametersAddressOnly* _addressOnly;
	GEOPDAutocompleteParametersAllEntriesWithBrowse* _allEntriesWithBrowse;
	GEOPDAutocompleteParametersAllEntries* _allEntries;
	GEOPDAutocompleteFilter* _autocompleteFilter;
	GEOPDAutocompleteSessionData* _autocompleteSessionData;
	GEOPDAutocompleteParametersBrandProfileSearch* _brandProfileSearch;
	GEOPDAutocompleteParametersFullEntriesOnly* _fullEntries;
	GEOPDAutocompleteParametersLocalitiesAndLandmarks* _localitiesAndLandmarks;
	GEOPDAutocompleteParametersOfflineRegionSearch* _offlineRegionSearch;
	GEOPDAutocompleteParametersPoiAddressOnly* _poiAddressOnly;
	GEOPDAutocompleteParametersSiriSearch* _siriSearch;
	GEOPDAutocompleteParametersVenueSearch* _venueSearch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestType;
	BOOL _shouldPopulateMapsIdentifier;
	BOOL _supportAutocompleteSessionData;
	struct {
		unsigned has_requestType : 1;
		unsigned has_shouldPopulateMapsIdentifier : 1;
		unsigned has_supportAutocompleteSessionData : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressOnly : 1;
		unsigned read_allEntriesWithBrowse : 1;
		unsigned read_allEntries : 1;
		unsigned read_autocompleteFilter : 1;
		unsigned read_autocompleteSessionData : 1;
		unsigned read_brandProfileSearch : 1;
		unsigned read_fullEntries : 1;
		unsigned read_localitiesAndLandmarks : 1;
		unsigned read_offlineRegionSearch : 1;
		unsigned read_poiAddressOnly : 1;
		unsigned read_siriSearch : 1;
		unsigned read_venueSearch : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressOnly : 1;
		unsigned wrote_allEntriesWithBrowse : 1;
		unsigned wrote_allEntries : 1;
		unsigned wrote_autocompleteFilter : 1;
		unsigned wrote_autocompleteSessionData : 1;
		unsigned wrote_brandProfileSearch : 1;
		unsigned wrote_fullEntries : 1;
		unsigned wrote_localitiesAndLandmarks : 1;
		unsigned wrote_offlineRegionSearch : 1;
		unsigned wrote_poiAddressOnly : 1;
		unsigned wrote_siriSearch : 1;
		unsigned wrote_venueSearch : 1;
		unsigned wrote_requestType : 1;
		unsigned wrote_shouldPopulateMapsIdentifier : 1;
		unsigned wrote_supportAutocompleteSessionData : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasFullEntries; 
@property (nonatomic,retain) GEOPDAutocompleteParametersFullEntriesOnly * fullEntries; 
@property (nonatomic,readonly) BOOL hasAllEntries; 
@property (nonatomic,retain) GEOPDAutocompleteParametersAllEntries * allEntries; 
@property (nonatomic,readonly) BOOL hasLocalitiesAndLandmarks; 
@property (nonatomic,retain) GEOPDAutocompleteParametersLocalitiesAndLandmarks * localitiesAndLandmarks; 
@property (nonatomic,readonly) BOOL hasAllEntriesWithBrowse; 
@property (nonatomic,retain) GEOPDAutocompleteParametersAllEntriesWithBrowse * allEntriesWithBrowse; 
@property (nonatomic,readonly) BOOL hasSiriSearch; 
@property (nonatomic,retain) GEOPDAutocompleteParametersSiriSearch * siriSearch; 
@property (nonatomic,readonly) BOOL hasAddressOnly; 
@property (nonatomic,retain) GEOPDAutocompleteParametersAddressOnly * addressOnly; 
@property (nonatomic,readonly) BOOL hasVenueSearch; 
@property (nonatomic,retain) GEOPDAutocompleteParametersVenueSearch * venueSearch; 
@property (nonatomic,readonly) BOOL hasBrandProfileSearch; 
@property (nonatomic,retain) GEOPDAutocompleteParametersBrandProfileSearch * brandProfileSearch; 
@property (nonatomic,readonly) BOOL hasOfflineRegionSearch; 
@property (nonatomic,retain) GEOPDAutocompleteParametersOfflineRegionSearch * offlineRegionSearch; 
@property (nonatomic,readonly) BOOL hasPoiAddressOnly; 
@property (nonatomic,retain) GEOPDAutocompleteParametersPoiAddressOnly * poiAddressOnly; 
@property (nonatomic,readonly) BOOL hasAutocompleteFilter; 
@property (nonatomic,retain) GEOPDAutocompleteFilter * autocompleteFilter; 
@property (assign,nonatomic) BOOL hasShouldPopulateMapsIdentifier; 
@property (assign,nonatomic) BOOL shouldPopulateMapsIdentifier; 
@property (assign,nonatomic) BOOL hasSupportAutocompleteSessionData; 
@property (assign,nonatomic) BOOL supportAutocompleteSessionData; 
@property (nonatomic,readonly) BOOL hasAutocompleteSessionData; 
@property (nonatomic,retain) GEOPDAutocompleteSessionData * autocompleteSessionData; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(int)requestType;
-(void)setAllEntries:(GEOPDAutocompleteParametersAllEntries *)arg1 ;
-(GEOPDAutocompleteParametersAllEntries *)allEntries;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(void)clearSensitiveFields;
-(void)_readAutocompleteSessionData;
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(void)setAutocompleteSessionData:(GEOPDAutocompleteSessionData *)arg1 ;
-(BOOL)hasAutocompleteSessionData;
-(BOOL)hasAutocompleteFilter;
-(void)setAutocompleteFilter:(GEOPDAutocompleteFilter *)arg1 ;
-(GEOPDAutocompleteFilter *)autocompleteFilter;
-(GEOPDAutocompleteParametersAllEntriesWithBrowse *)allEntriesWithBrowse;
-(void)_readFullEntries;
-(void)_readAllEntries;
-(void)_readLocalitiesAndLandmarks;
-(void)_readAllEntriesWithBrowse;
-(void)_readSiriSearch;
-(void)_readAddressOnly;
-(void)_readVenueSearch;
-(void)_readBrandProfileSearch;
-(void)_readOfflineRegionSearch;
-(void)_readPoiAddressOnly;
-(void)_readAutocompleteFilter;
-(GEOPDAutocompleteParametersFullEntriesOnly *)fullEntries;
-(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)localitiesAndLandmarks;
-(GEOPDAutocompleteParametersSiriSearch *)siriSearch;
-(GEOPDAutocompleteParametersAddressOnly *)addressOnly;
-(GEOPDAutocompleteParametersVenueSearch *)venueSearch;
-(GEOPDAutocompleteParametersBrandProfileSearch *)brandProfileSearch;
-(GEOPDAutocompleteParametersOfflineRegionSearch *)offlineRegionSearch;
-(GEOPDAutocompleteParametersPoiAddressOnly *)poiAddressOnly;
-(BOOL)hasAllEntriesWithBrowse;
-(void)setAllEntriesWithBrowse:(GEOPDAutocompleteParametersAllEntriesWithBrowse *)arg1 ;
-(void)setFullEntries:(GEOPDAutocompleteParametersFullEntriesOnly *)arg1 ;
-(void)setLocalitiesAndLandmarks:(GEOPDAutocompleteParametersLocalitiesAndLandmarks *)arg1 ;
-(void)setSiriSearch:(GEOPDAutocompleteParametersSiriSearch *)arg1 ;
-(void)setAddressOnly:(GEOPDAutocompleteParametersAddressOnly *)arg1 ;
-(void)setVenueSearch:(GEOPDAutocompleteParametersVenueSearch *)arg1 ;
-(void)setBrandProfileSearch:(GEOPDAutocompleteParametersBrandProfileSearch *)arg1 ;
-(void)setOfflineRegionSearch:(GEOPDAutocompleteParametersOfflineRegionSearch *)arg1 ;
-(void)setPoiAddressOnly:(GEOPDAutocompleteParametersPoiAddressOnly *)arg1 ;
-(BOOL)hasFullEntries;
-(BOOL)hasAllEntries;
-(BOOL)hasLocalitiesAndLandmarks;
-(BOOL)hasSiriSearch;
-(BOOL)hasAddressOnly;
-(BOOL)hasVenueSearch;
-(BOOL)hasBrandProfileSearch;
-(BOOL)hasOfflineRegionSearch;
-(BOOL)hasPoiAddressOnly;
-(BOOL)shouldPopulateMapsIdentifier;
-(void)setShouldPopulateMapsIdentifier:(BOOL)arg1 ;
-(void)setHasShouldPopulateMapsIdentifier:(BOOL)arg1 ;
-(BOOL)hasShouldPopulateMapsIdentifier;
-(BOOL)supportAutocompleteSessionData;
-(void)setSupportAutocompleteSessionData:(BOOL)arg1 ;
-(void)setHasSupportAutocompleteSessionData:(BOOL)arg1 ;
-(BOOL)hasSupportAutocompleteSessionData;
@end

