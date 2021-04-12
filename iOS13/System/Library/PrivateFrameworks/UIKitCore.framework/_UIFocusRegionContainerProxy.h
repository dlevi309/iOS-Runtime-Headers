/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusRegionContainer.h>

@protocol UIFocusItemContainer;
@class NSString, NSArray, UIView;

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer> {

	BOOL _isFocusEnvironment;
	id<UIFocusItemContainer> _itemContainer;

}

@property (nonatomic,retain) id<UIFocusItemContainer> itemContainer;                                                          //@synthesize itemContainer=_itemContainer - In the implementation block
@property (assign,nonatomic) BOOL isFocusEnvironment;                                                                         //@synthesize isFocusEnvironment=_isFocusEnvironment - In the implementation block
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
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_focusEnvironment;
-(id)initWithItemContainer:(id)arg1 ;
-(id<UIFocusItemContainer>)itemContainer;
-(void)setItemContainer:(id<UIFocusItemContainer>)arg1 ;
-(BOOL)isFocusEnvironment;
-(void)setIsFocusEnvironment:(BOOL)arg1 ;
@end

