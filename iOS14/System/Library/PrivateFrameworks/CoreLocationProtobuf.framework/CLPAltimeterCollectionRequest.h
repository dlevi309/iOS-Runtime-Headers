/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPContext, CLPLocation, NSMutableArray, CLPMeta;

@interface CLPAltimeterCollectionRequest : PBRequest <NSCopying> {

	double _startTimestamp;
	double _stopTimestamp;
	int _collectionType;
	CLPContext* _context;
	CLPLocation* _location;
	NSMutableArray* _locations;
	CLPMeta* _meta;
	NSMutableArray* _pressures;
	NSMutableArray* _wifiScans;
	SCD_Struct_CL1 _has;

}

@property (nonatomic,readonly) BOOL hasMeta; 
@property (nonatomic,retain) CLPMeta * meta;                          //@synthesize meta=_meta - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) double startTimestamp;                   //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStopTimestamp; 
@property (assign,nonatomic) double stopTimestamp;                    //@synthesize stopTimestamp=_stopTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCollectionType; 
@property (assign,nonatomic) int collectionType;                      //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) CLPContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) CLPLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * pressures;              //@synthesize pressures=_pressures - In the implementation block
@property (nonatomic,retain) NSMutableArray * wifiScans;              //@synthesize wifiScans=_wifiScans - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
+(Class)locationsType;
+(Class)pressureType;
+(Class)wifiScanType;
-(NSMutableArray *)locations;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(CLPMeta *)meta;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)addLocations:(id)arg1 ;
-(CLPLocation *)location;
-(unsigned long long)locationsCount;
-(double)startTimestamp;
-(void)mergeFrom:(id)arg1 ;
-(CLPContext *)context;
-(void)setLocation:(CLPLocation *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(void)setStartTimestamp:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasMeta;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(int)collectionType;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCollectionType:(int)arg1 ;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContext;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(CLPContext *)arg1 ;
-(void)setHasCollectionType:(BOOL)arg1 ;
-(BOOL)hasCollectionType;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(void)addPressure:(id)arg1 ;
-(void)addWifiScan:(id)arg1 ;
-(unsigned long long)pressuresCount;
-(void)clearPressures;
-(id)pressureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)wifiScansCount;
-(void)clearWifiScans;
-(id)wifiScanAtIndex:(unsigned long long)arg1 ;
-(void)setStopTimestamp:(double)arg1 ;
-(void)setHasStopTimestamp:(BOOL)arg1 ;
-(BOOL)hasStopTimestamp;
-(id)collectionTypeAsString:(int)arg1 ;
-(int)StringAsCollectionType:(id)arg1 ;
-(double)stopTimestamp;
-(NSMutableArray *)pressures;
-(void)setPressures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)wifiScans;
-(void)setWifiScans:(NSMutableArray *)arg1 ;
@end

