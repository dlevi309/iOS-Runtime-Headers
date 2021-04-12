/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CLPContext *)context;
-(CLPLocation *)location;
-(void)setContext:(CLPContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(BOOL)hasLocation;
-(BOOL)hasContext;
-(NSMutableArray *)locations;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(int)collectionType;
-(void)setCollectionType:(int)arg1 ;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
-(void)addLocations:(id)arg1 ;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(CLPMeta *)meta;
-(void)setMeta:(CLPMeta *)arg1 ;
-(void)addPressure:(id)arg1 ;
-(void)addWifiScan:(id)arg1 ;
-(unsigned long long)pressuresCount;
-(void)clearPressures;
-(id)pressureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)wifiScansCount;
-(void)clearWifiScans;
-(id)wifiScanAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMeta;
-(void)setStopTimestamp:(double)arg1 ;
-(void)setHasStopTimestamp:(BOOL)arg1 ;
-(BOOL)hasStopTimestamp;
-(void)setHasCollectionType:(BOOL)arg1 ;
-(BOOL)hasCollectionType;
-(id)collectionTypeAsString:(int)arg1 ;
-(int)StringAsCollectionType:(id)arg1 ;
-(double)stopTimestamp;
-(NSMutableArray *)pressures;
-(void)setPressures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)wifiScans;
-(void)setWifiScans:(NSMutableArray *)arg1 ;
@end

