/*
* Generated on Thursday, January 14, 2021 at 2:23:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBColor : PBCodable <NSCopying> {

	double _a;
	double _b;
	double _g;
	double _r;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasR; 
@property (assign,r,nonatomic) double r;              //@synthesize r=_r - In the implementation block
@property (assign,nonatomic) BOOL hasG; 
@property (assign,g,nonatomic) double g;              //@synthesize g=_g - In the implementation block
@property (assign,nonatomic) BOOL hasB; 
@property (assign,b,nonatomic) double b;              //@synthesize b=_b - In the implementation block
@property (assign,nonatomic) BOOL hasA; 
@property (assign,a,nonatomic) double a;              //@synthesize a=_a - In the implementation block
-(double)r;
-(double)b;
-(id)dictionaryRepresentation;
-(BOOL)hasR;
-(BOOL)hasG;
-(BOOL)hasB;
-(BOOL)hasA;
-(void)setR:(double)arg1 ;
-(void)setB:(double)arg1 ;
-(void)setG:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)g;
-(void)setHasR:(BOOL)arg1 ;
-(id)description;
-(void)setA:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasG:(BOOL)arg1 ;
-(void)setHasB:(BOOL)arg1 ;
-(void)setHasA:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)a;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

