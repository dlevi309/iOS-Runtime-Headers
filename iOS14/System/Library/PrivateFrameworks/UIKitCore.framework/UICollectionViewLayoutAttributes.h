/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString, NSIndexPath, NSMutableDictionary;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem> {

	NSString* _elementKind;
	NSIndexPath* _indexPath;
	NSString* _reuseIdentifier;
	CGPoint _center;
	CGSize _size;
	CGRect _frame;
	double _alpha;
	long long _zPosition;
	CATransform3D _transform;
	CGRect _maskViewFrame;
	NSMutableDictionary* _customAttributes;
	struct {
		unsigned isCellKind : 1;
		unsigned isDecorationView : 1;
		unsigned isHidden : 1;
		unsigned isClone : 1;
		unsigned masksToBounds : 1;
		unsigned maskedCorners : 4;
		unsigned hasDefaultLayoutMargins : 1;
		unsigned removeMaskViewAfterAnimation : 1;
	}  _layoutFlags;
	BOOL _hasMaskViewFrame;
	long long _zIndex;
	unsigned long long _selectionGrouping;
	double _cornerRadius;
	UIEdgeInsets _defaultLayoutMargins;

}

@property (assign,setter=_setMasksToBounds:,getter=_masksToBounds,nonatomic) BOOL masksToBounds; 
@property (assign,setter=_setMaskedCorners:,getter=_maskedCorners,nonatomic) unsigned long long maskedCorners; 
@property (assign,setter=_setCornerRadius:,getter=_cornerRadius,nonatomic) double cornerRadius;                                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=_hasMaskViewFrame,nonatomic) BOOL hasMaskViewFrame;                                                               //@synthesize hasMaskViewFrame=_hasMaskViewFrame - In the implementation block
@property (getter=_maskViewFrame,nonatomic,readonly) CGRect maskViewFrame; 
@property (getter=_removeMaskViewAfterAnimation,nonatomic,readonly) BOOL removeMaskViewAfterAnimation; 
@property (getter=_hasDefaultLayoutMargins,nonatomic,readonly) BOOL hasDefaultLayoutMargins; 
@property (assign,setter=_setDefaultLayoutMargins:,getter=_defaultLayoutMargins,nonatomic) UIEdgeInsets defaultLayoutMargins;              //@synthesize defaultLayoutMargins=_defaultLayoutMargins - In the implementation block
@property (assign,setter=_setSelectionGrouping:,getter=_selectionGrouping,nonatomic) unsigned long long selectionGrouping;                 //@synthesize selectionGrouping=_selectionGrouping - In the implementation block
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGPoint center;                                                                                               //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CATransform3D transform3D;                                                                                    //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) double alpha;                                                                                                 //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) long long zIndex;                                                                                             //@synthesize zIndex=_zIndex - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,retain) NSIndexPath * indexPath;                                                                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long representedElementCategory; 
@property (nonatomic,readonly) NSString * representedElementKind; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(CGRect)bounds;
-(BOOL)_isCell;
-(id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)isHidden;
-(CGPoint)center;
-(unsigned long long)_maskedCorners;
-(void)setZIndex:(long long)arg1 ;
-(id)init;
-(NSIndexPath *)indexPath;
-(void)_setMaskedCorners:(unsigned long long)arg1 ;
-(double)_cornerRadius;
-(double)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)_isClone;
-(CGSize)size;
-(long long)zIndex;
-(CGRect)frame;
-(void)setSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(long long)_zPosition;
-(void)_setDefaultLayoutMargins:(UIEdgeInsets)arg1 ;
-(CGAffineTransform)transform;
-(id)__indexPath;
-(BOOL)_isEquivalentTo:(id)arg1 ;
-(NSString *)description;
-(void)setHasMaskViewFrame:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)__elementKind;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)isSizeEqualForPreferredFittingAttributes:(id)arg1 ;
-(UIEdgeInsets)_defaultLayoutMargins;
-(BOOL)_masksToBounds;
-(BOOL)_hasMaskViewFrame;
-(CGRect)_maskViewFrame;
-(BOOL)_isTransitionVisibleTo:(id)arg1 ;
-(id)_elementKind;
-(CATransform3D)transform3D;
-(unsigned long long)hash;
-(void)_setIsClone:(BOOL)arg1 ;
-(void)_setReuseIdentifier:(id)arg1 ;
-(NSString *)representedElementKind;
-(unsigned long long)representedElementCategory;
-(BOOL)_isSupplementaryView;
-(BOOL)_removeMaskViewAfterAnimation;
-(void)_setMaskViewFrame:(CGRect)arg1 removeAfterAnimation:(BOOL)arg2 ;
-(BOOL)_hasDefaultLayoutMargins;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_setValue:(id)arg1 forCustomAttribute:(id)arg2 ;
-(BOOL)_isDecorationView;
-(id)_reuseIdentifier;
-(id)_valueForCustomAttribute:(id)arg1 ;
-(void)_setSelectionGrouping:(unsigned long long)arg1 ;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(void)_setElementKind:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)_setZPosition:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setMasksToBounds:(BOOL)arg1 ;
-(unsigned long long)_selectionGrouping;
-(BOOL)isEqual:(id)arg1 ;
@end

