/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNTorus : SCNGeometry {

	double _torusringRadius;
	double _toruspipeRadius;
	double _torusradialSpan;
	long long _torusringSegmentCount;
	long long _toruspipeSegmentCount;
	long long _torusprimitiveType;

}

@property (assign,nonatomic) double ringRadius; 
@property (assign,nonatomic) double pipeRadius; 
@property (assign,nonatomic) long long ringSegmentCount; 
@property (assign,nonatomic) long long pipeSegmentCount; 
+(BOOL)supportsSecureCoding;
+(id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 ;
-(id)init;
-(long long)primitiveType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setPipeSegmentCount:(long long)arg1 ;
-(void)setRingSegmentCount:(long long)arg1 ;
-(void)setRadialSpan:(double)arg1 ;
-(void)setRingRadius:(double)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(double)radialSpan;
-(id)presentationTorus;
-(double)ringRadius;
-(double)pipeRadius;
-(void)setPipeRadius:(double)arg1 ;
-(long long)ringSegmentCount;
-(long long)pipeSegmentCount;
@end

