/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDragCoordinator;
#import <WorkflowUI/WorkflowUI-Structs.h>
@class UIViewController, UIGestureRecognizer, NSDictionary, UIView, NSHashTable;

@interface WFDragController : NSObject {

	BOOL _removedOnCompletion;
	id<WFDragCoordinator> _coordinator;
	UIViewController* _initialViewController;
	UIGestureRecognizer* _gestureRecognizer;
	NSDictionary* _eventDictionary;
	UIView* _view;
	NSHashTable* _currentViewControllers;
	CGPoint _centerOffset;

}

@property (assign,nonatomic,__weak) UIViewController * initialViewController;               //@synthesize initialViewController=_initialViewController - In the implementation block
@property (assign,nonatomic) CGPoint centerOffset;                                          //@synthesize centerOffset=_centerOffset - In the implementation block
@property (nonatomic,retain) UIView * view;                                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) NSHashTable * currentViewControllers;                            //@synthesize currentViewControllers=_currentViewControllers - In the implementation block
@property (nonatomic,__weak,readonly) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,__weak,readonly) id<WFDragCoordinator> coordinator;                    //@synthesize coordinator=_coordinator - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (assign,nonatomic) BOOL removedOnCompletion;                                      //@synthesize removedOnCompletion=_removedOnCompletion - In the implementation block
@property (nonatomic,copy) NSDictionary * eventDictionary;                                  //@synthesize eventDictionary=_eventDictionary - In the implementation block
-(BOOL)isActive;
-(void)reset;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)loadView;
-(BOOL)isViewLoaded;
-(void)updateView;
-(UIGestureRecognizer *)gestureRecognizer;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(CGPoint)centerOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(id<WFDragCoordinator>)coordinator;
-(BOOL)removedOnCompletion;
-(UIViewController *)initialViewController;
-(NSDictionary *)eventDictionary;
-(void)setEventDictionary:(NSDictionary *)arg1 ;
-(BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(/*^block*/id)arg2 ;
-(CGPoint)locationOfViewInView:(id)arg1 ;
-(void)gestureRecognizerAction;
-(void)updateCurrentViewControllers;
-(void)didEnterViewController:(id)arg1 ;
-(void)didExitViewController:(id)arg1 ;
-(void)didMoveInViewControllers:(id)arg1 ;
-(void)setInitialViewController:(UIViewController *)arg1 ;
-(NSHashTable *)currentViewControllers;
-(void)setCurrentViewControllers:(NSHashTable *)arg1 ;
@end

