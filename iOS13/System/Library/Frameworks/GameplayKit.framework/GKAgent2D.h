/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKAgent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKAgent2D : GKAgent <NSSecureCoding>

@property (assign,nonatomic)  position; 
@property (nonatomic,readonly)  velocity; 
@property (assign,nonatomic) float rotation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-()position;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-()velocity;
-(void)setPosition:;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)setPosition_:(float2)arg1 ;
-(float2)position_;
-(float2)velocity_;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
@end

