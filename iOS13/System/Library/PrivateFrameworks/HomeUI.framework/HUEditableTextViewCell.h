/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUIconCell.h>

@class NSString, UITextView;

@interface HUEditableTextViewCell : HUIconCell {

	BOOL _editEnabled;
	BOOL _showingPlaceholder;
	NSString* _text;
	NSString* _placeholderText;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                                       //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) BOOL showingPlaceholder;                                     //@synthesize showingPlaceholder=_showingPlaceholder - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDelegate> textViewDelegate; 
@property (nonatomic,copy) NSString * text;                                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                    //@synthesize placeholderText=_placeholderText - In the implementation block
@property (assign,nonatomic) BOOL editEnabled;                                            //@synthesize editEnabled=_editEnabled - In the implementation block
-(void)prepareForReuse;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(BOOL)showingPlaceholder;
-(id<UITextViewDelegate>)textViewDelegate;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
-(BOOL)editEnabled;
-(void)setEditEnabled:(BOOL)arg1 ;
-(void)handleUITextViewTextDidBeginEditingNotification:(id)arg1 ;
-(void)handleUITextViewTextDidEndEditingNotification:(id)arg1 ;
-(void)updateTextColor;
-(id)trimmedStringForText:(id)arg1 ;
@end

