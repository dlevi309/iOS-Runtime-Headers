/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint {

	SCNNode* _target;
	float _minimumDistance;
	float _maximumDistance;
	BOOL _keepTargetDirection;
	SCNVector3 _targetDirection;
	float _maximumDirectionAngle;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,nonatomic) double maximumDistance; 
+(BOOL)supportsSecureCoding;
+(id)distanceConstraint;
+(id)distanceConstraintWithTarget:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(id)init;
-(void)setMaximumDistance:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCNVector3)targetDirection;
-(void)setTargetDirection:(SCNVector3)arg1 ;
-(double)maximumDistance;
-(void)setMinimumDistance:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNNode *)target;
-(double)minimumDistance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)_customEncodingOfSCNDistanceConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNDistanceConstraint:(id)arg1 ;
-(BOOL)keepTargetDirection;
-(void)setKeepTargetDirection:(BOOL)arg1 ;
@end

