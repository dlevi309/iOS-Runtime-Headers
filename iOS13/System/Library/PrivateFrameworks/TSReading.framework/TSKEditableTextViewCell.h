/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol UITextViewDelegate;
@class TSKPlaceholderTextView, UIView, NSString;

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate> {

	TSKPlaceholderTextView* mTextView;
	UIView* mInputView;
	BOOL mNumberHasDecimal;
	id<UITextViewDelegate> mSavedDelegate;

}

@property (nonatomic,retain) NSString * string; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)string;
-(void)dealloc;
-(void)beginEditing;
-(void)endEditing;
-(void)setString:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setInputView:(id)arg1 ;
-(void)deleteBackward;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)isNegative;
-(void)p_parseText:(id)arg1 ;
-(void)p_insertString:(id)arg1 ;
-(void)setTextTag:(long long)arg1 ;
-(void)setTextDelegate:(id)arg1 ;
-(void)parseText;
-(void)insertNumber:(long long)arg1 ;
-(void)insertDecimalSeparator;
-(void)toggleNegative;
@end

