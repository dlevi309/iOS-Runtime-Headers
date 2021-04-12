/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILayoutGuide.h>
#import <UIKit/UIFocusItem.h>
#import <UIKitCore/_UILegacyFocusRegion.h>
#import <UIKitCore/_UIFocusRegionContainer.h>
#import <UIKitCore/_UIFocusGuideRegionDelegate.h>

@class NSArray, UIView, NSString;

@interface UIFocusGuide : UILayoutGuide <UIFocusItem, _UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate> {

	BOOL _didSetPreferredFocusedEnvironments;
	BOOL _enabled;
	BOOL _automaticallyPreferOwningView;
	BOOL _automaticallyDisableWhenIntersectingFocus;
	NSArray* _preferredFocusEnvironments;

}

@property (assign,setter=_setAutomaticallyPreferOwningView:,getter=_automaticallyPreferOwningView,nonatomic) BOOL automaticallyPreferOwningView;                                                  //@synthesize automaticallyPreferOwningView=_automaticallyPreferOwningView - In the implementation block
@property (assign,setter=_setAutomaticallyDisableWhenIntersectingFocus:,getter=_automaticallyDisableWhenIntersectingFocus,nonatomic) BOOL automaticallyDisableWhenIntersectingFocus;              //@synthesize automaticallyDisableWhenIntersectingFocus=_automaticallyDisableWhenIntersectingFocus - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                                                                       //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSArray * preferredFocusEnvironments;                                                                                                                                  //@synthesize preferredFocusEnvironments=_preferredFocusEnvironments - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,readonly) id<UIFocusItem> focusItemForSorting; 
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(CGRect)frame;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(UIView *)preferredFocusedView;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
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
-(void)setPreferredFocusedView:(UIView *)arg1 ;
-(void)_setAutomaticallyPreferOwningView:(BOOL)arg1 ;
-(id)_encodablePreferredFocusEnvironments;
-(BOOL)_automaticallyPreferOwningView;
-(void)setPreferredFocusEnvironments:(NSArray *)arg1 ;
-(id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2 ;
-(void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2 ;
-(id<UIFocusItem>)focusItemForSorting;
-(void)_didUpdateFocusToPreferredFocusedView;
-(BOOL)_uili_isFocusGuide;
-(BOOL)_automaticallyDisableWhenIntersectingFocus;
-(void)_setAutomaticallyDisableWhenIntersectingFocus:(BOOL)arg1 ;
@end

