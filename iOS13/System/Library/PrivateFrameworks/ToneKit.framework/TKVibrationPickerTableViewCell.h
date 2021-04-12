/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <ToneKit/TKPickerTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TKVibrationPickerTableViewCellDelegate;
@class UITextField, UIColor, NSString, UIFont;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate> {

	UITextField* _removableTextField;
	BOOL _editable;
	id<TKVibrationPickerTableViewCellDelegate> _delegate;
	UIColor* _regularTextColor;

}

@property (assign,nonatomic,__weak) id<TKVibrationPickerTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) UIFont * regularTextFont; 
@property (nonatomic,retain) UIColor * regularTextColor;                                              //@synthesize regularTextColor=_regularTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor; 
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                         //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TKVibrationPickerTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<TKVibrationPickerTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setEditable:(BOOL)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)isEditable;
-(void)setChecked:(BOOL)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)highlightedTextColor;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)isChecked;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setRegularTextFont:(UIFont *)arg1 ;
-(void)setRegularTextColor:(UIColor *)arg1 ;
-(void)makeTextFieldResignFirstResponderIfNeeded;
-(void)_makeRemovableTextFieldEditable:(BOOL)arg1 ;
-(BOOL)_isDisplayingRemovableTextField;
-(UIColor *)regularTextColor;
-(void)_layoutRemovableTextField;
-(UIFont *)regularTextFont;
@end

