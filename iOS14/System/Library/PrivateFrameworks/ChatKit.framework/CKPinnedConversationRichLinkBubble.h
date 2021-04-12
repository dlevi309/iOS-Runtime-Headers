/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPinnedConversationTailedActivityItemView.h>
#import <libobjc.A.dylib/LPLinkViewDelegate.h>

@class CKPinnedConversationRichLinkActivityItem, LPLinkView, NSString;

@interface CKPinnedConversationRichLinkBubble : CKPinnedConversationTailedActivityItemView <LPLinkViewDelegate> {

	double _pillCornerRadius;
	long long _activityItemViewContentScale;
	CKPinnedConversationRichLinkActivityItem* _richLinkActivityItem;
	LPLinkView* _linkView;

}

@property (nonatomic,retain) LPLinkView * linkView;                                                          //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationRichLinkActivityItem * richLinkActivityItem;              //@synthesize richLinkActivityItem=_richLinkActivityItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setActivityItem:(id)arg1 ;
-(void)_updatePillCornerRadius;
-(long long)contentViewContentMode;
-(BOOL)supportsActivityItemViewContentScale;
-(UIEdgeInsets)contentViewPadding;
-(double)contentViewHorizontalInsetForPillCornerRadius;
-(long long)activityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(void)linkViewNeedsResize:(id)arg1 ;
-(void)_updateLinkMetadata;
-(CKPinnedConversationRichLinkActivityItem *)richLinkActivityItem;
-(id)initWithRichLinkActivityItem:(id)arg1 ;
-(LPLinkView *)linkView;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(double)pillCornerRadius;
@end

