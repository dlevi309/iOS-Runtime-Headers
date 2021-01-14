/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNAvoidOccluderConstraint : SCNConstraint {

	SCNNode* _target;
	unsigned long long _categoryBitMask;
	float _offset;
	id _delegate;

}

@property (assign,nonatomic) id<SCNAvoidOccluderConstraintDelegate> delegate; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) unsigned long long occluderCategoryBitMask; 
@property (assign,nonatomic) double bias; 
+(BOOL)supportsSecureCoding;
+(id)avoidOccluderConstraint;
+(id)avoidOccluderConstraintWithTarget:(id)arg1 ;
-(double)bias;
-(void)setTarget:(SCNNode *)arg1 ;
-(id)init;
-(id<SCNAvoidOccluderConstraintDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCNAvoidOccluderConstraintDelegate>)arg1 ;
-(void)setBias:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNNode *)target;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)occluderCategoryBitMask;
-(void)setOccluderCategoryBitMask:(unsigned long long)arg1 ;
-(void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
@end

