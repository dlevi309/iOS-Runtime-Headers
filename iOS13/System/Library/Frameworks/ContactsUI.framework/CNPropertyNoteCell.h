/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyCell.h>

@class UITextView, UILabel;

@interface CNPropertyNoteCell : CNPropertyCell {

	UITextView* _textView;
	UILabel* _labelLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
-(void)dealloc;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)labelView;
-(void)setProperty:(id)arg1 ;
-(id)valueView;
-(UILabel *)labelLabel;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)setValueTextAttributes:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)allowsCellSelection;
-(BOOL)displaysCellSelectionState;
-(double)valueViewBottomMargin;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
@end

