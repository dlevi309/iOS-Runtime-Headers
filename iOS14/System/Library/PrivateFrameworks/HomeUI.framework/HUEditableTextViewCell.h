/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class NSString, UITextView;

@interface HUEditableTextViewCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
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
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                             //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITextView *)textView;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)placeholderText;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(NSString *)text;
-(void)setShowingPlaceholder:(BOOL)arg1 ;
-(BOOL)showingPlaceholder;
-(id<UITextViewDelegate>)textViewDelegate;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditEnabled:(BOOL)arg1 ;
-(void)handleUITextViewTextDidBeginEditingNotification:(id)arg1 ;
-(void)handleUITextViewTextDidEndEditingNotification:(id)arg1 ;
-(void)updateTextColor;
-(id)trimmedStringForText:(id)arg1 ;
-(BOOL)editEnabled;
@end

