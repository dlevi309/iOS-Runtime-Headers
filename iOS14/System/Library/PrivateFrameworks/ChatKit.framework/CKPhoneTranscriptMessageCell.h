/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTranscriptMessageCell.h>

@class CKAvatarView, UIImageView;

@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell {

	CKAvatarView* _avatarView;
	UIImageView* _printableAvatarView;

}

@property (nonatomic,retain) CKAvatarView * avatarView;                      //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImageView * printableAvatarView;              //@synthesize printableAvatarView=_printableAvatarView - In the implementation block
-(void)layoutSubviewsForContents;
-(UIImageView *)printableAvatarView;
-(void)setPrintableAvatarView:(UIImageView *)arg1 ;
-(void)setShowAvatarView:(BOOL)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4 ;
-(CKAvatarView *)avatarView;
-(id)contactImageView;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)dealloc;
@end

