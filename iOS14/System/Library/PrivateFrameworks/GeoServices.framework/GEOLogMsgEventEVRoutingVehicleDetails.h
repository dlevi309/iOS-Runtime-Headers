/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _make;
	NSString* _model;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _batteryCapacity;
	struct {
		unsigned has_batteryCapacity : 1;
		unsigned read_make : 1;
		unsigned read_model : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMake; 
@property (nonatomic,retain) NSString * make; 
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model; 
@property (assign,nonatomic) BOOL hasBatteryCapacity; 
@property (assign,nonatomic) unsigned batteryCapacity; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)make;
-(void)setBatteryCapacity:(unsigned)arg1 ;
-(NSString *)model;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasBatteryCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryCapacity;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasModel;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMake;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMake:(NSString *)arg1 ;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)batteryCapacity;
@end

