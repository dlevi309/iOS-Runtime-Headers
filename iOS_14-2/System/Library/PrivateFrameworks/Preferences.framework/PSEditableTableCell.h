/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIColor, PSListController, NSString;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {

	UIColor* _textColor;
	id _delegate;
	BOOL _forceFirstResponder;
	BOOL _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	BOOL _valueChanged;
	BOOL _returnKeyTapped;
	PSListController* _controllerDelegate;

}

@property (nonatomic,readonly) BOOL returnKeyTapped;                                    //@synthesize returnKeyTapped=_returnKeyTapped - In the implementation block
@property (assign,nonatomic,__weak) PSListController * controllerDelegate;              //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyle;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setTitle:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setCellEnabled:(BOOL)arg1 ;
-(BOOL)isEditing;
-(void)setControllerDelegate:(PSListController *)arg1 ;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canReload;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(id)textField;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)controlChanged:(id)arg1 ;
-(void)_saveForExit;
-(void)_setValueChanged;
-(BOOL)isTextFieldEditing;
-(PSListController *)controllerDelegate;
-(void)setPlaceholderText:(id)arg1 ;
-(void)endEditingAndSave;
-(BOOL)_cellIsEditing;
-(BOOL)returnKeyTapped;
-(id)_defaultTextColor;
-(void)cellRemovedFromView;
-(id)value;
-(void)dealloc;
@end

