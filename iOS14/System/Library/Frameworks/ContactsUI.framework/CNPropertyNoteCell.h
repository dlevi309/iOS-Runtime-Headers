/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldIndentWhileEditing;
-(UITextView *)textView;
-(id)labelView;
-(UILabel *)labelLabel;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setProperty:(id)arg1 ;
-(BOOL)displaysCellSelectionState;
-(double)valueViewBottomMargin;
-(id)valueView;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(BOOL)allowsCellSelection;
-(void)setValueTextAttributes:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

