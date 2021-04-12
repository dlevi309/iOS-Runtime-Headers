/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextView *)textView;
-(BOOL)becomeFirstResponder;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)placeholder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

