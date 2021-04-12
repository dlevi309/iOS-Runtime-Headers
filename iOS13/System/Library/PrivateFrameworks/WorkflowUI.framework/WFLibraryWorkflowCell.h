/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFBaseLibraryWorkflowCell.h>

@class UIButton, UILabel, WFLibraryWorkflowCellSelectionView, WFLibraryLayoutMetrics, UIBezierPath;

@interface WFLibraryWorkflowCell : WFBaseLibraryWorkflowCell {

	BOOL _jittering;
	BOOL _hideEditButton;
	UIButton* _editButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	WFLibraryWorkflowCellSelectionView* _selectionView;
	long long _dragState;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * editButton;                                                  //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,__weak,readonly) WFLibraryWorkflowCellSelectionView * selectionView;              //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,nonatomic) long long dragState;                                                      //@synthesize dragState=_dragState - In the implementation block
@property (assign,nonatomic,__weak) id<WFLibraryWorkflowCellDelegate> delegate; 
@property (nonatomic,copy) WFLibraryLayoutMetrics * layoutMetrics; 
@property (assign,getter=isJittering,nonatomic) BOOL jittering;                                        //@synthesize jittering=_jittering - In the implementation block
@property (assign,nonatomic) BOOL hideEditButton;                                                      //@synthesize hideEditButton=_hideEditButton - In the implementation block
@property (nonatomic,readonly) UIBezierPath * visiblePathForDragging; 
+(id)jitterRotationAnimation;
+(id)jitterYTranslationAnimation;
+(id)jitterXTranslationAnimation;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityPath;
-(BOOL)accessibilityPerformMagicTap;
-(id)accessibilityCustomActions;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(WFLibraryWorkflowCellSelectionView *)selectionView;
-(void)dragStateDidChange:(long long)arg1 ;
-(void)setDragState:(long long)arg1 ;
-(long long)dragState;
-(id)titleFont;
-(id)subtitleFont;
-(UILabel *)subtitleLabel;
-(void)cancelButtonPressed:(id)arg1 ;
-(UIButton *)editButton;
-(void)setJittering:(BOOL)arg1 ;
-(BOOL)isJittering;
-(void)setLayoutMetrics:(WFLibraryLayoutMetrics *)arg1 ;
-(double)titleLineHeightMultiple;
-(double)subtitleLineHeightMultiple;
-(id)textAttributesForLabelType:(unsigned long long)arg1 shouldTruncate:(BOOL)arg2 ;
-(long long)lineCountForLabel:(id)arg1 labelType:(unsigned long long)arg2 ;
-(UIBezierPath *)visiblePathForDragging;
-(void)editButtonPressed:(id)arg1 ;
-(void)setWorkflowName:(id)arg1 ;
-(void)setWorkflowDescription:(id)arg1 ;
-(void)updateSelectionState;
-(void)updateEditButtonVisibility;
-(BOOL)accessibilityRenameWorkflow;
-(BOOL)accessibilityDuplicateWorkflow;
-(BOOL)accessibilityDeleteWorkflow;
-(BOOL)accessibilityEditWorkflow;
-(BOOL)hideEditButton;
-(void)setHideEditButton:(BOOL)arg1 ;
@end

