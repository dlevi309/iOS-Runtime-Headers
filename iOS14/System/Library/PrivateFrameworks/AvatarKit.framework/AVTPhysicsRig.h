/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNNode;

@interface AVTPhysicsRig : NSObject {

	SCNNode* rig;
	SCNNode* chainRoot;
	double applyDownForce;
	 restPosition;
	 restDown;

}

@property (nonatomic,retain) SCNNode * rig; 
@property (nonatomic,retain) SCNNode * chainRoot; 
@property (assign,nonatomic)  restPosition; 
@property (assign,nonatomic)  restDown; 
@property (assign,nonatomic) double applyDownForce; 
-(SCNNode *)rig;
-(void)setRig:(SCNNode *)arg1 ;
-(SCNNode *)chainRoot;
-(void)setChainRoot:(SCNNode *)arg1 ;
-()restPosition;
-(void)setRestPosition:;
-()restDown;
-(void)setRestDown:;
-(double)applyDownForce;
-(void)setApplyDownForce:(double)arg1 ;
@end

