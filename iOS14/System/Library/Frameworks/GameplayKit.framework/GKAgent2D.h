/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-()position;
-(void)setRotation:(float)arg1 ;
-()velocity;
-(id)init;
-(float)rotation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPosition:;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)setPosition_:(float2)arg1 ;
-(float2)position_;
-(float2)velocity_;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
@end

