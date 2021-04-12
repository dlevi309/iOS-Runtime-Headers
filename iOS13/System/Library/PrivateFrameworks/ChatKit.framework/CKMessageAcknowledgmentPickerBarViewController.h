/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKMessageAcknowledgmentPickerBarItemViewDelegate.h>

@protocol CKMessageAcknowledgmentPickerBarDelegate;
@class CKMessagePartChatItem;

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate> {

	id<CKMessageAcknowledgmentPickerBarDelegate> _delegate;
	CKMessagePartChatItem* _chatItem;

}

@property (assign,nonatomic,__weak) id<CKMessageAcknowledgmentPickerBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKMessagePartChatItem * chatItem;                                          //@synthesize chatItem=_chatItem - In the implementation block
-(id<CKMessageAcknowledgmentPickerBarDelegate>)delegate;
-(void)setDelegate:(id<CKMessageAcknowledgmentPickerBarDelegate>)arg1 ;
-(void)loadView;
-(id)pickerView;
-(CKMessagePartChatItem *)chatItem;
-(void)pickerBarItemViewSelectionDidChange:(id)arg1 ;
-(void)setChatItem:(CKMessagePartChatItem *)arg1 ;
-(id)initWithChatItem:(id)arg1 ;
-(void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 pickerFrame:(CGRect)arg2 ;
-(void)performShowAnimation:(/*^block*/id)arg1 ;
-(void)performSendAnimation:(/*^block*/id)arg1 ;
-(void)performCancelAnimation:(/*^block*/id)arg1 ;
-(void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 ;
-(CGRect)calculateFrameRelativeToSiblingViewFrame:(CGRect)arg1 withinBounds:(CGRect)arg2 ;
@end

