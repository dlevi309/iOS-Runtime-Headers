/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface _CKAcknowledgmentVoteCountView : UIView {

	UILabel* _voteCountLabel;
	UIImageView* _ackIconImageView;

}

@property (nonatomic,retain) UILabel * voteCountLabel;                    //@synthesize voteCountLabel=_voteCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * ackIconImageView;              //@synthesize ackIconImageView=_ackIconImageView - In the implementation block
-(void)configureWithAcknowledgmentTally:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setVoteCountLabel:(UILabel *)arg1 ;
-(UILabel *)voteCountLabel;
-(void)setAckIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)ackIconImageView;
@end

