/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol CKConversationListCellDelegate;
@class UIButton, CKAvatarView, NSObject, CKConversation;

@interface CKConversationListNewMessageCell : UITableViewCell {

	UIButton* _closeButton;
	CKAvatarView* _avatarView;
	NSObject*<CKConversationListCellDelegate> _delegate;
	CKConversation* _conversation;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
+(id)identifier;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isCollapsed;
-(NSObject*<CKConversationListCellDelegate>)delegate;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(id)avatarView;
-(void)setDelegate:(NSObject*<CKConversationListCellDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)layoutSubviews;
-(void)deleteButtonTapped;
-(BOOL)showingEditControl;
-(void)updateWithForwardedConfigurationState:(unsigned long long)arg1 ;
-(void)updateFontSize;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(double)leadingLayoutMargin;
-(BOOL)_boundsShouldCollapseContent:(CGRect)arg1 ;
-(void)_updateLabelVisibility;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

