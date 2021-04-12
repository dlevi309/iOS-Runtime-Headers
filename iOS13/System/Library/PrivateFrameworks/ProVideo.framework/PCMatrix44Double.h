/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PCMatrix44Double : NSObject <NSSecureCoding, NSCopying> {

	double _m[4][4];
	PCMatrix44Tmpl<double>* _pcMatrix;

}

@property (assign,nonatomic) SCD_Struct_PV24 SIMDFloat4x4; 
@property (assign,nonatomic) SCD_Struct_PV24 SIMDDouble4x4; 
+(BOOL)supportsSecureCoding;
+(id)matrixWithSIMDDouble4x4:(SCD_Struct_PV24)arg1 ;
+(id)matrixWithSIMDFloat4x4:(SCD_Struct_PV24)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)array;
-(BOOL)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isIdentity;
-(id)extendedDescription;
-(id)compactDescription;
-(void)transpose;
-(SCD_Struct_PC105)transformInfo;
-(void)makeIdentity;
-(void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3 ;
-(void)leftRotate:(double)arg1 axis:(int)arg2 ;
-(void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3 ;
-(void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3 ;
-(void)rightRotate:(double)arg1 axis:(int)arg2 ;
-(void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3 ;
-(id)initWithSIMDFloat4x4:(SCD_Struct_PV24)arg1 ;
-(id)initWithSIMDDouble4x4:(SCD_Struct_PV24)arg1 ;
-(void)setSIMDFloat4x4:(SCD_Struct_PV24)arg1 ;
-(SCD_Struct_PV24)SIMDDouble4x4;
-(SCD_Struct_PV24)SIMDFloat4x4;
-(void)setSIMDDouble4x4:(SCD_Struct_PV24)arg1 ;
-(PCMatrix44Tmpl<double>*)pcMatrix;
-(id)initWithPCMatrix:(PCMatrix44Tmpl<double>*)arg1 ;
-(void)leftMult:(id)arg1 ;
-(id)initWithDoubles:(double)arg1 external:(BOOL)arg2 ;
-(id)initWithDoubles:(double)arg1 ;
-(void)getDoubles:(double)arg1 ;
-(BOOL)invert2D;
-(double)doubleValueAtRow:(unsigned)arg1 col:(unsigned)arg2 ;
-(void)setDoubleValue:(double)arg1 atRow:(unsigned)arg2 col:(unsigned)arg3 ;
-(void)setDoubles:(double)arg1 ;
-(void)leftShearX:(double)arg1 shearY:(double)arg2 ;
-(void)rightShearX:(double)arg1 shearY:(double)arg2 ;
-(void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double*)arg4 scaledSizeY:(double*)arg5 scaledSizeZ:(double*)arg6 ;
-(void)rightMult:(id)arg1 ;
-(void)leftFlipAboutY:(double)arg1 ;
-(id)newTransformTo:(id)arg1 ;
-(id)newPlanarTransformTo:(id)arg1 ;
@end

