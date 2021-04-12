/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDLensProjection : PBCodable <NSCopying> {

	double _cx;
	double _cy;
	double _fovH;
	double _fovS;
	double _k2;
	double _k3;
	double _k4;
	double _lx;
	double _ly;
	int _type;
	struct {
		unsigned has_cx : 1;
		unsigned has_cy : 1;
		unsigned has_fovH : 1;
		unsigned has_fovS : 1;
		unsigned has_k2 : 1;
		unsigned has_k3 : 1;
		unsigned has_k4 : 1;
		unsigned has_lx : 1;
		unsigned has_ly : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasFovS; 
@property (assign,nonatomic) double fovS; 
@property (assign,nonatomic) BOOL hasFovH; 
@property (assign,nonatomic) double fovH; 
@property (assign,nonatomic) BOOL hasK2; 
@property (assign,nonatomic) double k2; 
@property (assign,nonatomic) BOOL hasK3; 
@property (assign,nonatomic) double k3; 
@property (assign,nonatomic) BOOL hasK4; 
@property (assign,nonatomic) double k4; 
@property (assign,nonatomic) BOOL hasCx; 
@property (assign,nonatomic) double cx; 
@property (assign,nonatomic) BOOL hasCy; 
@property (assign,nonatomic) double cy; 
@property (assign,nonatomic) BOOL hasLx; 
@property (assign,nonatomic) double lx; 
@property (assign,nonatomic) BOOL hasLy; 
@property (assign,nonatomic) double ly; 
+(BOOL)isValid:(id)arg1 ;
-(double)lx;
-(BOOL)hasK4;
-(double)ly;
-(BOOL)hasK3;
-(id)dictionaryRepresentation;
-(void)setK4:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(double)cy;
-(void)setHasK4:(BOOL)arg1 ;
-(void)setHasFovS:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(double)k2;
-(void)setHasFovH:(BOOL)arg1 ;
-(void)setFovS:(double)arg1 ;
-(BOOL)hasLy;
-(void)setK3:(double)arg1 ;
-(BOOL)hasType;
-(double)fovS;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasK3:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setHasLx:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCx:(double)arg1 ;
-(void)setCy:(double)arg1 ;
-(void)setLy:(double)arg1 ;
-(id)description;
-(void)setFovH:(double)arg1 ;
-(double)k4;
-(void)setLx:(double)arg1 ;
-(BOOL)hasK2;
-(void)setHasCx:(BOOL)arg1 ;
-(double)k3;
-(BOOL)hasFovS;
-(BOOL)hasLx;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasK2:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLy:(BOOL)arg1 ;
-(double)fovH;
-(BOOL)hasCy;
-(void)setK2:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cx;
-(void)setHasCy:(BOOL)arg1 ;
-(BOOL)hasFovH;
-(BOOL)hasCx;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

