/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol WFRunWorkflowFooterViewDelegate;
@class WFModulesQuickLookView, WFFloatingButton, UIStackView;

@interface WFRunWorkflowFooterView : UICollectionReusableView {

	id<WFRunWorkflowFooterViewDelegate> _delegate;
	WFModulesQuickLookView* _quickLookView;
	WFFloatingButton* _addButton;
	UIStackView* _stackView;

}

@property (nonatomic,retain) WFFloatingButton * addButton;                                     //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                          //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic,__weak) id<WFRunWorkflowFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFModulesQuickLookView * quickLookView;                         //@synthesize quickLookView=_quickLookView - In the implementation block
+(double)preferredAddButtonHeight;
+(double)preferredBottomPaddingHeight;
+(CGSize)preferredQuickLookViewSizeForTraitCollection:(id)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<WFRunWorkflowFooterViewDelegate>)delegate;
-(UIStackView *)stackView;
-(void)setDelegate:(id<WFRunWorkflowFooterViewDelegate>)arg1 ;
-(WFFloatingButton *)addButton;
-(void)setAddButton:(WFFloatingButton *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(WFModulesQuickLookView *)quickLookView;
-(void)setQuickLookViewHidden:(BOOL)arg1 addButtonHidden:(BOOL)arg2 ;
-(void)updateAddButtonGradient;
-(void)didTapAddButton;
@end

