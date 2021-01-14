/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-()position;
-(void)setRotation:(SCD_Struct_GK5)arg1 ;
-()velocity;
-(id)init;
-(SCD_Struct_GK5)rotation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPosition:;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
-(BOOL)rightHanded;
-(void)setRightHanded:(BOOL)arg1 ;
@end

