/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath;

@interface SCNShape : SCNGeometry {

	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	long long _primitiveType;
	long long _chamferMode;
	UIBezierPath* _path;

}

@property (nonatomic,copy) UIBezierPath * path; 
@property (assign,nonatomic) double extrusionDepth; 
@property (assign,nonatomic) long long chamferMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
+(BOOL)supportsSecureCoding;
+(id)shapeWithPath:(id)arg1 extrusionDepth:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(SCD_Struct_SC158*)params;
-(long long)primitiveType;
-(void)setPrimitiveType:(long long)arg1 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DShapeGeometry*)arg1 ;
-(void)setChamferRadius:(double)arg1 ;
-(double)chamferRadius;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(long long)chamferMode;
-(void)setChamferMode:(long long)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(double)discretizedStraightLineMaxLength;
-(id)initPresentationShapeGeometryWithShapeGeometryRef:(_C3DShapeGeometry*)arg1 ;
-(void)_customEncodingOfSCNShape:(id)arg1 ;
-(void)_customDecodingOfSCNShape:(id)arg1 ;
-(id)initWithShapeGeometryRef:(_C3DShapeGeometry*)arg1 ;
@end
