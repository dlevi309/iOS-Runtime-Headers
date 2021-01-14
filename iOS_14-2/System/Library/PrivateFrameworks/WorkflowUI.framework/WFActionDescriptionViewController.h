/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WFActionDocumentationViewDelegate.h>
#import <libobjc.A.dylib/WFActionDrawerStateRepresentable.h>
#import <libobjc.A.dylib/WFActionDrawerStateConfigurable.h>

@class WFAction, WFActionDrawerCoordinator, WFActionDescriptionTitleView, UIButton, UIScrollView, WFActionDocumentationView, UIVisualEffectView, NSString, WFActionDrawerState;

@interface WFActionDescriptionViewController : UIViewController <UIScrollViewDelegate, WFActionDocumentationViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable> {

	WFAction* _action;
	WFActionDrawerCoordinator* _coordinator;
	WFActionDescriptionTitleView* _titleView;
	UIButton* _dismissButton;
	UIScrollView* _scrollView;
	WFActionDocumentationView* _documentationView;
	UIVisualEffectView* _blurView;

}

@property (nonatomic,__weak,readonly) WFActionDrawerCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) WFActionDescriptionTitleView * titleView;                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                    //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) WFActionDocumentationView * documentationView;               //@synthesize documentationView=_documentationView - In the implementation block
@property (assign,nonatomic,__weak) UIVisualEffectView * blurView;                          //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                                      //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WFActionDrawerState * state; 
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(WFActionDescriptionTitleView *)titleView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewDidLoad;
-(WFActionDrawerState *)state;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIButton *)dismissButton;
-(UIScrollView *)scrollView;
-(WFActionDrawerCoordinator *)coordinator;
-(BOOL)moveToState:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionDocumentationViewDidSelectAddToWorkflowWithAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 coordinator:(id)arg2 ;
-(WFActionDocumentationView *)documentationView;
@end

