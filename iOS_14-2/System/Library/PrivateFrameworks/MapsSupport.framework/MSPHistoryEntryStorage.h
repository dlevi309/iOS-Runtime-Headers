/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPDirectionsSearch, NSString, MSPPlaceDisplay, MSPQuerySearch, MSPRidesharingTrip, MSPTransitStorageLineItem;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDirectionsSearch* _directionsSearch;
	NSString* _identifier;
	MSPPlaceDisplay* _placeDisplay;
	MSPQuerySearch* _querySearch;
	MSPRidesharingTrip* _ridesharingTrip;
	int _searchType;
	MSPTransitStorageLineItem* _transitLineItem;
	BOOL _tracksRAPRecordingOnly;
	SCD_Struct_MS6 _has;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                           //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                          //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasQuerySearch; 
@property (nonatomic,retain) MSPQuerySearch * querySearch;                             //@synthesize querySearch=_querySearch - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsSearch; 
@property (nonatomic,retain) MSPDirectionsSearch * directionsSearch;                   //@synthesize directionsSearch=_directionsSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDisplay; 
@property (nonatomic,retain) MSPPlaceDisplay * placeDisplay;                           //@synthesize placeDisplay=_placeDisplay - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineItem; 
@property (nonatomic,retain) MSPTransitStorageLineItem * transitLineItem;              //@synthesize transitLineItem=_transitLineItem - In the implementation block
@property (nonatomic,readonly) BOOL hasRidesharingTrip; 
@property (nonatomic,retain) MSPRidesharingTrip * ridesharingTrip;                     //@synthesize ridesharingTrip=_ridesharingTrip - In the implementation block
@property (assign,nonatomic) BOOL hasTracksRAPRecordingOnly; 
@property (assign,nonatomic) BOOL tracksRAPRecordingOnly;                              //@synthesize tracksRAPRecordingOnly=_tracksRAPRecordingOnly - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(double)position;
-(int)searchType;
-(BOOL)hasIdentifier;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setPosition:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setTransitLineItem:(MSPTransitStorageLineItem *)arg1 ;
-(MSPTransitStorageLineItem *)transitLineItem;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(BOOL)tracksRAPRecordingOnly;
-(void)setTracksRAPRecordingOnly:(BOOL)arg1 ;
-(void)setQuerySearch:(MSPQuerySearch *)arg1 ;
-(MSPQuerySearch *)querySearch;
-(void)setDirectionsSearch:(MSPDirectionsSearch *)arg1 ;
-(MSPDirectionsSearch *)directionsSearch;
-(MSPRidesharingTrip *)ridesharingTrip;
-(void)setRidesharingTrip:(MSPRidesharingTrip *)arg1 ;
-(void)setPlaceDisplay:(MSPPlaceDisplay *)arg1 ;
-(MSPPlaceDisplay *)placeDisplay;
-(BOOL)hasQuerySearch;
-(BOOL)hasDirectionsSearch;
-(BOOL)hasPlaceDisplay;
-(BOOL)hasTransitLineItem;
-(BOOL)hasRidesharingTrip;
-(void)setHasTracksRAPRecordingOnly:(BOOL)arg1 ;
-(BOOL)hasTracksRAPRecordingOnly;
@end

