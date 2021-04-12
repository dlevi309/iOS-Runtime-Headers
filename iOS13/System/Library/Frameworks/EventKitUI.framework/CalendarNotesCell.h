/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKUITableViewCell.h>

@class UITextView, NSString;

@interface CalendarNotesCell : EKUITableViewCell {

	UITextView* _textView;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain,readonly) UITextView * textView; 
@property (nonatomic,retain) NSString * placeholder; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(NSString *)placeholder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

