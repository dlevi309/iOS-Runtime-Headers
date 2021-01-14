/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusRegionContainer.h>

@protocol UIFocusItemContainer;
@class NSArray, UIView, NSString;

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer> {

	BOOL _isFocusEnvironment;
	id<UIFocusItemContainer> _itemContainer;

}

@property (nonatomic,retain) id<UIFocusItemContainer> itemContainer;                                                          //@synthesize itemContainer=_itemContainer - In the implementation block
@property (assign,nonatomic) BOOL isFocusEnvironment;                                                                         //@synthesize isFocusEnvironment=_isFocusEnvironment - In the implementation block
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(void)setNeedsFocusUpdate;
-(id)_focusEnvironment;
-(id)initWithItemContainer:(id)arg1 ;
-(BOOL)isFocusEnvironment;
-(void)setIsFocusEnvironment:(BOOL)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_preferredFocusRegionCoordinateSpace;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id<UIFocusItemContainer>)itemContainer;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(void)setItemContainer:(id<UIFocusItemContainer>)arg1 ;
-(void)updateFocusIfNeeded;
@end

