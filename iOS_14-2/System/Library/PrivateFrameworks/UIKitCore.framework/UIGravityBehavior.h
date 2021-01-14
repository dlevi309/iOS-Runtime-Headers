/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(double)angle;
-(id)init;
-(NSArray *)items;
-(id)description;
-(double)magnitude;
-(void)setAngle:(double)arg1 ;
-(void)_addGravityItem:(id)arg1 ;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(CGVector)gravityDirection;
-(void)_associate;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(void)setGravityDirection:(CGVector)arg1 ;
-(CGPoint)denormalizedGravity;
-(void)setMagnitude:(double)arg1 ;
-(double)yComponent;
-(double)xComponent;
-(void)_setAngle:(double)arg1 magnitude:(double)arg2 ;
-(void)_dissociate;
-(void)setGravity:(CGPoint)arg1 ;
-(CGPoint)gravity;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
@end

