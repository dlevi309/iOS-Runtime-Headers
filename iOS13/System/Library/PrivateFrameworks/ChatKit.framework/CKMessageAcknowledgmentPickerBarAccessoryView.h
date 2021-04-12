/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/_UIContextMenuAccessoryView.h>

@class CKMessageAcknowledgmentPickerBarViewController, CKMessagePartChatItem;

@interface CKMessageAcknowledgmentPickerBarAccessoryView : _UIContextMenuAccessoryView {

	BOOL _visible;
	CKMessageAcknowledgmentPickerBarViewController* _pickerViewController;
	CKMessagePartChatItem* _chatItem;
	CGRect _layoutBounds;

}

@property (assign,nonatomic) BOOL visible;                                                                       //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) CGRect layoutBounds;                                                                //@synthesize layoutBounds=_layoutBounds - In the implementation block
@property (nonatomic,retain) CKMessageAcknowledgmentPickerBarViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,retain) CKMessagePartChatItem * chatItem;                                                   //@synthesize chatItem=_chatItem - In the implementation block
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(id)initWithChatItem:(id)arg1 layoutBounds:(CGRect)arg2 ;
-(CKMessageAcknowledgmentPickerBarViewController *)pickerViewController;
-(CKMessagePartChatItem *)chatItem;
-(void)setChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)setLayoutBounds:(CGRect)arg1 ;
-(void)setPickerViewController:(CKMessageAcknowledgmentPickerBarViewController *)arg1 ;
-(CGRect)layoutBounds;
@end

