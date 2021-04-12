/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIFocusSystem, _UIFocusRegionMapSnapshot;

@interface _UIFocusRegionMap : NSObject {

	UIView* _rootView;
	UIFocusSystem* _focusSystem;
	_UIFocusRegionMapSnapshot* _lastSnapshot;
	CGRect _minimumSearchArea;

}

@property (nonatomic,retain) _UIFocusRegionMapSnapshot * lastSnapshot;              //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UIView * rootView;                              //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,retain) UIFocusSystem * focusSystem;                           //@synthesize focusSystem=_focusSystem - In the implementation block
@property (assign,nonatomic) CGRect minimumSearchArea;                              //@synthesize minimumSearchArea=_minimumSearchArea - In the implementation block
-(id)debugQuickLookObject;
-(UIFocusSystem *)focusSystem;
-(id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(CGRect)arg3 includingFocusedView:(BOOL)arg4 ;
-(id)_closestFocusableRegionInArray:(id)arg1 toPoint:(CGPoint)arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(BOOL)arg5 includingFocusedView:(BOOL)arg6 ;
-(CGRect)_viewSearchRectForFocusedFrame:(CGRect)arg1 focusCandidateSearchRect:(CGRect)arg2 includesFocusedFrame:(BOOL)arg3 ;
-(CGPoint)_focusCandidateSearchOriginForFocusedFrame:(CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(CGRect)arg3 ;
-(id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long*)arg3 ;
-(CGRect)_focusCandidateSearchRectForFocusedFrame:(CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(CGRect)arg3 ;
-(id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2 ;
-(UIView *)rootView;
-(void)setFocusSystem:(UIFocusSystem *)arg1 ;
-(CGRect)minimumSearchArea;
-(void)setLastSnapshot:(_UIFocusRegionMapSnapshot *)arg1 ;
-(id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3 ;
-(id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3 ;
-(CGRect)_rectThatJustBarelyIntersectsRect:(CGRect)arg1 startingRect:(CGRect)arg2 ;
-(CGRect)_viewSearchRectForSnapshotRect:(CGRect)arg1 ;
-(id)initWithRootView:(id)arg1 focusSystem:(id)arg2 ;
-(id)nearestCandidateFromRect:(CGRect)arg1 ;
-(BOOL)_containsFocusableRegionForView:(id)arg1 ;
-(void)setMinimumSearchArea:(CGRect)arg1 ;
-(_UIFocusRegionMapSnapshot *)lastSnapshot;
-(void)setRootView:(UIView *)arg1 ;
@end

