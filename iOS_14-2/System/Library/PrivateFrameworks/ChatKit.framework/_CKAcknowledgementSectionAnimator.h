/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class UICollectionViewLayoutAttributes, CNAvatarView, UILabel, UIImageView, UIView, CKEntity;

@interface _CKAcknowledgementSectionAnimator : NSObject {

	UICollectionViewLayoutAttributes* _avatarViewAttr;
	CNAvatarView* _avatarView;
	UILabel* _voteCountLabel;
	UICollectionViewLayoutAttributes* _voteCountViewAttr;
	UIImageView* _ackIconView;
	UICollectionViewLayoutAttributes* _ackIconViewAttr;
	UIView* _containerView;
	unsigned long long _ackVoteCount;
	CKEntity* _entityToShow;
	long long _acknowledgmentType;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * avatarViewAttr;                 //@synthesize avatarViewAttr=_avatarViewAttr - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                         //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * voteCountLabel;                                          //@synthesize voteCountLabel=_voteCountLabel - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * voteCountViewAttr;              //@synthesize voteCountViewAttr=_voteCountViewAttr - In the implementation block
@property (nonatomic,retain) UIImageView * ackIconView;                                         //@synthesize ackIconView=_ackIconView - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * ackIconViewAttr;                //@synthesize ackIconViewAttr=_ackIconViewAttr - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long ackVoteCount;                                   //@synthesize ackVoteCount=_ackVoteCount - In the implementation block
@property (nonatomic,retain) CKEntity * entityToShow;                                           //@synthesize entityToShow=_entityToShow - In the implementation block
@property (assign,nonatomic) long long acknowledgmentType;                                      //@synthesize acknowledgmentType=_acknowledgmentType - In the implementation block
-(void)setContainerView:(UIView *)arg1 ;
-(UIImageView *)ackIconView;
-(unsigned long long)ackVoteCount;
-(UICollectionViewLayoutAttributes *)ackIconViewAttr;
-(void)setAckIconView:(UIImageView *)arg1 ;
-(UICollectionViewLayoutAttributes *)voteCountViewAttr;
-(void)_updateAckIconViewDelayTime:(double)arg1 ;
-(void)_updateAvatarViewDelayTime:(double)arg1 ;
-(void)_updateVoteCountViewDelayTime:(double)arg1 ;
-(UICollectionViewLayoutAttributes *)avatarViewAttr;
-(CKEntity *)entityToShow;
-(void)animateInAckIconView:(double)arg1 ;
-(void)insertAvatarDelayTime:(double)arg1 ;
-(void)setAvatarViewAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setEntityToShow:(CKEntity *)arg1 ;
-(void)setVoteCountViewAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setAckIconViewAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(CNAvatarView *)avatarView;
-(long long)acknowledgmentType;
-(void)setAcknowledgmentType:(long long)arg1 ;
-(UIView *)containerView;
-(void)setVoteCountLabel:(UILabel *)arg1 ;
-(UILabel *)voteCountLabel;
-(void)setAckVoteCount:(unsigned long long)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)dealloc;
@end

