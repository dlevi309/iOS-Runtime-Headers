/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNVector3)upVector;
-(id)initWithTarget:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTargetOffset:(SCNVector3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNNode *)target;
-(SCNVector3)worldUp;
-(SCNVector3)targetOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setWorldUp:(SCNVector3)arg1 ;
-(SCNVector3)localFront;
-(void)setLocalFront:(SCNVector3)arg1 ;
-(void)setUpVector:(SCNVector3)arg1 ;
-(BOOL)gimbalLockEnabled;
-(void)setGimbalLockEnabled:(BOOL)arg1 ;
-(void)_customEncodingOfSCNLookAtConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNLookAtConstraint:(id)arg1 ;
@end

