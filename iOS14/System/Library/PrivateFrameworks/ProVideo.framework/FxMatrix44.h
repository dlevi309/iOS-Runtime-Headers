/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FxMatrix44 : NSObject <NSSecureCoding> {

	double _mat[4][4];

}
+(BOOL)supportsSecureCoding;
-(double*)matrix;
-(id)init;
-(void)transpose;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)invert;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setMatrix:(double)arg1 ;
-(id)initWithMatrix44Data:(double)arg1 ;
-(CGPoint)transform2DPoint:(CGPoint)arg1 ;
-(id)initWithFxMatrix:(id)arg1 ;
-(BOOL)_planarInverseZ;
-(id)initWithColorMatrix44Data:(double)arg1 ;
-(void)setToIdentity;
-(BOOL)invertColorMatrixWithTolerance:(double)arg1 ;
-(FxPoint3D)transform3DPoint:(FxPoint3D)arg1 ;
@end

