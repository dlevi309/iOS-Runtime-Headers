/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFModuleTitleViewDelegate.h>

@class WFAction, WFActionDrawerCoordinator, UIViewController, WFDragGestureRecognizer, WFDragController, WFModuleTitleView, UIButton, NSString;

@interface WFActionDrawerActionTableViewCell : UITableViewCell <WFModuleTitleViewDelegate> {

	WFAction* _action;
	WFActionDrawerCoordinator* _coordinator;
	UIViewController* _viewController;
	WFDragGestureRecognizer* _dragRecognizer;
	WFDragController* _dragController;
	WFModuleTitleView* _titleView;
	UIButton* _infoButton;

}

@property (nonatomic,retain) WFAction * action;                                           //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) WFDragGestureRecognizer * dragRecognizer;                    //@synthesize dragRecognizer=_dragRecognizer - In the implementation block
@property (nonatomic,retain) WFDragController * dragController;                           //@synthesize dragController=_dragController - In the implementation block
@property (nonatomic,__weak,readonly) WFModuleTitleView * titleView;                      //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                       //@synthesize infoButton=_infoButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(WFModuleTitleView *)titleView;
-(void)setCoordinator:(WFActionDrawerCoordinator *)arg1 ;
-(BOOL)isAccessibilityElement;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)setInfoButton:(UIButton *)arg1 ;
-(UIViewController *)viewController;
-(UIButton *)infoButton;
-(WFDragController *)dragController;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(WFDragGestureRecognizer *)dragRecognizer;
-(void)setDragRecognizer:(WFDragGestureRecognizer *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFActionDrawerCoordinator *)coordinator;
-(void)infoButtonPressed;
-(void)configureWithAction:(id)arg1 coordinator:(id)arg2 viewController:(id)arg3 ;
-(void)setDragController:(WFDragController *)arg1 ;
@end

