/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRecipientAddresses:(NSArray *)arg1 ;
-(NSArray *)recipientAddresses;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)layoutSubviews;
-(void)setLeftToRight:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_contactStore;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(BOOL)leftToRight;
-(NSString *)label;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
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

