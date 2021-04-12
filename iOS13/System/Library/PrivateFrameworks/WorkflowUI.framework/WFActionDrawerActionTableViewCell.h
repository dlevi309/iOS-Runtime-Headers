/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/WFModuleTitleViewDelegate.h>

@protocol WFActionDrawerActionTableViewCellDelegate;
@class WFAction, WFDragGestureRecognizer, WFModuleTitleView, UIButton, WFDragController, NSString;

@interface WFActionDrawerActionTableViewCell : UITableViewCell <WFModuleTitleViewDelegate> {

	WFAction* _action;
	WFDragGestureRecognizer* _dragRecognizer;
	id<WFActionDrawerActionTableViewCellDelegate> _delegate;
	WFModuleTitleView* _titleView;
	UIButton* _infoButton;

}

@property (nonatomic,__weak,readonly) WFModuleTitleView * titleView;                                     //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                                      //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) WFAction * action;                                                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) WFDragGestureRecognizer * dragRecognizer;                            //@synthesize dragRecognizer=_dragRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionDrawerActionTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDragController * dragController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(id<WFActionDrawerActionTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WFActionDrawerActionTableViewCellDelegate>)arg1 ;
-(WFAction *)action;
-(BOOL)isAccessibilityElement;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(WFModuleTitleView *)titleView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(WFDragGestureRecognizer *)dragRecognizer;
-(void)setDragRecognizer:(WFDragGestureRecognizer *)arg1 ;
-(void)configureWithAction:(id)arg1 ;
-(WFDragController *)dragController;
-(void)infoButtonPressed;
@end

