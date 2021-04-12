/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/_NSCollectionLayoutVisibleItem.h>

@class UICollectionViewLayoutAttributes, NSCollectionLayoutItem, NSString, UIBezierPath, NSIndexPath;

@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem> {

	BOOL _dirty;
	UICollectionViewLayoutAttributes* _layoutAttributes;
	NSCollectionLayoutItem* _layoutItem;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutItem * layoutItem;                              //@synthesize layoutItem=_layoutItem - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                                        //@synthesize dirty=_dirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) long long zIndex; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) CATransform3D transform3D; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) unsigned long long representedElementCategory; 
@property (nonatomic,readonly) NSString * representedElementKind; 
-(NSString *)description;
-(NSString *)name;
-(void)setDirty:(BOOL)arg1 ;
-(CGAffineTransform)transform;
-(NSIndexPath *)indexPath;
-(BOOL)isHidden;
-(CGRect)bounds;
-(double)alpha;
-(CGRect)frame;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(BOOL)isDirty;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(NSString *)representedElementKind;
-(unsigned long long)representedElementCategory;
-(id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(NSCollectionLayoutItem *)layoutItem;
-(CATransform3D)transform3D;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setLayoutItem:(NSCollectionLayoutItem *)arg1 ;
@end

