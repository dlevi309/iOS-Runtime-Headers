/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLTransform3DJSExports.h>

@class TMLAffineTransform;

@interface TMLTransform3D : NSObject <TMLTransform3DJSExports> {

	CATransform3D _transform;

}

@property (nonatomic,readonly) CATransform3D transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) TMLAffineTransform * affineTransform; 
@property (assign,nonatomic) double m11; 
@property (assign,nonatomic) double m12; 
@property (assign,nonatomic) double m13; 
@property (assign,nonatomic) double m14; 
@property (assign,nonatomic) double m21; 
@property (assign,nonatomic) double m22; 
@property (assign,nonatomic) double m23; 
@property (assign,nonatomic) double m24; 
@property (assign,nonatomic) double m31; 
@property (assign,nonatomic) double m32; 
@property (assign,nonatomic) double m33; 
@property (assign,nonatomic) double m34; 
@property (assign,nonatomic) double m41; 
@property (assign,nonatomic) double m42; 
@property (assign,nonatomic) double m43; 
@property (assign,nonatomic) double m44; 
+(void)initializeJSContext:(id)arg1 ;
-(CATransform3D)transform;
-(id)CATransform3DValue;
-(TMLAffineTransform *)affineTransform;
-(id)initWithTransform3D:(CATransform3D)arg1 ;
-(void)setM34:(double)arg1 ;
-(double)m34;
-(double)m11;
-(void)setM11:(double)arg1 ;
-(double)m12;
-(void)setM12:(double)arg1 ;
-(double)m13;
-(void)setM13:(double)arg1 ;
-(double)m14;
-(void)setM14:(double)arg1 ;
-(double)m21;
-(void)setM21:(double)arg1 ;
-(double)m22;
-(void)setM22:(double)arg1 ;
-(double)m23;
-(void)setM23:(double)arg1 ;
-(double)m24;
-(void)setM24:(double)arg1 ;
-(double)m31;
-(void)setM31:(double)arg1 ;
-(double)m32;
-(void)setM32:(double)arg1 ;
-(double)m33;
-(void)setM33:(double)arg1 ;
-(double)m41;
-(void)setM41:(double)arg1 ;
-(double)m42;
-(void)setM42:(double)arg1 ;
-(double)m43;
-(void)setM43:(double)arg1 ;
-(double)m44;
-(void)setM44:(double)arg1 ;
@end

