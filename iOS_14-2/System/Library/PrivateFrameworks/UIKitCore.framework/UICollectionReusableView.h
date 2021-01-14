/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIEditable.h>

@class UICollectionViewLayoutAttributes, UICollectionView, NSString;

@interface UICollectionReusableView : UIView <UIEditable> {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	UICollectionView* _collectionView;
	long long _updateAnimationCount;
	UIEdgeInsets _defaultLayoutMargins;
	SCD_Struct_UI20 _reusableViewFlags;
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
@property (nonatomic,readonly) BOOL canBeEdited; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBeEdited;
-(void)_setCollectionView:(id)arg1 ;
-(id)_collectionView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateMaskViewUsingAttributes:(id)arg1 previousRemoveMaskAfterAnimation:(BOOL)arg2 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(BOOL)isEditing;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(BOOL)_appliesLayoutAttributesMaskingToReusableView;
-(BOOL)_wasDequeued;
-(BOOL)_isInUpdateAnimation;
-(void)_updateDefaultLayoutMarginsUsingAttributes:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)_arePreferredAttributesValid;
-(void)_setIsBeingReused:(BOOL)arg1 ;
-(void)_markAsDequeued;
-(void)_addUpdateAnimation;
-(BOOL)_isBeingReused;
-(void)_setBaseLayoutAttributes:(id)arg1 ;
-(void)_clearUpdateAnimation;
-(void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(void)_setMaskView:(id)arg1 ;
-(void)_setReuseIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_performBlocksForReuse;
-(void)_updateMaskingUsingAttributes:(id)arg1 ;
-(void)_addBackdropViewForMaskingIfNeeded;
-(void)_removeExistingBackdropViewForMasking;
-(void)_invalidatePreferredAttributes;
-(BOOL)_shouldConstrainWidth;
-(BOOL)_shouldConstrainHeight;
-(void)_performBlockWhenReused:(/*^block*/id)arg1 ;
-(void)setPreferredAttributesValid:(BOOL)arg1 ;
-(BOOL)_isStyledAsHeaderFromLayoutAttributes:(id)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)_concreteDefaultLayoutMargins;
-(id)_layoutAttributes;
-(void)_setShouldConstrainWidth:(BOOL)arg1 ;
-(void)_setShouldConstrainHeight:(BOOL)arg1 ;
-(NSString *)reuseIdentifier;
-(BOOL)_isFocusableWhenStyledAsHeader;
-(BOOL)_disableRasterizeInAnimations;
@end

