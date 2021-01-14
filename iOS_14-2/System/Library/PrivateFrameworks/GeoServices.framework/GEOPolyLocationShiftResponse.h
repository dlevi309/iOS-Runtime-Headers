/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE97* _parameters;
	double _radius;
	int _status;

}

@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) unsigned long long parametersCount; 
@property (nonatomic,readonly) double* parameters; 
@property (assign,nonatomic) double radius; 
+(BOOL)isValid:(id)arg1 ;
-(double*)parameters;
-(id)dictionaryRepresentation;
-(void)setRadius:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)addParameters:(double)arg1 ;
-(unsigned long long)parametersCount;
-(void)clearParameters;
-(double)parametersAtIndex:(unsigned long long)arg1 ;
-(void)setParameters:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(double)radius;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)dealloc;
@end

