/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _TtC12GameCenterUI22GKAddFriendsLockupView, _TtC12GameCenterUI14EmptyStateView, UIView;

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell {

	long long _friendCount;
	_TtC12GameCenterUI22GKAddFriendsLockupView* _addFriendsLockupView;
	_TtC12GameCenterUI14EmptyStateView* _noFriendsView;
	UIView* _container;
	UIView* _topLine;

}

@property (assign,nonatomic,__weak) _TtC12GameCenterUI22GKAddFriendsLockupView * addFriendsLockupView;              //@synthesize addFriendsLockupView=_addFriendsLockupView - In the implementation block
@property (assign,nonatomic,__weak) _TtC12GameCenterUI14EmptyStateView * noFriendsView;                             //@synthesize noFriendsView=_noFriendsView - In the implementation block
@property (nonatomic,retain) UIView * container;                                                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIView * topLine;                                                                      //@synthesize topLine=_topLine - In the implementation block
@property (assign,nonatomic) long long friendCount;                                                                 //@synthesize friendCount=_friendCount - In the implementation block
@property (assign,nonatomic) BOOL lineVisible; 
-(void)clearContainer;
-(BOOL)lineVisible;
-(void)setLineVisible:(BOOL)arg1 ;
-(void)setTopLine:(UIView *)arg1 ;
-(long long)friendCount;
-(UIView *)topLine;
-(CGSize)preferredLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)configureAddFriendsLockupWithHandler:(/*^block*/id)arg1 ;
-(void)configureNoFriendsViewWithHandler:(/*^block*/id)arg1 ;
-(void)setFriendCount:(long long)arg1 ;
-(_TtC12GameCenterUI22GKAddFriendsLockupView *)addFriendsLockupView;
-(void)setAddFriendsLockupView:(_TtC12GameCenterUI22GKAddFriendsLockupView *)arg1 ;
-(_TtC12GameCenterUI14EmptyStateView *)noFriendsView;
-(void)setNoFriendsView:(_TtC12GameCenterUI14EmptyStateView *)arg1 ;
-(void)setContainer:(UIView *)arg1 ;
-(void)awakeFromNib;
-(UIView *)container;
@end

