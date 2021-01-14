/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIView, UIBezierPath, NSString;

@interface _UIPlatterItem : NSObject <UIDynamicItem> {

	UIView* _heldView;

}

@property (__weak,readonly) UIView * heldView;                                      //@synthesize heldView=_heldView - In the implementation block
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(CGPoint)center;
-(UIView *)heldView;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
@end

