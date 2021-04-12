/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {

	CGPoint _gravity;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGVector gravityDirection; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(CGPoint)gravity;
-(void)removeItem:(id)arg1 ;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)_addGravityItem:(id)arg1 ;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(void)setGravity:(CGPoint)arg1 ;
-(double)xComponent;
-(CGVector)gravityDirection;
-(void)setGravityDirection:(CGVector)arg1 ;
-(CGPoint)denormalizedGravity;
-(void)setMagnitude:(double)arg1 ;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(void)_setAngle:(double)arg1 magnitude:(double)arg2 ;
@end

