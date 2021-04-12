/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDOfflineProactiveRegionsParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _locations;
	unsigned _maximumSizeInBytes;
	SCD_Struct_GE99 _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (assign,nonatomic) BOOL hasMaximumSizeInBytes; 
@property (assign,nonatomic) unsigned maximumSizeInBytes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(unsigned)maximumSizeInBytes;
-(void)setMaximumSizeInBytes:(unsigned)arg1 ;
-(void)setHasMaximumSizeInBytes:(BOOL)arg1 ;
-(BOOL)hasMaximumSizeInBytes;
@end

