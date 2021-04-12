/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKAvatarView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell {

	CKAvatarView* _avatarView;

}

@property (nonatomic,retain) CKAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
-(void)dealloc;
-(CKAvatarView *)avatarView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(id)contactImageView;
-(void)layoutSubviewsForContents;
-(void)setShowAvatarView:(BOOL)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4 ;
@end

