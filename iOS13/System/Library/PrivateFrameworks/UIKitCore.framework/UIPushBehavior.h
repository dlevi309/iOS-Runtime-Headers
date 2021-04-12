/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableDictionary, NSArray;

@interface UIPushBehavior : UIDynamicBehavior {

	double _angle;
	double _magnitude;
	BOOL _active;
	long long _mode;
	CGVector _forceVector;
	double _timeInterval;
	NSMutableDictionary* _targetPoints;
	int _i;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long mode; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
@property (assign,nonatomic) CGVector pushDirection; 
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(void)removeItem:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(long long)mode;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(NSArray *)items;
-(void)_step;
-(void)addItem:(id)arg1 ;
-(BOOL)active;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(double)xComponent;
-(void)setMagnitude:(double)arg1 ;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(id)initWithItems:(id)arg1 mode:(long long)arg2 ;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(CGVector)pushDirection;
-(void)setPushDirection:(CGVector)arg1 ;
@end

