/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOVLFUsageTileID : PBCodable <NSCopying> {

	NSString* _buildId;
	double _uncertainty;
	double _xCoordinate;
	double _yCoordinate;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasBuildId; 
@property (nonatomic,retain) NSString * buildId; 
@property (assign,nonatomic) BOOL hasXCoordinate; 
@property (assign,nonatomic) double xCoordinate; 
@property (assign,nonatomic) BOOL hasYCoordinate; 
@property (assign,nonatomic) double yCoordinate; 
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) double uncertainty; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(void)setBuildId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setXCoordinate:(double)arg1 ;
-(double)xCoordinate;
-(void)setHasXCoordinate:(BOOL)arg1 ;
-(BOOL)hasXCoordinate;
-(void)setHasYCoordinate:(BOOL)arg1 ;
-(BOOL)hasYCoordinate;
-(id)description;
-(double)yCoordinate;
-(BOOL)hasUncertainty;
-(NSString *)buildId;
-(unsigned long long)hash;
-(void)setYCoordinate:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasBuildId;
@end

