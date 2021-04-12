/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/CKConversationListCell.h>

@protocol CKConversationListCell <NSObject>
@required
+(id)identifierForConversation:(id)arg1;
+(double)cellHeight;
-(void)updateContentsForConversation:(id)arg1;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2;

@end


@protocol CKConversationListCellDelegate;
@class UIDateLabel, UILabel, UIImageView, CKLabel, NSString, NSDate, NSObject, CKConversation, CKAvatarView;

@interface CKConversationListCell : UITableViewCell <CKConversationListCell> {

	UIDateLabel* _dateLabel;
	UILabel* _summaryLabel;
	UILabel* _summaryBlockedLabel;
	UIImageView* _chevronImageView;
	CKLabel* _fromLabel;
	BOOL _isPlaceholder;
	NSString* _searchSummaryText;
	NSString* _searchMessageGUID;
	NSDate* _searchMessageDate;
	BOOL _verified;
	BOOL _shouldHidePreviewSummary;
	NSObject*<CKConversationListCellDelegate> _delegate;
	CKConversation* _conversation;

}

@property (nonatomic,retain) NSDate * searchMessageDate;                                             //@synthesize searchMessageDate=_searchMessageDate - In the implementation block
@property (nonatomic,copy) NSString * searchMessageGUID;                                             //@synthesize searchMessageGUID=_searchMessageGUID - In the implementation block
@property (nonatomic,copy) NSString * searchSummaryText;                                             //@synthesize searchSummaryText=_searchSummaryText - In the implementation block
@property (assign,nonatomic) BOOL verified;                                                          //@synthesize verified=_verified - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) CKAvatarView * avatarView; 
@property (nonatomic,readonly) CKLabel * fromLabel; 
@property (assign,nonatomic) BOOL shouldHidePreviewSummary;                                          //@synthesize shouldHidePreviewSummary=_shouldHidePreviewSummary - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierForConversation:(id)arg1 ;
+(double)cellHeight;
-(void)dealloc;
-(NSObject*<CKConversationListCellDelegate>)delegate;
-(void)setDelegate:(NSObject*<CKConversationListCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKAvatarView *)avatarView;
-(CKLabel *)fromLabel;
-(void)setVerified:(BOOL)arg1 ;
-(void)updateWithSearchResult:(id)arg1 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(unsigned long long)unreadMessageCount;
-(void)_increaseContrastDidChange:(id)arg1 ;
-(void)setShouldHidePreviewSummary:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)increaseContrastDidChange;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(NSDate *)searchMessageDate;
-(void)updateSummaryTextForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(id)_makeSummaryAttributedStringWithText:(id)arg1 ;
-(BOOL)shouldHidePreviewSummary;
-(void)updateBlockedSummaryLabelIfNeeded;
-(void)setSearchMessageGUID:(NSString *)arg1 ;
-(void)setSearchMessageDate:(NSDate *)arg1 ;
-(void)setSearchSummaryText:(NSString *)arg1 ;
-(BOOL)showingEditControl;
-(void)updateForEditing:(BOOL)arg1 ;
-(id)summaryAttributedTextForBlockedConversationWithIcon:(BOOL)arg1 ;
-(NSString *)searchMessageGUID;
-(NSString *)searchSummaryText;
-(BOOL)verified;
@end

