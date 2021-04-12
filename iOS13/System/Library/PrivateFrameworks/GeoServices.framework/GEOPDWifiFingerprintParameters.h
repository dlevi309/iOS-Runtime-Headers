/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _measurements;
	unsigned _maxLabels;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * measurements; 
@property (assign,nonatomic) BOOL hasMaxLabels; 
@property (assign,nonatomic) unsigned maxLabels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)measurementType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)addMeasurement:(id)arg1 ;
-(NSMutableArray *)measurements;
-(unsigned long long)measurementsCount;
-(void)clearMeasurements;
-(id)measurementAtIndex:(unsigned long long)arg1 ;
-(void)setMeasurements:(NSMutableArray *)arg1 ;
-(unsigned)maxLabels;
-(void)setMaxLabels:(unsigned)arg1 ;
-(void)setHasMaxLabels:(BOOL)arg1 ;
-(BOOL)hasMaxLabels;
@end

