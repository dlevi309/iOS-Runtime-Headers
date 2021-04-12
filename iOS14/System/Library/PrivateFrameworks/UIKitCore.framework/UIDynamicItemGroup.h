/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSMapTable, NSArray, UIBezierPath, NSString;

@interface UIDynamicItemGroup : NSObject <UIDynamicItem> {

	NSMapTable* _itemsToOffsets;
	CGPoint _center;
	CGAffineTransform _transform;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGPoint center;                                        //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItems:(id)arg1 ;
-(CGRect)bounds;
-(CGPoint)center;
-(NSArray *)items;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
@end

