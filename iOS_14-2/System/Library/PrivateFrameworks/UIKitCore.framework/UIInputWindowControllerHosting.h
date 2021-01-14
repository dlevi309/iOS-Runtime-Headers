/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)resetBackdropHeight;
-(void)removeAllAnimations;
-(CGRect)visibleFrame;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)updateViewConstraints;
-(void)setExtraHostsRequired:(int)arg1 ;
-(int)extraHostsRequired;
-(void)clearInputAssistantViewEdgeConstraints;
-(void)updateEmptyHeightConstraint;
-(UIInputWindowController *)owner;
-(void)performForInputAccessoryBackdropViews:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfHost:(id)arg1 ;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)layoutIfNeeded;
-(id)itemForPurpose:(unsigned long long)arg1 ;
-(void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2 ;
-(BOOL)requiresConstraintUpdate;
-(void)unloadForPlacement;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(id)initWithHost:(id)arg1 ;
-(void)setOwner:(UIInputWindowController *)arg1 ;
-(id)expectedPlacementForHost:(id)arg1 ;
-(id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2 ;
-(NSArray *)allHostingItems;
-(BOOL)host:(id)arg1 isForPurpose:(unsigned long long)arg2 ;
-(UIEdgeInsets)_inputViewPadding;
-(void)_updateBackdropViews;
-(id)placementForHost:(id)arg1 ;
-(void)updateViewSizingConstraints;
-(void)updateConstraintInsets;
-(void)setNeedsLayout;
-(void)reloadForPlacement;
-(void)setRequiresConstraintUpdate:(BOOL)arg1 ;
-(void)clearInputViewEdgeConstraints;
@end

