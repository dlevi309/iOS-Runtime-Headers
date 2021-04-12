/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListEmbeddedCollectionViewCell.h>
#import <libobjc.A.dylib/CKConversationListCellDelegate.h>
#import <libobjc.A.dylib/CKConversationListCell.h>

@protocol CKConversationListCollectionViewCellDelegate;
@class NSObject, _CKCollectionViewTapGestureRecognizer, NSString;

@interface CKConversationListCollectionViewConversationCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate, CKConversationListCell> {

	NSObject*<CKConversationListCollectionViewCellDelegate> _delegate;
	_CKCollectionViewTapGestureRecognizer* _avatarViewTapGestureRecognizer;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                            //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKConversationListCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePreviewSummary; 
@property (nonatomic,retain) _CKCollectionViewTapGestureRecognizer * avatarViewTapGestureRecognizer;               //@synthesize avatarViewTapGestureRecognizer=_avatarViewTapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellHeightForDisplayScale:(double)arg1 ;
+(id)identifierForConversation:(id)arg1 ;
+(Class)embeddedTableViewCellClass;
+(id)reuseIdentifier;
+(Class)conversationCellClassForCurrentSizeCategory;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<CKConversationListCollectionViewCellDelegate>)delegate;
-(void)updateContentsForConversation:(id)arg1 ;
-(id)avatarView;
-(void)setDelegate:(NSObject*<CKConversationListCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didHoverOverCell:(id)arg1 ;
-(void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)setShouldHidePreviewSummary:(BOOL)arg1 ;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(BOOL)shouldHidePreviewSummary;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(double)widthForDeterminingAvatarVisibility;
-(void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(id)embeddedConversationTableViewCell;
-(void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg1 forConversation:(id)arg2 animated:(BOOL)arg3 ;
-(_CKCollectionViewTapGestureRecognizer *)avatarViewTapGestureRecognizer;
-(void)setAvatarViewTapGestureRecognizer:(_CKCollectionViewTapGestureRecognizer *)arg1 ;
@end

