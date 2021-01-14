/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeItem:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(double)angle;
-(long long)mode;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(void)_step;
-(NSArray *)items;
-(id)description;
-(double)magnitude;
-(void)setAngle:(double)arg1 ;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(void)_associate;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(void)setMagnitude:(double)arg1 ;
-(double)yComponent;
-(double)xComponent;
-(id)initWithItems:(id)arg1 mode:(long long)arg2 ;
-(CGVector)pushDirection;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(void)setPushDirection:(CGVector)arg1 ;
-(void)_dissociate;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
@end

