/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@class PSTextView, NSString;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {

	PSTextView* _textView;

}

@property (nonatomic,retain) PSTextView * textView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValue:(id)arg1 ;
-(PSTextView *)textView;
-(void)setTextView:(PSTextView *)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)textContentViewDidEndEditing:(id)arg1 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)cellRemovedFromView;
-(void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3 ;
-(void)drawTitleInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
@end

