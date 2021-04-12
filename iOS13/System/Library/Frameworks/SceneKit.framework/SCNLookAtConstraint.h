/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint {

	SCNNode* _target;
	BOOL _gimbalLockEnabled;
	SCNVector3 _targetOffset;
	SCNVector3 _upVector;
	SCNVector3 _localFront;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) SCNVector3 targetOffset; 
@property (assign,nonatomic) SCNVector3 localFront; 
@property (assign,nonatomic) SCNVector3 worldUp; 
@property (assign,nonatomic) BOOL gimbalLockEnabled; 
+(BOOL)supportsSecureCoding;
+(id)lookAtConstraintWithTarget:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(id)initWithTarget:(id)arg1 ;
-(void)setTargetOffset:(SCNVector3)arg1 ;
-(SCNVector3)targetOffset;
-(SCNVector3)upVector;
-(SCNVector3)worldUp;
-(void)setWorldUp:(SCNVector3)arg1 ;
-(SCNVector3)localFront;
-(void)setLocalFront:(SCNVector3)arg1 ;
-(void)setUpVector:(SCNVector3)arg1 ;
-(BOOL)gimbalLockEnabled;
-(void)setGimbalLockEnabled:(BOOL)arg1 ;
-(void)_customEncodingOfSCNLookAtConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNLookAtConstraint:(id)arg1 ;
@end

