/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString;

@interface _MPUFallAnimatorDynamicItem : NSObject <UIDynamicItem> {

	CGPoint _center;
	CGRect _bounds;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGPoint center;                                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(CGPoint)center;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
@end

