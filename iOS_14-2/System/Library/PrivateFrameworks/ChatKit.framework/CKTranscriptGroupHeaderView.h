/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CKConversation, CNComposeRecipientTextView, UIView, UIButton, _UIBackdropView;

@interface CKTranscriptGroupHeaderView : UIView {

	CKConversation* _conversation;
	CNComposeRecipientTextView* _textView;
	UIView* _separator;
	UIButton* _actionButton;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,retain) CKConversation * conversation;                      //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CNComposeRecipientTextView * textView;              //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * separator;                                 //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                            //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                     //@synthesize backdropView=_backdropView - In the implementation block
-(CNComposeRecipientTextView *)textView;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setTextView:(CNComposeRecipientTextView *)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(UIView *)separator;
-(CKConversation *)conversation;
-(void)layoutSubviews;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setSeparator:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 conversation:(id)arg2 ;
-(void)dealloc;
@end

