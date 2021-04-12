/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)identifier;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)timezone;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOLatLng *)latLng;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)_readTimezone;
-(void)setTimezone:(NSString *)arg1 ;
-(BOOL)hasTimezone;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(void)_readLatLng;
-(void)_readStyleAttributes;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasLatLng;
-(BOOL)hasStyleAttributes;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(BOOL)hasHallIndex;
-(unsigned)hallIndex;
-(void)_readNameDisplayString;
-(NSString *)nameDisplayString;
-(BOOL)hasNameDisplayString;
-(void)_readZoomNames;
-(void)_addNoFlagsZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(void)addZoomName:(id)arg1 ;
-(NSMutableArray *)zoomNames;
-(unsigned)stopIndex;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(BOOL)hasStopIndex;
-(void)setHallIndex:(unsigned)arg1 ;
-(void)setHasHallIndex:(BOOL)arg1 ;
-(id)bestName;
-(id)bestNameWithLocale:(out id*)arg1 ;
@end

