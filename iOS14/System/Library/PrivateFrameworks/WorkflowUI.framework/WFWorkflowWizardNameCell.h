/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameCellDataSource;
@class UIView, WFWorkflowWizardNameIconButton, WFWorkflowWizardNameRecordButton, WFWorkflowWizardNameClearButton, UITextField, NSArray, NSString;

@interface WFWorkflowWizardNameCell : UITableViewCell <UITextFieldDelegate> {

	BOOL _showsHeySiri;
	BOOL _useDoneButtonOnKeyboard;
	BOOL _useHorizontalInset;
	id<WFWorkflowWizardNameCellDelegate> _delegate;
	id<WFWorkflowWizardNameCellDataSource> _dataSource;
	UIView* _platterView;
	UIView* _phraseView;
	WFWorkflowWizardNameIconButton* _iconButton;
	WFWorkflowWizardNameRecordButton* _recordButton;
	WFWorkflowWizardNameClearButton* _clearButton;
	UITextField* _shortcutNameTextField;
	NSArray* _horizontalConstraintsWithInset;
	NSArray* _horizontalConstraintsWithoutInset;

}

@property (nonatomic,retain) UIView * platterView;                                                  //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIView * phraseView;                                                   //@synthesize phraseView=_phraseView - In the implementation block
@property (nonatomic,retain) WFWorkflowWizardNameIconButton * iconButton;                           //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,retain) WFWorkflowWizardNameRecordButton * recordButton;                       //@synthesize recordButton=_recordButton - In the implementation block
@property (nonatomic,retain) WFWorkflowWizardNameClearButton * clearButton;                         //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) UITextField * shortcutNameTextField;                                   //@synthesize shortcutNameTextField=_shortcutNameTextField - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraintsWithInset;                              //@synthesize horizontalConstraintsWithInset=_horizontalConstraintsWithInset - In the implementation block
@property (nonatomic,retain) NSArray * horizontalConstraintsWithoutInset;                           //@synthesize horizontalConstraintsWithoutInset=_horizontalConstraintsWithoutInset - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowWizardNameCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowWizardNameCellDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL showsHeySiri;                                                     //@synthesize showsHeySiri=_showsHeySiri - In the implementation block
@property (assign,nonatomic) BOOL useDoneButtonOnKeyboard;                                          //@synthesize useDoneButtonOnKeyboard=_useDoneButtonOnKeyboard - In the implementation block
@property (assign,nonatomic) BOOL useHorizontalInset;                                               //@synthesize useHorizontalInset=_useHorizontalInset - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultRowHeight;
-(BOOL)becomeFirstResponder;
-(UIView *)platterView;
-(void)setPlatterView:(UIView *)arg1 ;
-(id<WFWorkflowWizardNameCellDelegate>)delegate;
-(id<WFWorkflowWizardNameCellDataSource>)dataSource;
-(NSString *)name;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<WFWorkflowWizardNameCellDelegate>)arg1 ;
-(void)setDataSource:(id<WFWorkflowWizardNameCellDataSource>)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(WFWorkflowWizardNameIconButton *)iconButton;
-(WFWorkflowWizardNameClearButton *)clearButton;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(WFWorkflowWizardNameRecordButton *)recordButton;
-(void)setRecordButton:(WFWorkflowWizardNameRecordButton *)arg1 ;
-(void)setIconButton:(WFWorkflowWizardNameIconButton *)arg1 ;
-(void)setClearButton:(WFWorkflowWizardNameClearButton *)arg1 ;
-(void)configureIconButton;
-(BOOL)useDropdownMenuIconButton;
-(void)setIconButtonConstraints;
-(id)regularIconButton;
-(id)dropdownMenuIconButton;
-(void)setDropdownMenuForIconButton:(id)arg1 ;
-(void)setShowsHeySiri:(BOOL)arg1 ;
-(void)setUseHorizontalContraints:(BOOL)arg1 ;
-(void)setUseDoneButtonOnKeyboard:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 customImageData:(id)arg2 ;
-(void)configureWithName:(id)arg1 showsHeySiri:(BOOL)arg2 icon:(id)arg3 ;
-(void)configureWithName:(id)arg1 showsHeySiri:(BOOL)arg2 useHorizontalInset:(BOOL)arg3 icon:(id)arg4 ;
-(void)configureWithName:(id)arg1 showsHeySiri:(BOOL)arg2 useHorizontalInset:(BOOL)arg3 icon:(id)arg4 customImageData:(id)arg5 ;
-(BOOL)shortcutNameIsEmpty;
-(void)textFieldDidChange;
-(void)updateButtonVisibility;
-(void)updateViewForDoneButton;
-(void)updateViewForHorizontalConstraints;
-(void)didTapIconButton;
-(void)didTapRecordButton;
-(void)didTapClearButton;
-(BOOL)showsHeySiri;
-(BOOL)useDoneButtonOnKeyboard;
-(BOOL)useHorizontalInset;
-(void)setUseHorizontalInset:(BOOL)arg1 ;
-(UIView *)phraseView;
-(void)setPhraseView:(UIView *)arg1 ;
-(UITextField *)shortcutNameTextField;
-(void)setShortcutNameTextField:(UITextField *)arg1 ;
-(NSArray *)horizontalConstraintsWithInset;
-(void)setHorizontalConstraintsWithInset:(NSArray *)arg1 ;
-(NSArray *)horizontalConstraintsWithoutInset;
-(void)setHorizontalConstraintsWithoutInset:(NSArray *)arg1 ;
@end
