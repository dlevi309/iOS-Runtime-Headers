/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUInteractiveDismissalController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PXVerticalSwipeGestureRecognizerHelperDelegate.h>

@class UIPanGestureRecognizer, PXVerticalSwipeGestureRecognizerHelper, PUChangeDirectionValueFilter, PUSwipedDownTileTracker, NSString;

@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate> {

	BOOL _handlingPanGestureRecognizer;
	UIPanGestureRecognizer* __panGestureRecognizer;
	PXVerticalSwipeGestureRecognizerHelper* _verticalSwipeGestureRecognzierHelper;
	PUChangeDirectionValueFilter* __dismissGestureDirectionValueFilter;
	PUSwipedDownTileTracker* __swipedDownTileTracker;

}

@property (setter=_setPanGestureRecognizer:,nonatomic,retain) UIPanGestureRecognizer * _panGestureRecognizer;                                                //@synthesize _panGestureRecognizer=__panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) PXVerticalSwipeGestureRecognizerHelper * verticalSwipeGestureRecognzierHelper;                                                //@synthesize verticalSwipeGestureRecognzierHelper=_verticalSwipeGestureRecognzierHelper - In the implementation block
@property (assign,setter=_setHandlingPanGestureRecognizer:,getter=_isHandlingPanGestureRecognizer,nonatomic) BOOL handlingPanGestureRecognizer;              //@synthesize handlingPanGestureRecognizer=_handlingPanGestureRecognizer - In the implementation block
@property (setter=_setDismissGestureDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _dismissGestureDirectionValueFilter;              //@synthesize _dismissGestureDirectionValueFilter=__dismissGestureDirectionValueFilter - In the implementation block
@property (setter=_setSwipedDownTileTracker:,nonatomic,retain) PUSwipedDownTileTracker * _swipedDownTileTracker;                                             //@synthesize _swipedDownTileTracker=__swipedDownTileTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)init;
-(BOOL)_isHandlingPanGestureRecognizer;
-(void)_setHandlingPanGestureRecognizer:(BOOL)arg1 ;
-(void)_setDismissGestureDirectionValueFilter:(id)arg1 ;
-(void)_setSwipedDownTileTracker:(id)arg1 ;
-(PUSwipedDownTileTracker *)_swipedDownTileTracker;
-(void)updateGestureRecognizersWithHostingView:(id)arg1 ;
-(BOOL)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2 ;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(void)_setPanGestureRecognizer:(id)arg1 ;
-(PXVerticalSwipeGestureRecognizerHelper *)verticalSwipeGestureRecognzierHelper;
-(PUChangeDirectionValueFilter *)_dismissGestureDirectionValueFilter;
-(UIPanGestureRecognizer *)_panGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dealloc;
@end

