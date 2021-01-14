/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKMessagePartChatItem *)chatItem;
-(CGPoint)attachmentOffsetWithReferenceFrame:(CGRect)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(id)initWithChatItem:(id)arg1 layoutBounds:(CGRect)arg2 ;
-(CKMessageAcknowledgmentPickerBarViewController *)pickerViewController;
-(void)setChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLayoutBounds:(CGRect)arg1 ;
-(void)setPickerViewController:(CKMessageAcknowledgmentPickerBarViewController *)arg1 ;
-(CGRect)layoutBounds;
@end

