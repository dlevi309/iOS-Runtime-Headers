/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNPyramid : SCNGeometry {

	double _pyramidwidth;
	double _pyramidheight;
	double _pyramidlength;
	long long _pyramidwidthSegmentCount;
	long long _pyramidheightSegmentCount;
	long long _pyramidlengthSegmentCount;
	long long _pyramidprimitiveType;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) long long widthSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) long long lengthSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 ;
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
-(long long)lengthSegmentCount;
-(void)setLengthSegmentCount:(long long)arg1 ;
-(id)presentationPyramid;
@end

