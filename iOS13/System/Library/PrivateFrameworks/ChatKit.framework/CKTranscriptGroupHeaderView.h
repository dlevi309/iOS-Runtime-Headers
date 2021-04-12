/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CNComposeRecipientTextView *)textView;
-(void)setTextView:(CNComposeRecipientTextView *)arg1 ;
-(void)layoutSubviews;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(UIView *)separator;
-(void)setSeparator:(UIView *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 conversation:(id)arg2 ;
@end

