/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;
@class CKAcknowledgmentGlyphView, UIButton, CKMessageAcknowledgmentDraftDescriptor;

@interface CKMessageAcknowledgmentPickerBarItemView : UIView {

	BOOL _selected;
	long long _messageAcknowledgmentType;
	id<CKMessageAcknowledgmentPickerBarItemViewDelegate> _delegate;
	CKAcknowledgmentGlyphView* _acknowledgmentGlyphView;
	UIButton* _itemButton;
	CKMessageAcknowledgmentDraftDescriptor* _draft;

}

@property (nonatomic,retain) UIButton * itemButton;                                                             //@synthesize itemButton=_itemButton - In the implementation block
@property (nonatomic,readonly) BOOL displaySelected; 
@property (assign,nonatomic,__weak) id<CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                                   //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) CKAcknowledgmentGlyphView * acknowledgmentGlyphView;                             //@synthesize acknowledgmentGlyphView=_acknowledgmentGlyphView - In the implementation block
@property (nonatomic,readonly) CKMessageAcknowledgmentDraftDescriptor * draft;                                  //@synthesize draft=_draft - In the implementation block
@property (nonatomic,readonly) long long messageAcknowledgmentType;                                             //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
-(CKMessageAcknowledgmentDraftDescriptor *)draft;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKMessageAcknowledgmentPickerBarItemViewDelegate>)delegate;
-(BOOL)isSelected;
-(UIButton *)itemButton;
-(void)setSelected:(BOOL)arg1 ;
-(void)setDelegate:(id<CKMessageAcknowledgmentPickerBarItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(long long)messageAcknowledgmentType;
-(void)itemButtonTapped:(id)arg1 ;
-(void)setItemButton:(UIButton *)arg1 ;
-(BOOL)displaySelected;
-(void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(BOOL)arg2 ;
-(CKAcknowledgmentGlyphView *)acknowledgmentGlyphView;
@end

