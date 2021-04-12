/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry {

	double _sphereradius;
	double _sphereradialSpan;
	long long _spheresegmentCount;
	long long _sphereprimitiveType;
	BOOL _spheregeodesic;
	BOOL _spherehemispheric;

}

@property (assign,nonatomic) double radius; 
@property (assign,getter=isGeodesic,nonatomic) BOOL geodesic; 
@property (assign,nonatomic) long long segmentCount; 
+(BOOL)supportsSecureCoding;
+(id)sphereWithRadius:(double)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(long long)primitiveType;
-(void)setSegmentCount:(long long)arg1 ;
-(long long)segmentCount;
-(void)setPrimitiveType:(long long)arg1 ;
-(void)setGeodesic:(BOOL)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setRadialSpan:(double)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationSphere;
-(BOOL)isGeodesic;
-(double)radialSpan;
-(BOOL)isHemispheric;
-(void)setHemispheric:(BOOL)arg1 ;
-(BOOL)geodesic;
@end

