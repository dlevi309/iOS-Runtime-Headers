/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
-(BOOL)canBecomeFocused;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)nextResponder;
-(NSArray *)preferredFocusEnvironments;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(void)setNeedsFocusUpdate;
-(id<UICoordinateSpace>)coordinateSpace;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(CGRect)frame;
-(CGRect)accessibilityFrameInContainerSpace;
-(void)setAccessibilityFrameInContainerSpace:(CGRect)arg1 ;
-(unsigned long long)accessibilityTraits;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(id)_preferredFocusRegionCoordinateSpace;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(CGRect)accessibilityFrame;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(NSString *)accessibilityHint;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)_updateFocusLayerFrame;
-(void)updateFocusIfNeeded;
-(void)setAreChildrenFocused:(BOOL)arg1 ;
-(void)_destroyFocusLayer;
-(id)_firstViewAncestor;
-(BOOL)areChildrenFocused;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

