/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientViewDelegate.h>
#import <libobjc.A.dylib/SKUIGiftContactSearchDelegate.h>

@class CNContactStore, CNContactPickerViewController, UILabel, MFComposeRecipientView, SKUIGiftContactSearchController, UIView, NSAttributedString, NSString, NSArray;

@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate> {

	CNContactStore* _contactStore;
	CNContactPickerViewController* _contactPickerController;
	UILabel* _placeholderLabel;
	MFComposeRecipientView* _recipientView;
	SKUIGiftContactSearchController* _searchController;
	UIView* _topBorderView;
	BOOL _didLayoutSubviews;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL didLayoutSubviews;                                //@synthesize didLayoutSubviews=_didLayoutSubviews - In the implementation block
@property (assign,nonatomic) BOOL leftToRight;                                      //@synthesize leftToRight=_leftToRight - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSArray * recipientAddresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSArray *)recipientAddresses;
-(id)_contactStore;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(BOOL)leftToRight;
-(NSAttributedString *)attributedPlaceholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)presentSearchResultsPopover:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentPeoplePickerPopover:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDidLayoutSubviews:(BOOL)arg1 ;
-(BOOL)didLayoutSubviews;
-(void)_sendDismissContactPicker;
-(void)_resetSearchController;
-(void)_sendDidChangeRecipients;
-(void)_sendDidUpdateSearchController;
-(void)searchController:(id)arg1 didSelectRecipient:(id)arg2 ;
-(void)searchControllerDidFinishSearch:(id)arg1 ;
@end

