/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFDragCoordinator;
#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(UIGestureRecognizer *)gestureRecognizer;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(UIViewController *)initialViewController;
-(void)setInitialViewController:(UIViewController *)arg1 ;
-(BOOL)isActive;
-(void)setView:(UIView *)arg1 ;
-(NSDictionary *)eventDictionary;
-(CGPoint)centerOffset;
-(UIView *)view;
-(BOOL)isViewLoaded;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(void)updateView;
-(void)reset;
-(BOOL)removedOnCompletion;
-(void)loadView;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(id<WFDragCoordinator>)coordinator;
-(void)setEventDictionary:(NSDictionary *)arg1 ;
-(void)updateCurrentViewControllers;
-(void)setCurrentViewControllers:(NSHashTable *)arg1 ;
-(CGPoint)locationOfViewInView:(id)arg1 ;
-(NSHashTable *)currentViewControllers;
-(void)gestureRecognizerAction;
-(BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(/*^block*/id)arg2 ;
-(void)didEnterViewController:(id)arg1 ;
-(void)didExitViewController:(id)arg1 ;
-(void)didMoveInViewControllers:(id)arg1 ;
@end

