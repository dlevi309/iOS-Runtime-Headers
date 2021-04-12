/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, UIInputWindowController, NSArray;

@interface UIInputWindowControllerHosting : NSObject {

	NSMutableArray* _hostingItems;
	unsigned long long _currentState;
	BOOL _requiresConstraintUpdate;
	int _extraHostsRequired;
	UIInputWindowController* _owner;

}

@property (assign,nonatomic) int extraHostsRequired;                              //@synthesize extraHostsRequired=_extraHostsRequired - In the implementation block
@property (assign,nonatomic,__weak) UIInputWindowController * owner;              //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain,readonly) NSArray * allHostingItems; 
@property (assign,nonatomic) BOOL requiresConstraintUpdate;                       //@synthesize requiresConstraintUpdate=_requiresConstraintUpdate - In the implementation block
-(void)setOwner:(UIInputWindowController *)arg1 ;
-(UIInputWindowController *)owner;
-(void)layoutIfNeeded;
-(void)setNeedsLayout;
-(void)removeAllAnimations;
-(id)initWithHost:(id)arg1 ;
-(void)updateViewConstraints;
-(CGRect)visibleFrame;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)updateViewSizingConstraints;
-(void)unloadForPlacement;
-(void)reloadForPlacement;
-(id)itemForPurpose:(unsigned long long)arg1 ;
-(NSArray *)allHostingItems;
-(UIEdgeInsets)_inputViewPadding;
-(void)updateConstraintInsets;
-(void)clearInputViewEdgeConstraints;
-(void)resetBackdropHeight;
-(void)_updateBackdropViews;
-(void)clearInputAssistantViewEdgeConstraints;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2 ;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(BOOL)requiresConstraintUpdate;
-(void)setRequiresConstraintUpdate:(BOOL)arg1 ;
-(void)updateEmptyHeightConstraint;
-(void)performForInputAccessoryBackdropViews:(/*^block*/id)arg1 ;
-(void)setExtraHostsRequired:(int)arg1 ;
-(unsigned long long)indexOfHost:(id)arg1 ;
-(id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2 ;
-(id)placementForHost:(id)arg1 ;
-(id)expectedPlacementForHost:(id)arg1 ;
-(BOOL)host:(id)arg1 isForPurpose:(unsigned long long)arg2 ;
-(int)extraHostsRequired;
@end

