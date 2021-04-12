/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate> {

	BOOL _shouldDisableTextFieldWhenNotEditing;
	BOOL _shouldAllowSelection;
	UITextField* _nameTextField;

}

@property (nonatomic,retain) UITextField * nameTextField;                            //@synthesize nameTextField=_nameTextField - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableTextFieldWhenNotEditing;              //@synthesize shouldDisableTextFieldWhenNotEditing=_shouldDisableTextFieldWhenNotEditing - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSelection;                              //@synthesize shouldAllowSelection=_shouldAllowSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateText;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(UITextField *)nameTextField;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(void)initializeView;
-(void)markNameTextFieldAccessible;
-(id)textFieldValue:(id)arg1 ;
-(void)setShouldDisableTextFieldWhenNotEditing:(BOOL)arg1 ;
-(BOOL)shouldDisableTextFieldWhenNotEditing;
-(void)setShouldAllowSelection:(BOOL)arg1 ;
-(BOOL)shouldAllowSelection;
-(void)setTextFieldValue:(id)arg1 specifier:(id)arg2 ;
-(void)setNameTextField:(UITextField *)arg1 ;
@end

