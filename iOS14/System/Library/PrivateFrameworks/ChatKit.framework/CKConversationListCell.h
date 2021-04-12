/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CKConversationListCell.h>

@protocol CKConversationListCell <NSObject>
@required
+(double)cellHeightForDisplayScale:(double)arg1;
+(id)identifierForConversation:(id)arg1;
-(void)updateContentsForConversation:(id)arg1;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2;

@end


@protocol CKConversationListCellDelegate;
@class UIDateLabel, UILabel, CAGradientLayer, UIButton, UIImageView, CKLabel, NSString, NSDate, CKConversationListTypingIndicatorView, NSObject, CKConversation, CKAvatarView;

@interface CKConversationListCell : UITableViewCell <CKConversationListCell> {

	UIDateLabel* _dateLabel;
	UILabel* _summaryLabel;
	CAGradientLayer* _gradient;
	UIButton* _closeButton;
	UILabel* _summaryBlockedLabel;
	UIImageView* _chevronImageView;
	CKLabel* _fromLabel;
	BOOL _isPlaceholder;
	NSString* _searchSummaryText;
	NSString* _searchMessageGUID;
	NSDate* _searchMessageDate;
	CKConversationListTypingIndicatorView* _typingIndicatorView;
	BOOL _verified;
	BOOL _shouldHidePreviewSummary;
	BOOL _shouldLabelsBeHighlighted;
	BOOL _freezeSummaryText;
	BOOL __editingPins;
	NSObject*<CKConversationListCellDelegate> _delegate;
	CKConversation* _conversation;
	CGRect _containerBounds;

}

@property (nonatomic,retain) NSDate * searchMessageDate;                                             //@synthesize searchMessageDate=_searchMessageDate - In the implementation block
@property (nonatomic,copy) NSString * searchMessageGUID;                                             //@synthesize searchMessageGUID=_searchMessageGUID - In the implementation block
@property (nonatomic,copy) NSString * searchSummaryText;                                             //@synthesize searchSummaryText=_searchSummaryText - In the implementation block
@property (assign,nonatomic) BOOL verified;                                                          //@synthesize verified=_verified - In the implementation block
@property (assign,nonatomic) BOOL shouldLabelsBeHighlighted;                                         //@synthesize shouldLabelsBeHighlighted=_shouldLabelsBeHighlighted - In the implementation block
@property (assign,nonatomic) CGRect containerBounds;                                                 //@synthesize containerBounds=_containerBounds - In the implementation block
@property (assign,nonatomic) BOOL freezeSummaryText;                                                 //@synthesize freezeSummaryText=_freezeSummaryText - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic) BOOL _editingPins;                                                      //@synthesize _editingPins=__editingPins - In the implementation block
@property (nonatomic,readonly) CKAvatarView * avatarView; 
@property (nonatomic,readonly) CKLabel * fromLabel; 
@property (assign,nonatomic) BOOL shouldHidePreviewSummary;                                          //@synthesize shouldHidePreviewSummary=_shouldHidePreviewSummary - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellHeightForDisplayScale:(double)arg1 ;
+(id)identifierForConversation:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)dateLabel;
-(NSObject*<CKConversationListCellDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)updateWithSearchResult:(id)arg1 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(BOOL)verified;
-(unsigned long long)unreadMessageCount;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)prepareForReuse;
-(CKAvatarView *)avatarView;
-(void)setDelegate:(NSObject*<CKConversationListCellDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)setVerified:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKLabel *)fromLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didHoverOverCell:(id)arg1 ;
-(void)deleteButtonTapped;
-(void)setEditingPins:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)summaryLabelTextColor;
-(void)updateLabelTextColors;
-(void)_increaseContrastDidChange:(id)arg1 ;
-(void)updateUnreadIndicatorForCurrentConversation;
-(BOOL)shouldLabelsBeHighlighted;
-(void)updateVerifiedCheckmarkForBusiness;
-(void)updateSummaryTextForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)setContainerBounds:(CGRect)arg1 ;
-(void)setShouldHidePreviewSummary:(BOOL)arg1 ;
-(BOOL)_editingPins;
-(void)increaseContrastDidChange;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(NSDate *)searchMessageDate;
-(BOOL)freezeSummaryText;
-(BOOL)shouldHidePreviewSummary;
-(id)_makeSummaryAttributedStringWithText:(id)arg1 multiwayConversation:(id)arg2 ;
-(void)updateBlockedSummaryLabelIfNeeded;
-(void)setSearchMessageGUID:(NSString *)arg1 ;
-(id)summaryLabel;
-(void)setSearchMessageDate:(NSDate *)arg1 ;
-(void)setSearchSummaryText:(NSString *)arg1 ;
-(BOOL)showingEditControl;
-(void)_performBlock:(/*^block*/id)arg1 animated:(BOOL)arg2 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(void)setFreezeSummaryText:(BOOL)arg1 ;
-(id)unreadIndicatorImageForVisibility:(BOOL)arg1 withMuteState:(BOOL)arg2 ;
-(id)unreadIndicatorColorForVisibility:(BOOL)arg1 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateWithForwardedConfigurationState:(unsigned long long)arg1 ;
-(NSString *)searchSummaryText;
-(id)summaryAttributedTextForBlockedConversationWithIcon:(BOOL)arg1 ;
-(BOOL)lastMessageIsTypingIndicator;
-(NSString *)searchMessageGUID;
-(void)setShouldLabelsBeHighlighted:(BOOL)arg1 ;
-(void)set_editingPins:(BOOL)arg1 ;
-(CGRect)containerBounds;
-(void)contentSizeCategoryDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

