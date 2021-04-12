/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HKMedicalIDEditorCellEditDelegate;
@class UIStackView, UILabel, HKCaretOptionalTextField, UIView, NSString;

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate> {

	double _minimumLabelWidth;
	id<HKMedicalIDEditorCellEditDelegate> _editDelegate;
	UIStackView* _stackView;
	UILabel* _labelLabel;
	HKCaretOptionalTextField* _inputTextField;
	UIView* _verticalSeparatorView;

}

@property (nonatomic,retain) UIStackView * stackView;                                                //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UILabel * labelLabel;                                                   //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) HKCaretOptionalTextField * inputTextField;                              //@synthesize inputTextField=_inputTextField - In the implementation block
@property (nonatomic,retain) UIView * verticalSeparatorView;                                         //@synthesize verticalSeparatorView=_verticalSeparatorView - In the implementation block
@property (assign,nonatomic) double minimumLabelWidth;                                               //@synthesize minimumLabelWidth=_minimumLabelWidth - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic,__weak) id<HKMedicalIDEditorCellEditDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showsLabelAndValue;
-(void)dealloc;
-(void)beginEditing;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(UIStackView *)stackView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)commitEditing;
-(void)_localeDidChange:(id)arg1 ;
-(UILabel *)labelLabel;
-(void)setupSubviews;
-(id<HKMedicalIDEditorCellEditDelegate>)editDelegate;
-(void)setEditDelegate:(id<HKMedicalIDEditorCellEditDelegate>)arg1 ;
-(void)setupStackView;
-(id)formattedValue;
-(void)updateValueLabel;
-(HKCaretOptionalTextField *)inputTextField;
-(void)valueDidChange;
-(void)setMinimumLabelWidth:(double)arg1 ;
-(void)setInputTextField:(HKCaretOptionalTextField *)arg1 ;
-(void)setLabelLabel:(UILabel *)arg1 ;
-(void)setVerticalSeparatorView:(UIView *)arg1 ;
-(UIView *)verticalSeparatorView;
-(void)dismissInputView;
-(double)minimumLabelWidth;
@end

