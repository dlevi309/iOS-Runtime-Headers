/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIDynamicItem.h>

@class UIBezierPath, NSString, NSIndexPath;

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
	NSString* _isCloneString;
	struct {
		unsigned isCellKind : 1;
		unsigned isDecorationView : 1;
		unsigned isHidden : 1;
		unsigned isClone : 1;
	}  _layoutFlags;
	long long _zIndex;
	unsigned long long _maskedCorners;
	UIEdgeInsets _defaultLayoutMargins;

}

@property (assign,setter=_setMaskedCorners:,getter=_maskedCorners,nonatomic) unsigned long long maskedCorners;                             //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,setter=_setDefaultLayoutMargins:,getter=_defaultLayoutMargins,nonatomic) UIEdgeInsets defaultLayoutMargins;              //@synthesize defaultLayoutMargins=_defaultLayoutMargins - In the implementation block
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2 ;
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(CGAffineTransform)transform;
-(NSIndexPath *)indexPath;
-(BOOL)isHidden;
-(CGRect)bounds;
-(double)alpha;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(id)_elementKind;
-(NSString *)representedElementKind;
-(unsigned long long)representedElementCategory;
-(BOOL)_isCell;
-(BOOL)_isSupplementaryView;
-(BOOL)_isDecorationView;
-(CATransform3D)transform3D;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(void)_setReuseIdentifier:(id)arg1 ;
-(long long)_zPosition;
-(BOOL)isSizeEqualForPreferredFittingAttributes:(id)arg1 ;
-(id)__indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)__elementKind;
-(BOOL)_isEquivalentTo:(id)arg1 ;
-(BOOL)_isTransitionVisibleTo:(id)arg1 ;
-(void)_setDefaultLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_defaultLayoutMargins;
-(id)_reuseIdentifier;
-(unsigned long long)_maskedCorners;
-(BOOL)_isClone;
-(void)_setZPosition:(long long)arg1 ;
-(void)_setIsClone:(BOOL)arg1 ;
-(void)_setElementKind:(id)arg1 ;
-(id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_setMaskedCorners:(unsigned long long)arg1 ;
@end

