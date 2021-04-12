/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WiFiKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, NSURL;

@interface WFHyperlinkFooterView : UIView <UITextViewDelegate> {

	UITextView* _textView;
	NSString* _text;
	NSURL* _URL;
	NSRange _linkRange;
	id _target;
	SEL _action;

}

@property (retain) NSString * text; 
@property (assign) NSRange linkRange; 
@property (__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (retain) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(SEL)action;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAction:(SEL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)_linkify;
-(NSRange)linkRange;
-(UIEdgeInsets)textInsets;
@end

