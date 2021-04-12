/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAutoScrollerDelegate.h>

@protocol PXPeopleSwipeSelectionManagerDelegate;
@class UIScrollView, UIGestureRecognizer, NSIndexPath, NSSet, PXUIAutoScroller, NSString;

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate> {

	SCD_Struct_PX38 _needsUpdateFlags;
	SCD_Struct_PX24 _delegateFlags;
	id<PXPeopleSwipeSelectionManagerDelegate> _delegate;
	unsigned long long _state;
	UIScrollView* _scrollView;
	UIGestureRecognizer* _swipeGestureRecognizer;
	NSIndexPath* _startingIndexPath;
	NSIndexPath* _currentIndexPath;
	NSSet* _selectedIndexPathsBeforeSwipe;
	id _pausingChangesToken;
	PXUIAutoScroller* _autoScroller;

}

@property (assign,nonatomic) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSIndexPath * startingIndexPath;                                        //@synthesize startingIndexPath=_startingIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                                         //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (nonatomic,copy) NSSet * selectedIndexPathsBeforeSwipe;                                    //@synthesize selectedIndexPathsBeforeSwipe=_selectedIndexPathsBeforeSwipe - In the implementation block
@property (nonatomic,retain) id pausingChangesToken;                                                 //@synthesize pausingChangesToken=_pausingChangesToken - In the implementation block
@property (nonatomic,readonly) PXUIAutoScroller * autoScroller;                                      //@synthesize autoScroller=_autoScroller - In the implementation block
@property (nonatomic,readonly) BOOL isSelecting; 
@property (assign,nonatomic,__weak) id<PXPeopleSwipeSelectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * swipeGestureRecognizer;                         //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScrollView:(id)arg1 ;
-(void)_invalidateSelectedIndexPaths;
-(BOOL)isSelecting;
-(id)init;
-(id<PXPeopleSwipeSelectionManagerDelegate>)delegate;
-(id)_itemIndexPathClosestAboveLocation:(CGPoint)arg1 ;
-(NSIndexPath *)currentIndexPath;
-(void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3 ;
-(void)_endSelection;
-(void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2 ;
-(void)setDelegate:(id<PXPeopleSwipeSelectionManagerDelegate>)arg1 ;
-(void)_updateSelectedIndexPaths;
-(id)_itemIndexPathClosestLeadingLocation:(CGPoint)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)_beginSelectionFromIndexPath:(id)arg1 ;
-(unsigned long long)state;
-(id)_itemIndexPathAtLocation:(CGPoint)arg1 ;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)startingIndexPath;
-(void)_handleSwipeSelectionGesture:(id)arg1 ;
-(void)setStartingIndexPath:(NSIndexPath *)arg1 ;
-(NSSet *)selectedIndexPathsBeforeSwipe;
-(void)setSelectedIndexPathsBeforeSwipe:(NSSet *)arg1 ;
-(id)pausingChangesToken;
-(void)setPausingChangesToken:(id)arg1 ;
-(PXUIAutoScroller *)autoScroller;
-(UIScrollView *)scrollView;
-(UIGestureRecognizer *)swipeGestureRecognizer;
-(void)dealloc;
@end

