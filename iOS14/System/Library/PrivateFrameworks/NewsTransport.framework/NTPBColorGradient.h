/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBColorGradient : PBCodable <NSCopying> {

	SCD_Struct_NT21* _locations;
	double _endPointX;
	double _endPointY;
	double _startPointX;
	double _startPointY;
	NSMutableArray* _colors;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasStartPointX; 
@property (assign,nonatomic) double startPointX;                               //@synthesize startPointX=_startPointX - In the implementation block
@property (assign,nonatomic) BOOL hasStartPointY; 
@property (assign,nonatomic) double startPointY;                               //@synthesize startPointY=_startPointY - In the implementation block
@property (assign,nonatomic) BOOL hasEndPointX; 
@property (assign,nonatomic) double endPointX;                                 //@synthesize endPointX=_endPointX - In the implementation block
@property (assign,nonatomic) BOOL hasEndPointY; 
@property (assign,nonatomic) double endPointY;                                 //@synthesize endPointY=_endPointY - In the implementation block
@property (nonatomic,retain) NSMutableArray * colors;                          //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long locationsCount; 
@property (nonatomic,readonly) double* locations; 
+(Class)colorType;
-(double*)locations;
-(NSMutableArray *)colors;
-(void)addLocation:(double)arg1 ;
-(void)setColors:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(unsigned long long)locationsCount;
-(void)mergeFrom:(id)arg1 ;
-(void)addColor:(id)arg1 ;
-(void)setHasStartPointX:(BOOL)arg1 ;
-(BOOL)hasStartPointX;
-(void)setHasStartPointY:(BOOL)arg1 ;
-(BOOL)hasStartPointY;
-(void)setHasEndPointX:(BOOL)arg1 ;
-(BOOL)hasEndPointX;
-(void)setHasEndPointY:(BOOL)arg1 ;
-(BOOL)hasEndPointY;
-(id)colorAtIndex:(unsigned long long)arg1 ;
-(void)setLocations:(double*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)endPointX;
-(double)locationAtIndex:(unsigned long long)arg1 ;
-(double)endPointY;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)colorsCount;
-(void)clearColors;
-(double)startPointX;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startPointY;
-(void)setStartPointX:(double)arg1 ;
-(void)setStartPointY:(double)arg1 ;
-(void)setEndPointX:(double)arg1 ;
-(void)setEndPointY:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

