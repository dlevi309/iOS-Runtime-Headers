/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)readAll:(BOOL)arg1 ;
-(double)fovS;
-(void)setFovS:(double)arg1 ;
-(void)setHasFovS:(BOOL)arg1 ;
-(BOOL)hasFovS;
-(double)fovH;
-(void)setFovH:(double)arg1 ;
-(void)setHasFovH:(BOOL)arg1 ;
-(BOOL)hasFovH;
-(double)k2;
-(void)setK2:(double)arg1 ;
-(void)setHasK2:(BOOL)arg1 ;
-(BOOL)hasK2;
-(double)k3;
-(void)setK3:(double)arg1 ;
-(void)setHasK3:(BOOL)arg1 ;
-(BOOL)hasK3;
-(double)k4;
-(void)setK4:(double)arg1 ;
-(void)setHasK4:(BOOL)arg1 ;
-(BOOL)hasK4;
-(double)cx;
-(void)setCx:(double)arg1 ;
-(void)setHasCx:(BOOL)arg1 ;
-(BOOL)hasCx;
-(double)cy;
-(void)setCy:(double)arg1 ;
-(void)setHasCy:(BOOL)arg1 ;
-(BOOL)hasCy;
-(double)lx;
-(void)setLx:(double)arg1 ;
-(void)setHasLx:(BOOL)arg1 ;
-(BOOL)hasLx;
-(double)ly;
-(void)setLy:(double)arg1 ;
-(void)setHasLy:(BOOL)arg1 ;
-(BOOL)hasLy;
@end

