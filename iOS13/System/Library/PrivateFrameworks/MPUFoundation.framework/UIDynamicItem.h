/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

@class UIBezierPath;


@protocol UIDynamicItem <NSObject>
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@optional
-(unsigned long long)collisionBoundsType;
-(UIBezierPath *)collisionBoundingPath;

@required
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(void)setTransform:(CGAffineTransform)arg1;

@end

