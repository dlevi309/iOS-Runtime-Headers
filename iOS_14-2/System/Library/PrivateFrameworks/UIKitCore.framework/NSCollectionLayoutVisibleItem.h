/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/_NSCollectionLayoutVisibleItem.h>

@class UICollectionViewLayoutAttributes, NSCollectionLayoutItem, NSString, NSIndexPath, UIBezierPath;

@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem> {

	BOOL _dirty;
	UICollectionViewLayoutAttributes* _layoutAttributes;
	NSCollectionLayoutItem* _layoutItem;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutItem * layoutItem;                              //@synthesize layoutItem=_layoutItem - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                                        //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) long long zIndex; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) CATransform3D transform3D; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long representedElementCategory; 
@property (nonatomic,readonly) NSString * representedElementKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGRect)bounds;
-(void)setDirty:(BOOL)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(NSCollectionLayoutItem *)layoutItem;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(BOOL)isHidden;
-(CGPoint)center;
-(void)setZIndex:(long long)arg1 ;
-(BOOL)isDirty;
-(void)setLayoutItem:(NSCollectionLayoutItem *)arg1 ;
-(NSIndexPath *)indexPath;
-(double)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(long long)zIndex;
-(CGRect)frame;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(NSString *)name;
-(NSString *)description;
-(void)setCenter:(CGPoint)arg1 ;
-(CATransform3D)transform3D;
-(NSString *)representedElementKind;
-(unsigned long long)representedElementCategory;
-(id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2 ;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(void)setAlpha:(double)arg1 ;
@end

