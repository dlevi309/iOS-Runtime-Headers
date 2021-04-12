/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLine.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOMapItemIdentifier, NSArray, PBUnknownFields, MSPTransitStorageArtwork, GEOLatLng, MSPTransitStorageSystem;

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	MSPTransitStorageArtwork* _alternateArtwork;
	MSPTransitStorageArtwork* _artwork;
	NSString* _lineColorString;
	GEOLatLng* _locationHint;
	MSPTransitStorageArtwork* _modeArtwork;
	NSString* _name;
	MSPTransitStorageSystem* _system;
	SCD_Struct_MS3 _has;

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
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                         //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * lineColorString;                                      //@synthesize lineColorString=_lineColorString - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) MSPTransitStorageArtwork * artwork;                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) BOOL hasModeArtwork; 
@property (nonatomic,retain) MSPTransitStorageArtwork * modeArtwork;                          //@synthesize modeArtwork=_modeArtwork - In the implementation block
@property (nonatomic,readonly) BOOL hasSystem; 
@property (nonatomic,retain) MSPTransitStorageSystem * system;                                //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateArtwork; 
@property (nonatomic,retain) MSPTransitStorageArtwork * alternateArtwork;                     //@synthesize alternateArtwork=_alternateArtwork - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                                        //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(GEOMapItemIdentifier *)identifier;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(id<GEOTransitSystem>)system;
-(void)setSystem:(id<GEOTransitSystem>)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(id<GEOTransitArtworkDataSource>)artwork;
-(void)setArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(BOOL)hasArtwork;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(void)setModeArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setAlternateArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(BOOL)hasModeArtwork;
-(BOOL)hasAlternateArtwork;
-(GEOLatLng *)locationHint;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(BOOL)hasLocationHint;
-(NSString *)lineColorString;
-(BOOL)showVehicleNumber;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)isBus;
-(BOOL)hasLineColorString;
-(void)setLineColorString:(NSString *)arg1 ;
-(id)initWithLine:(id)arg1 ;
-(BOOL)hasSystem;
@end

