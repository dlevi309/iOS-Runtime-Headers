/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, NSURL, UITextView, NSLayoutConstraint;

@interface PSFooterHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate> {

	NSString* _text;
	NSURL* _URL;
	id _target;
	SEL _action;
	UITextView* _textView;
	NSLayoutConstraint* _textViewLeadingConstraint;
	NSLayoutConstraint* _textViewTrailingConstraint;
	NSRange _linkRange;

}

@property (nonatomic,retain) UITextView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewLeadingConstraint;               //@synthesize textViewLeadingConstraint=_textViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textViewTrailingConstraint;              //@synthesize textViewTrailingConstraint=_textViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSString * text;                                              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSRange linkRange;                                            //@synthesize linkRange=_linkRange - In the implementation block
@property (assign,nonatomic,__weak) id target;                                             //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(void)setTarget:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)_linkify;
-(void)updateConstraints;
-(NSString *)text;
-(NSURL *)URL;
-(NSRange)linkRange;
-(void)setTableView:(id)arg1 ;
-(id)target;
-(void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)setupSubviewsAndContstraints;
-(void)setTextViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)isValidLinkRange;
-(NSLayoutConstraint *)textViewLeadingConstraint;
-(void)setTextViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textViewTrailingConstraint;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end

