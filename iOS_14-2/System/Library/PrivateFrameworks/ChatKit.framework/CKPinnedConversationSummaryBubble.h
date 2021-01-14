/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPinnedConversationTailedActivityItemView.h>

@class CKPinnedConversationSummaryBubbleActivityItem, UILabel, NSAttributedString;

@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView {

	CKPinnedConversationSummaryBubbleActivityItem* _summaryBubbleActivityItem;
	UILabel* _summaryLabel;

}

@property (nonatomic,retain) UILabel * summaryLabel;                                                                   //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationSummaryBubbleActivityItem * summaryBubbleActivityItem;              //@synthesize summaryBubbleActivityItem=_summaryBubbleActivityItem - In the implementation block
@property (nonatomic,readonly) NSAttributedString * summaryText; 
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setActivityItem:(id)arg1 ;
-(long long)contentViewContentMode;
-(BOOL)supportsActivityItemViewContentScale;
-(UIEdgeInsets)contentViewPadding;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(NSAttributedString *)summaryText;
-(void)_updateSummaryLabel;
-(id)summaryLabelFont;
-(id)_summaryLabelTextColor;
-(id)initWithSummaryBubbleActivityItem:(id)arg1 ;
-(CKPinnedConversationSummaryBubbleActivityItem *)summaryBubbleActivityItem;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(UILabel *)summaryLabel;
-(double)pillCornerRadius;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

