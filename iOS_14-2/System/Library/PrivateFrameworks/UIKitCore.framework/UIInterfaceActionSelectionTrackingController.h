/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIFocusedInterfaceActionPressDelegate.h>

@class UIView, UIScrollView, NSArray, UILongPressGestureRecognizer, _UIInterfaceActionSelectionDelayGestureRecognizer, UIGestureRecognizer, NSMutableSet, _UIInterfaceActionSelectByPressGestureRecognizer, UISelectionFeedbackGenerator, NSPointerArray, UIHoverGestureRecognizer, NSString;

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate> {

	BOOL _scrubbingEnabled;
	BOOL _selectByPressGestureEnabled;
	BOOL _selectionFeedbackEnabled;
	BOOL _selectByIndirectPointerTouchEnabled;
	UIView* _trackableContainerView;
	UIScrollView* _actionsScrollView;
	NSArray* _representationViews;
	UILongPressGestureRecognizer* _selectionGestureRecognizer;
	_UIInterfaceActionSelectionDelayGestureRecognizer* _selectionDelayGestureRecognizer;
	UIGestureRecognizer* _systemProvidedGestureRecognizer;
	NSMutableSet* _viewsRequiringSelectionGestureDisabling;
	_UIInterfaceActionSelectByPressGestureRecognizer* _selectByPressGestureRecognizer;
	UISelectionFeedbackGenerator* _selectionRetargetFeedbackGenerator;
	NSPointerArray* _weakCooperatingSelectionTrackingControllers;
	id _scrollViewWillBeginDraggingNotificationToken;
	id _scrollViewDidEndDraggingNotificationToken;
	id _scrollViewDidEndDeceleratingNotificationToken;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	CGPoint _actionSelectionInitialLocationInContainerView;

}

@property (nonatomic,readonly) CGPoint actionSelectionInitialLocationInContainerView;                                            //@synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionGestureRecognizer;                                        //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSelectionDelayGestureRecognizer * selectionDelayGestureRecognizer;              //@synthesize selectionDelayGestureRecognizer=_selectionDelayGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * systemProvidedGestureRecognizer;                                            //@synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * viewsRequiringSelectionGestureDisabling;                                           //@synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling - In the implementation block
@property (nonatomic,retain) _UIInterfaceActionSelectByPressGestureRecognizer * selectByPressGestureRecognizer;                  //@synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionRetargetFeedbackGenerator;                                  //@synthesize selectionRetargetFeedbackGenerator=_selectionRetargetFeedbackGenerator - In the implementation block
@property (nonatomic,retain) NSPointerArray * weakCooperatingSelectionTrackingControllers;                                       //@synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers - In the implementation block
@property (nonatomic,retain) id scrollViewWillBeginDraggingNotificationToken;                                                    //@synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken - In the implementation block
@property (nonatomic,retain) id scrollViewDidEndDraggingNotificationToken;                                                       //@synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken - In the implementation block
@property (nonatomic,retain) id scrollViewDidEndDeceleratingNotificationToken;                                                   //@synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken - In the implementation block
@property (nonatomic,retain) UIHoverGestureRecognizer * hoverGestureRecognizer;                                                  //@synthesize hoverGestureRecognizer=_hoverGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIView * trackableContainerView;                                                             //@synthesize trackableContainerView=_trackableContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * actionsScrollView;                                                            //@synthesize actionsScrollView=_actionsScrollView - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                              //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectByPressGestureEnabled;                                                                   //@synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectionFeedbackEnabled;                                                                      //@synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectByIndirectPointerTouchEnabled;                                                           //@synthesize selectByIndirectPointerTouchEnabled=_selectByIndirectPointerTouchEnabled - In the implementation block
@property (nonatomic,retain) NSArray * representationViews;                                                                      //@synthesize representationViews=_representationViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIGestureRecognizer *)systemProvidedGestureRecognizer;
-(UISelectionFeedbackGenerator *)selectionRetargetFeedbackGenerator;
-(id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2 ;
-(void)setSelectionRetargetFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(_UIInterfaceActionSelectByPressGestureRecognizer *)selectByPressGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setSelectByIndirectPointerTouchEnabled:(BOOL)arg1 ;
-(void)_setSystemProvidedGestureRecognizer:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setRepresentationViews:(NSArray *)arg1 ;
-(void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setSelectionFeedbackEnabled:(BOOL)arg1 ;
-(void)setScrollViewWillBeginDraggingNotificationToken:(id)arg1 ;
-(void)_handleSystemProvidedGestureRecognizer:(id)arg1 ;
-(BOOL)selectionFeedbackEnabled;
-(BOOL)selectByPressGestureEnabled;
-(UILongPressGestureRecognizer *)selectionGestureRecognizer;
-(void)_initializeSelectionGestureRecognizer;
-(id)scrollViewDidEndDeceleratingNotificationToken;
-(void)handlePressedFocusedInterfaceAction:(id)arg1 ;
-(NSMutableSet *)viewsRequiringSelectionGestureDisabling;
-(void)_invokeHandlerForInterfaceAction:(id)arg1 ;
-(void)_registerForScrollViewNotifications;
-(void)setWeakCooperatingSelectionTrackingControllers:(NSPointerArray *)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(NSPointerArray *)weakCooperatingSelectionTrackingControllers;
-(void)setTrackableContainerView:(UIView *)arg1 ;
-(UIView *)trackableContainerView;
-(id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1 ;
-(id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1 ;
-(id)scrollViewDidEndDraggingNotificationToken;
-(void)_noteScrollView:(id)arg1 isUserScrolling:(BOOL)arg2 ;
-(void)_unregisterForScrollViewNotifications;
-(CGPoint)actionSelectionInitialLocationInContainerView;
-(BOOL)scrubbingEnabled;
-(BOOL)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1 ;
-(void)setHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg1 ;
-(UIScrollView *)actionsScrollView;
-(id)focusedInterfaceAction;
-(BOOL)selectByIndirectPointerTouchEnabled;
-(id)_allGestureRecognizers;
-(void)setScrollViewDidEndDraggingNotificationToken:(id)arg1 ;
-(void)setCooperatingSelectionTrackingControllers:(id)arg1 ;
-(id)_interfaceActionOfFocusedRepresentationView;
-(void)_handleActionSelectionGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1 ;
-(id)scrollViewWillBeginDraggingNotificationToken;
-(void)_clearSystemProvidedGestureRecognizer;
-(void)deselectAllActions;
-(void)setSelectByPressGestureEnabled:(BOOL)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(void)setScrollViewDidEndDeceleratingNotificationToken:(id)arg1 ;
-(UIHoverGestureRecognizer *)hoverGestureRecognizer;
-(BOOL)_isPresentedAndVisible;
-(void)setSelectByPressGestureRecognizer:(_UIInterfaceActionSelectByPressGestureRecognizer *)arg1 ;
-(id)_allActionViewsIncludingCooperatingActionViews;
-(void)setActionsScrollView:(UIScrollView *)arg1 ;
-(NSArray *)representationViews;
-(_UIInterfaceActionSelectionDelayGestureRecognizer *)selectionDelayGestureRecognizer;
-(void)_rolloverActionChanged:(id)arg1 ;
-(void)dealloc;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
@end

