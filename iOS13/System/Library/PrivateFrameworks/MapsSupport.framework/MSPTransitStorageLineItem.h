/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLineItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, GEOMapRegion, PBUnknownFields, NSMutableArray, MSPTransitStorageLine, MSPTransitStorageAttribution, NSString, GEOMapItemIdentifier;

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _incidents;
	MSPTransitStorageLine* _line;
	GEOMapRegion* _storedMapRegion;
	MSPTransitStorageAttribution* _transitAttribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) BOOL isBus; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasIncidentComponent; 
@property (nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) MSPTransitStorageLine * line;                                    //@synthesize line=_line - In the implementation block
@property (nonatomic,readonly) BOOL hasStoredMapRegion; 
@property (nonatomic,retain) GEOMapRegion * storedMapRegion;                                  //@synthesize storedMapRegion=_storedMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAttribution; 
@property (nonatomic,retain) MSPTransitStorageAttribution * transitAttribution;               //@synthesize transitAttribution=_transitAttribution - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidents;                                      //@synthesize incidents=_incidents - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)incidentsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id<GEOTransitSystem>)system;
-(MSPTransitStorageLine *)line;
-(void)setLine:(MSPTransitStorageLine *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)muid;
-(GEOMapRegion *)mapRegion;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitAttribution>)attribution;
-(BOOL)hasLine;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(MSPTransitStorageAttribution *)transitAttribution;
-(unsigned long long)incidentsCount;
-(void)clearIncidents;
-(id)incidentsAtIndex:(unsigned long long)arg1 ;
-(void)addIncidents:(id)arg1 ;
-(NSArray *)incidents;
-(void)setIncidents:(NSArray *)arg1 ;
-(BOOL)hasTransitAttribution;
-(void)setTransitAttribution:(MSPTransitStorageAttribution *)arg1 ;
-(NSString *)lineColorString;
-(BOOL)showVehicleNumber;
-(NSArray *)labelItems;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)isBus;
-(BOOL)hasLineColorString;
-(BOOL)isIncidentsTTLExpired;
-(BOOL)hasIncidentComponent;
-(BOOL)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(id)initWithLineItem:(id)arg1 ;
-(void)setStoredMapRegion:(GEOMapRegion *)arg1 ;
-(GEOMapRegion *)storedMapRegion;
-(BOOL)hasStoredMapRegion;
@end

