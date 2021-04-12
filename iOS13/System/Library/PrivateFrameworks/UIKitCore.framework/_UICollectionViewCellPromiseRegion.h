/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILegacyFocusRegion.h>
#import <UIKitCore/_UIFocusRegionContainer.h>

@class UICollectionView, UICollectionViewLayoutAttributes, NSString, NSArray, UIView;

@interface _UICollectionViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer> {

	UICollectionView* _collectionView;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;                                             //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
-(NSString *)description;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(UICollectionView *)collectionView;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)_focusRegionFocusSystem;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_fulfillPromisedFocusRegion;
-(CGRect)_focusRegionFrame;
-(BOOL)_legacy_isEligibleForFocusInteraction;
-(BOOL)_isPromiseFocusRegion;
-(BOOL)_isTransparentFocusRegion;
-(id)_focusRegionView;
-(id)_focusRegionGuides;
-(id)_focusDebugOverlayParentView;
@end

