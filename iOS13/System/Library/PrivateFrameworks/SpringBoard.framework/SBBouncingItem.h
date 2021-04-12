/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString;

@interface SBBouncingItem : NSObject <UIDynamicItem> {

	CGRect _bounds;
	CGPoint _center;
	double _multiplier;
	/*^block*/id _translateBlock;

}

@property (assign) double multiplier;                                               //@synthesize multiplier=_multiplier - In the implementation block
@property (copy) id translateBlock;                                                 //@synthesize translateBlock=_translateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGAffineTransform)transform;
-(double)multiplier;
-(void)setMultiplier:(double)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setTranslateBlock:(id)arg1 ;
-(id)translateBlock;
@end

