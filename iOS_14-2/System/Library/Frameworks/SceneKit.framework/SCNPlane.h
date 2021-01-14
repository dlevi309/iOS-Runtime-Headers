/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNPlane : SCNGeometry {

	double _width;
	double _height;
	double _cornerRadius;
	long long _widthSegmentCount;
	long long _heightSegmentCount;
	long long _cornerSegmentCount;
	long long _primitiveType;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) long long widthSegmentCount; 
@property (assign,nonatomic) long long heightSegmentCount; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long cornerSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)planeWithWidth:(double)arg1 height:(double)arg2 ;
-(void)setHeight:(double)arg1 ;
-(double)width;
-(id)init;
-(long long)primitiveType;
-(void)setWidth:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(double)cornerRadius;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationPlane;
-(long long)widthSegmentCount;
-(void)setWidthSegmentCount:(long long)arg1 ;
-(long long)heightSegmentCount;
-(void)setHeightSegmentCount:(long long)arg1 ;
-(long long)cornerSegmentCount;
-(void)setCornerSegmentCount:(long long)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
@end

