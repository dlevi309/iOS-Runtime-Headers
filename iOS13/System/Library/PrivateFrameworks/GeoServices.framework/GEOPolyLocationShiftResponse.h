/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {

	SCD_Struct_GE41* _parameters;
	double _radius;
	int _status;

}

@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) unsigned long long parametersCount; 
@property (nonatomic,readonly) double* parameters; 
@property (assign,nonatomic) double radius; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(double*)parameters;
-(void)writeTo:(id)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)parametersCount;
-(void)clearParameters;
-(double)parametersAtIndex:(unsigned long long)arg1 ;
-(void)addParameters:(double)arg1 ;
-(void)setParameters:(double*)arg1 count:(unsigned long long)arg2 ;
@end

