/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKMessagePartChatItem *)chatItem;
-(id<CKMessageAcknowledgmentPickerBarDelegate>)delegate;
-(void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 pickerFrame:(CGRect)arg2 ;
-(void)performShowAnimation:(/*^block*/id)arg1 ;
-(void)performSendAnimation:(/*^block*/id)arg1 ;
-(void)performCancelAnimation:(/*^block*/id)arg1 ;
-(void)adjustTailRelativeSiblingViewFrame:(CGRect)arg1 ;
-(CGRect)calculateFrameRelativeToSiblingViewFrame:(CGRect)arg1 withinBounds:(CGRect)arg2 ;
-(void)setDelegate:(id<CKMessageAcknowledgmentPickerBarDelegate>)arg1 ;
-(void)pickerBarItemViewSelectionDidChange:(id)arg1 ;
-(void)setChatItem:(CKMessagePartChatItem *)arg1 ;
-(void)loadView;
-(id)pickerView;
-(id)initWithChatItem:(id)arg1 ;
@end

