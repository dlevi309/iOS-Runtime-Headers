/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PSTextView *)textView;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setTextView:(PSTextView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(void)textContentViewDidEndEditing:(id)arg1 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3 ;
-(void)drawTitleInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)cellRemovedFromView;
@end

