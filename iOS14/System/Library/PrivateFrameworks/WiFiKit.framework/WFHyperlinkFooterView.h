/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
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
-(void)setTarget:(id)arg1 ;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(void)_linkify;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(NSURL *)URL;
-(NSRange)linkRange;
-(id)target;
-(UIEdgeInsets)textInsets;
-(void)setLinkRange:(NSRange)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

