/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIFocusItem.h>
#import <UIKit/UIFocusItemContainer.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate.h>
#import <UIKitCore/_UIFocusRegionContainer.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSArray, NSString, UIView;

@interface UIAccessibilityElement : UIResponder <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, UIAccessibilityIdentification> {

	BOOL _areChildrenFocused;
	CGRect _accessibilityFrameInContainerSpace;

}

@property (assign,nonatomic,__weak) id accessibilityContainer; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (nonatomic,retain) NSString * accessibilityLabel; 
@property (nonatomic,retain) NSString * accessibilityHint; 
@property (nonatomic,retain) NSString * accessibilityValue; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) CGRect accessibilityFrameInContainerSpace;                                                       //@synthesize accessibilityFrameInContainerSpace=_accessibilityFrameInContainerSpace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
-(void)dealloc;
-(CGRect)frame;
-(CGRect)accessibilityFrame;
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)_destroyFocusLayer;
-(void)_updateFocusLayerFrame;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id)_firstViewAncestor;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)canBecomeFocused;
-(BOOL)areChildrenFocused;
-(void)setAreChildrenFocused:(BOOL)arg1 ;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)setAccessibilityFrameInContainerSpace:(CGRect)arg1 ;
-(id)nextResponder;
-(CGRect)accessibilityFrameInContainerSpace;
@end

