/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol WFRunWorkflowFooterViewDelegate;
@class WFModulesQuickLookView, WFFloatingButton;

@interface WFRunWorkflowFooterView : UICollectionReusableView {

	id<WFRunWorkflowFooterViewDelegate> _delegate;
	WFModulesQuickLookView* _quickLookView;
	WFFloatingButton* _addButton;

}

@property (nonatomic,retain) WFFloatingButton * addButton;                                     //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic,__weak) id<WFRunWorkflowFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFModulesQuickLookView * quickLookView;                         //@synthesize quickLookView=_quickLookView - In the implementation block
+(double)preferredBottomPaddingHeight;
+(CGSize)preferredQuickLookViewSize;
+(double)preferredAddButtonHeight;
-(id<WFRunWorkflowFooterViewDelegate>)delegate;
-(void)setDelegate:(id<WFRunWorkflowFooterViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(WFFloatingButton *)addButton;
-(void)setAddButton:(WFFloatingButton *)arg1 ;
-(void)updateAddButtonGradient;
-(void)didTapAddButton;
-(void)setQuickLookViewHidden:(BOOL)arg1 addButtonHidden:(BOOL)arg2 ;
-(WFModulesQuickLookView *)quickLookView;
@end

