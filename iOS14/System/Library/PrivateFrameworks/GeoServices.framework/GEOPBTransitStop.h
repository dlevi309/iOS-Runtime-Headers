/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, NSString, GEOStyleAttributes, NSMutableArray;

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _latLng;
	unsigned long long _muid;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	NSString* _timezone;
	NSMutableArray* _zoomNames;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _hallIndex;
	unsigned _stopIndex;
	struct {
		unsigned has_muid : 1;
		unsigned has_hallIndex : 1;
		unsigned has_stopIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_latLng : 1;
		unsigned read_nameDisplayString : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_timezone : 1;
		unsigned read_zoomNames : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex; 
@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (assign,nonatomic) BOOL hasHallIndex; 
@property (assign,nonatomic) unsigned hallIndex; 
@property (nonatomic,retain) NSMutableArray * zoomNames; 
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)zoomNameType;
-(BOOL)hasStyleAttributes;
-(BOOL)hasMuid;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)timezone;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)hallIndex;
-(BOOL)hasHallIndex;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLatLng *)latLng;
-(NSString *)description;
-(BOOL)hasTimezone;
-(id)bestName;
-(unsigned long long)hash;
-(BOOL)hasLatLng;
-(unsigned)stopIndex;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(id)bestNameWithLocale:(out id*)arg1 ;
-(NSMutableArray *)zoomNames;
-(id)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)nameDisplayString;
-(BOOL)hasNameDisplayString;
-(void)setHallIndex:(unsigned)arg1 ;
-(void)addZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(void)setHasHallIndex:(BOOL)arg1 ;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(BOOL)hasStopIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(NSString *)arg1 ;
@end

