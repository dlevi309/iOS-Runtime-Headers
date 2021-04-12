/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry {

	unsigned _isPresentationInstance : 1;
	unsigned _usesCustomScaleFactor : 1;
	float _reflectivity;
	float _reflectionFalloffStart;
	float _reflectionFalloffEnd;
	unsigned long long _reflectionCategoryBitMask;
	double _width;
	double _length;
	float _reflectionResolutionScaleFactor;
	unsigned long long _reflectionSampleCount;

}

@property (assign,nonatomic) double reflectivity; 
@property (assign,nonatomic) double reflectionFalloffStart; 
@property (assign,nonatomic) double reflectionFalloffEnd; 
@property (assign,nonatomic) unsigned long long reflectionCategoryBitMask; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double reflectionResolutionScaleFactor; 
+(BOOL)supportsSecureCoding;
+(id)floor;
-(id)init;
-(void)dealloc;
-(double)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)_syncObjCModel;
-(double)reflectionFalloffStart;
-(double)reflectionFalloffEnd;
-(void)setReflectionFalloffStart:(double)arg1 ;
-(void)setReflectionFalloffEnd:(double)arg1 ;
-(double)reflectivity;
-(void)setReflectivity:(double)arg1 ;
-(double)reflectionResolutionScaleFactor;
-(void)setReflectionResolutionScaleFactor:(double)arg1 ;
-(unsigned long long)reflectionSampleCount;
-(void)setReflectionSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)reflectionCategoryBitMask;
-(void)setReflectionCategoryBitMask:(unsigned long long)arg1 ;
-(void)_customDecodingOfSCNFloor:(id)arg1 ;
-(id)initWithFloorGeometryRef:(_C3DFloor*)arg1 ;
-(_C3DFloor*)floorRef;
-(double)reflectionFallOffStart;
-(double)reflectionFallOffEnd;
-(void)setReflectionFallOffStart:(double)arg1 ;
-(void)setReflectionFallOffEnd:(double)arg1 ;
-(_C3DGeometry*)__createCFObject;
@end

