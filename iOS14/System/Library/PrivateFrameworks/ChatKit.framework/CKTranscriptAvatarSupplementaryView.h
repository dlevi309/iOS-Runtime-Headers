/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCollectionSupplementaryView.h>

@class CKAvatarView;

@interface CKTranscriptAvatarSupplementaryView : CKTranscriptCollectionSupplementaryView {

	CKAvatarView* _avatarView;

}

@property (nonatomic,retain) CKAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)supplementaryViewKindPrefix;
-(id)initWithFrame:(CGRect)arg1 ;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
-(void)dealloc;
@end

