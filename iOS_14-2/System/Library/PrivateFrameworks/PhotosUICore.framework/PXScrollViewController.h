/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTilingScrollController.h>

@protocol PXTilingScrollControllerUpdateDelegate, PXAnonymousScrollView, UICoordinateSpace;
@class PXTilingScrollInfo, NSHashTable, NSObject, NSString;

@interface PXScrollViewController : NSObject <PXTilingScrollController> {

	NSHashTable* _willLayoutSubviewsObservers;
	NSHashTable* _didLayoutSubviewsObservers;
	NSHashTable* _didScrollObservers;
	BOOL _respectsContentZOrder;
	BOOL _isDecelerating;
	BOOL _isDragging;
	BOOL _isTracking;
	BOOL _isScrubbing;
	BOOL _isManuallyChanging;
	BOOL _deferContentOffsetUpdates;
	id<PXTilingScrollControllerUpdateDelegate> _updateDelegate;
	PXTilingScrollInfo* _scrollInfo;
	NSObject*<PXAnonymousScrollView> _scrollView;
	NSObject*<UICoordinateSpace> _contentCoordinateSpace;
	NSHashTable* __observers;
	long long _activeScrollAnimations;
	CGSize presentedContentSize;
	CGSize _scrollViewContentSize;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) NSHashTable * _observers;                                                    //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,readonly) long long activeScrollAnimations;                                            //@synthesize activeScrollAnimations=_activeScrollAnimations - In the implementation block
@property (nonatomic,readonly) CGSize scrollViewReferenceSize; 
@property (nonatomic,readonly) CGRect scrollViewActiveRect; 
@property (nonatomic,readonly) CGRect scrollViewVisibleRect; 
@property (nonatomic,readonly) CGRect scrollViewConstrainedVisibleRect; 
@property (nonatomic,readonly) CGRect scrollViewTargetRect; 
@property (nonatomic,readonly) CGSize scrollViewContentSize;                                                //@synthesize scrollViewContentSize=_scrollViewContentSize - In the implementation block
@property (assign,nonatomic) CGRect scrollViewContentBounds; 
@property (nonatomic,readonly) NSObject*<PXAnonymousScrollView> scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatingScroll; 
@property (nonatomic,readonly) BOOL isDecelerating;                                                         //@synthesize isDecelerating=_isDecelerating - In the implementation block
@property (nonatomic,readonly) BOOL isDragging;                                                             //@synthesize isDragging=_isDragging - In the implementation block
@property (nonatomic,readonly) BOOL isTracking;                                                             //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) BOOL isScrubbing;                                                            //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (nonatomic,readonly) BOOL isManuallyChanging;                                                     //@synthesize isManuallyChanging=_isManuallyChanging - In the implementation block
@property (nonatomic,readonly) BOOL hasWindow; 
@property (nonatomic,readonly) NSObject*<UICoordinateSpace> contentCoordinateSpace;                         //@synthesize contentCoordinateSpace=_contentCoordinateSpace - In the implementation block
@property (assign,nonatomic) CGPoint visibleOrigin; 
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                     //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) BOOL deferContentOffsetUpdates;                                                //@synthesize deferContentOffsetUpdates=_deferContentOffsetUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingScrollControllerUpdateDelegate> updateDelegate;              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) CGRect activeRect; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect constrainedVisibleRect; 
@property (nonatomic,readonly) CGRect targetRect; 
@property (assign,nonatomic) CGRect contentBounds; 
@property (nonatomic,copy) PXTilingScrollInfo * scrollInfo;                                                 //@synthesize scrollInfo=_scrollInfo - In the implementation block
@property (assign,nonatomic) BOOL respectsContentZOrder;                                                    //@synthesize respectsContentZOrder=_respectsContentZOrder - In the implementation block
@property (assign,nonatomic) CGSize presentedContentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)contentBounds;
-(void)unregisterObserver:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)setNeedsUpdate;
-(CGRect)scrollViewVisibleRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(CGRect)scrollViewTargetRect;
-(id)init;
-(BOOL)isTracking;
-(PXTilingScrollInfo *)scrollInfo;
-(UIEdgeInsets)contentInset;
-(void)scrollViewLayoutIfNeeded;
-(CGSize)scrollViewReferenceSize;
-(NSHashTable *)_observers;
-(CGRect)scrollViewContentBounds;
-(CGPoint)visibleOrigin;
-(BOOL)deferContentOffsetUpdates;
-(void)setContentBounds:(CGRect)arg1 ;
-(void)setScrollInfo:(PXTilingScrollInfo *)arg1 ;
-(CGRect)constrainedVisibleRect;
-(void)setPresentedContentSize:(CGSize)arg1 ;
-(void)setActiveScrollAnimations:(long long)arg1 ;
-(void)scrollViewWillLayout;
-(void)scrollViewDidLayout;
-(void)scrollViewWillBeginScrolling;
-(void)scrollViewDidEndScrolling;
-(void)willEndScrollingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)scrollViewContentBoundsDidChange;
-(BOOL)scrollViewShouldScrollToTop;
-(void)scrollViewWillBeginScrollingAnimationTowardsContentEdges:(unsigned long long)arg1 ;
-(void)scrollViewDidEndScrollingAnimation;
-(void)performManualChange:(/*^block*/id)arg1 ;
-(BOOL)isManuallyChanging;
-(long long)activeScrollAnimations;
-(BOOL)isDecelerating;
-(BOOL)isAnimatingScroll;
-(void)updateIfNeeded;
-(CGSize)referenceSize;
-(CGRect)targetRect;
-(CGSize)scrollViewContentSize;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 avoidingContentInsetEdges:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(CGSize)presentedContentSize;
-(void)setScrollViewNeedsLayout;
-(void)stopScrollingAndZoomingAnimations;
-(BOOL)isDragging;
-(CGRect)scrollViewActiveRect;
-(void)scrollToEdge:(unsigned)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasWindow;
-(void)addSubview:(id)arg1 ;
-(void)setDeferContentOffsetUpdates:(BOOL)arg1 ;
-(void)addSubviewToScrollView:(id)arg1 ;
-(NSObject*<UICoordinateSpace>)contentCoordinateSpace;
-(void)applyScrollInfo:(id)arg1 ;
-(void)setRespectsContentZOrder:(BOOL)arg1 ;
-(id<PXTilingScrollControllerUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<PXTilingScrollControllerUpdateDelegate>)arg1 ;
-(CGRect)activeRect;
-(BOOL)respectsContentZOrder;
-(void)setScrollViewContentBounds:(CGRect)arg1 ;
-(void)addFloatingSublayer:(id)arg1 forAxis:(long long)arg2 ;
-(void)scrollToEdge:(unsigned)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)scrollViewDidScroll;
-(NSObject*<PXAnonymousScrollView>)scrollView;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
-(BOOL)isScrubbing;
-(CGRect)scrollViewConstrainedVisibleRect;
-(BOOL)isScrolledAtEdge:(unsigned)arg1 tolerance:(double)arg2 ;
@end

