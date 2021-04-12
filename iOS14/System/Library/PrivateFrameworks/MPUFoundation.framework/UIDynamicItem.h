/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)bounds;
-(CGPoint)center;
-(void)setTransform:(CGAffineTransform)arg1;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1;

@end

