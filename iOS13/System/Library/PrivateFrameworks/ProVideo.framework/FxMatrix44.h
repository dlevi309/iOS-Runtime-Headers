/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FxMatrix44 : NSObject <NSSecureCoding> {

	double _mat[4][4];

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copy;
-(BOOL)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double*)matrix;
-(void)setMatrix:(double)arg1 ;
-(void)transpose;
-(id)initWithMatrix44Data:(double)arg1 ;
-(CGPoint)transform2DPoint:(CGPoint)arg1 ;
-(id)initWithFxMatrix:(id)arg1 ;
-(BOOL)_planarInverseZ;
-(id)initWithColorMatrix44Data:(double)arg1 ;
-(void)setToIdentity;
-(FxPoint3D)transform3DPoint:(FxPoint3D)arg1 ;
@end

