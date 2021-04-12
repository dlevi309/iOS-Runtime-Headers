/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UICollectionViewLayoutAttributes, UICollectionView, NSString;

@interface UICollectionReusableView : UIView {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	UICollectionView* _collectionView;
	long long _updateAnimationCount;
	BOOL _shouldConstrainWidth;
	BOOL _shouldConstrainHeight;
	struct {
		unsigned wasDequeued : 1;
		unsigned preferredAttributesValid : 1;
		unsigned generatingPreferredAttributes : 1;
		unsigned didSetMaskedCorners : 1;
		unsigned isBeingReused : 1;
	}  _reusableViewFlags;
	BOOL _preferredAttributesValid;
	NSString* _reuseIdentifier;

}

@property (setter=_setLayoutAttributes:,getter=_layoutAttributes,nonatomic,copy) UICollectionViewLayoutAttributes * layoutAttributes; 
@property (setter=_setReuseIdentifier:,nonatomic,copy) NSString * reuseIdentifier;                                                                 //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setCollectionView:,getter=_collectionView,nonatomic,__weak) UICollectionView * collectionView; 
@property (getter=_isInUpdateAnimation,nonatomic,readonly) BOOL inUpdateAnimation; 
@property (assign,setter=_setShouldConstrainWidth:,getter=_shouldConstrainWidth,nonatomic) BOOL shouldConstrainWidth; 
@property (assign,setter=_setShouldConstrainHeight:,getter=_shouldConstrainHeight,nonatomic) BOOL shouldConstrainHeight; 
@property (assign,setter=_setIsBeingReused:,getter=_isBeingReused,nonatomic) BOOL isBeingReused; 
@property (assign,getter=_arePreferredAttributesValid,nonatomic) BOOL preferredAttributesValid;                                                    //@synthesize preferredAttributesValid=_preferredAttributesValid - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(BOOL)isEditing;
-(void)_setShouldConstrainWidth:(BOOL)arg1 ;
-(void)_setShouldConstrainHeight:(BOOL)arg1 ;
-(id)_layoutAttributes;
-(id)_collectionView;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(NSString *)reuseIdentifier;
-(void)_setReuseIdentifier:(id)arg1 ;
-(void)_setCollectionView:(id)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(BOOL)_isInUpdateAnimation;
-(BOOL)_arePreferredAttributesValid;
-(BOOL)_wasDequeued;
-(void)_invalidatePreferredAttributes;
-(void)_markAsDequeued;
-(void)_addUpdateAnimation;
-(void)_setBaseLayoutAttributes:(id)arg1 ;
-(void)_clearUpdateAnimation;
-(BOOL)_isBeingReused;
-(void)_setIsBeingReused:(BOOL)arg1 ;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(BOOL)_shouldConstrainWidth;
-(BOOL)_shouldConstrainHeight;
-(void)setPreferredAttributesValid:(BOOL)arg1 ;
@end

