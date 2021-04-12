/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasR; 
@property (assign,r,nonatomic) double r;              //@synthesize r=_r - In the implementation block
@property (assign,nonatomic) BOOL hasG; 
@property (assign,g,nonatomic) double g;              //@synthesize g=_g - In the implementation block
@property (assign,nonatomic) BOOL hasB; 
@property (assign,b,nonatomic) double b;              //@synthesize b=_b - In the implementation block
@property (assign,nonatomic) BOOL hasA; 
@property (assign,a,nonatomic) double a;              //@synthesize a=_a - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)g;
-(void)setG:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)r;
-(double)b;
-(double)a;
-(void)setA:(double)arg1 ;
-(void)setB:(double)arg1 ;
-(void)setHasA:(BOOL)arg1 ;
-(BOOL)hasA;
-(void)setHasB:(BOOL)arg1 ;
-(BOOL)hasB;
-(void)setR:(double)arg1 ;
-(void)setHasR:(BOOL)arg1 ;
-(BOOL)hasR;
-(void)setHasG:(BOOL)arg1 ;
-(BOOL)hasG;
@end

