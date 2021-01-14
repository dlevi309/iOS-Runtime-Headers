/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class CKAvatarView, UILabel, CKConversation, NSString;

@interface CKConversationSearchResultCell : UICollectionViewCell <CNAvatarViewDelegate, CKSearchResultCell> {

	BOOL _ck_editing;
	CKAvatarView* _avatarView;
	UILabel* _nameLabel;
	CKConversation* _conversation;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) CKAvatarView * avatarView;                                                 //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                             //@synthesize conversation=_conversation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize ck_editing=_ck_editing - In the implementation block
+(id)reuseIdentifier;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)prepareForReuse;
-(CKAvatarView *)avatarView;
-(CKConversation *)conversation;
-(void)layoutSubviews;
-(BOOL)_ck_isEditing;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)_configureAvatarViewForConversation:(id)arg1 ;
-(void)_configureNameLabelForConversation:(id)arg1 searchText:(id)arg2 ;
@end

