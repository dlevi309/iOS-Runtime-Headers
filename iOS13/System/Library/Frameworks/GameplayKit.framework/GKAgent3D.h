/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKAgent.h>

@interface GKAgent3D : GKAgent

@property (assign,nonatomic)  position; 
@property (nonatomic,readonly)  velocity; 
@property (assign,nonatomic) BOOL rightHanded; 
@property (assign,nonatomic) SCD_Struct_GK5 rotation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-()position;
-(SCD_Struct_GK5)rotation;
-(void)setRotation:(SCD_Struct_GK5)arg1 ;
-()velocity;
-(void)setPosition:;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
-(BOOL)rightHanded;
-(void)setRightHanded:(BOOL)arg1 ;
@end

