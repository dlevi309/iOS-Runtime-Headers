/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@protocol UITextFieldDelegate;
@class NSString, SKUIGift, UITextView, SKUIGiftRecipientTableViewCell, SKUIGiftTextTableViewCell;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {

	double _footerHeight;
	NSString* _footerString;
	SKUIGift* _gift;
	UITextView* _messagingTextView;
	SKUIGiftRecipientTableViewCell* _recipientTableViewCell;
	id<UITextFieldDelegate> _textFieldDelegate;
	double _textViewCellHeight;
	SKUIGiftTextTableViewCell* _messageCell;

}

@property (nonatomic,retain) SKUIGiftTextTableViewCell * messageCell;                //@synthesize messageCell=_messageCell - In the implementation block
@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (assign,nonatomic) id<UITextFieldDelegate> textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(SKUIGift *)gift;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithGiftConfiguration:(id)arg1 ;
-(void)setGift:(SKUIGift *)arg1 ;
-(id)_recipientTableViewCell;
-(id)_footerString;
-(id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUIGiftTextTableViewCell *)messageCell;
-(id)_attributedPlaceholderWithString:(id)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
-(void)setMessageCell:(SKUIGiftTextTableViewCell *)arg1 ;
@end

