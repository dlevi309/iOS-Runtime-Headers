/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNBox : SCNGeometry {

	double _boxwidth;
	double _boxheight;
	double _boxlength;
	double _boxchamferRadius;
	long long _boxwidthSegmentCount;
	long long _boxheightSegmentCount;
	long long _boxlengthSegmentCount;
	long long _boxchamferSegmentCount;
	long long _boxprimitiveType;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double chamferRadius; 
@property (assign,nonatomic) long long widthSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long lengthSegmentCount; 
@property (assign,nonatomic) long long chamferSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)box;
+(id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4 ;
-(void)setHeight:(double)arg1 ;
-(void)setLength:(double)arg1 ;
-(double)width;
-(id)init;
-(long long)primitiveType;
-(void)setWidth:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(double)height;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(long long)widthSegmentCount;
-(void)setWidthSegmentCount:(long long)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationBox;
-(void)setChamferRadius:(double)arg1 ;
-(double)chamferRadius;
-(long long)lengthSegmentCount;
-(void)setLengthSegmentCount:(long long)arg1 ;
-(long long)chamferSegmentCount;
-(void)setChamferSegmentCount:(long long)arg1 ;
@end

