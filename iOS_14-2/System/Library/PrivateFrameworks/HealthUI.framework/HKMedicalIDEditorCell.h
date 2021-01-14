/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<HKMedicalIDEditorCellEditDelegate>)editDelegate;
-(void)setEditDelegate:(id<HKMedicalIDEditorCellEditDelegate>)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UILabel *)labelLabel;
-(void)setupStackView;
-(UIStackView *)stackView;
-(void)setupSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)commitEditing;
-(id)formattedValue;
-(NSString *)label;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)beginEditing;
-(HKCaretOptionalTextField *)inputTextField;
-(void)valueDidChange;
-(void)setLabelLabel:(UILabel *)arg1 ;
-(void)setInputTextField:(HKCaretOptionalTextField *)arg1 ;
-(void)setVerticalSeparatorView:(UIView *)arg1 ;
-(UIView *)verticalSeparatorView;
-(void)updateValueLabel;
-(void)dismissInputView;
-(double)minimumLabelWidth;
-(void)setMinimumLabelWidth:(double)arg1 ;
@end

