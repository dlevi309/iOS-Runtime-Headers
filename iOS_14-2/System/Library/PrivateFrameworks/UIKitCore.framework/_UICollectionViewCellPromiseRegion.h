/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILegacyFocusRegion.h>
#import <UIKitCore/_UIFocusRegionContainer.h>

@class UICollectionView, UIScrollView, UICollectionViewLayoutAttributes, NSString, NSArray, UIView;

@interface _UICollectionViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer> {

	UICollectionView* _collectionView;
	UIScrollView* _parentScrollView;
	UICollectionViewLayoutAttributes* _layoutAttributes;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * parentScrollView;                                                          //@synthesize parentScrollView=_parentScrollView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;                                             //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
-(BOOL)canBecomeFocused;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(BOOL)_isTransparentFocusRegion;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(void)setNeedsFocusUpdate;
-(UICollectionView *)collectionView;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(NSString *)description;
-(BOOL)_isEligibleForFocusInteraction;
-(CGRect)_focusRegionFrame;
-(id)_preferredFocusRegionCoordinateSpace;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id)_focusRegionGuides;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(UIScrollView *)parentScrollView;
-(id)_fulfillPromisedFocusRegion;
-(BOOL)_legacy_isEligibleForFocusInteraction;
-(BOOL)_isPromiseFocusRegion;
-(id)_focusDebugOverlayParentView;
-(void)updateFocusIfNeeded;
-(void)setParentScrollView:(UIScrollView *)arg1 ;
-(id)_focusRegionView;
-(id)_focusRegionFocusSystem;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
@end

