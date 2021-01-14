/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@class GKGameRecord, UISegmentedControl;

@interface GKDashboardHeaderView : UICollectionReusableView {

	BOOL _didSetupLikeButton;
	GKGameRecord* _gameRecord;
	UISegmentedControl* _segmentedControl;

}

@property (assign,nonatomic) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic) BOOL didSetupLikeButton;                            //@synthesize didSetupLikeButton=_didSetupLikeButton - In the implementation block
@property (nonatomic,retain) GKGameRecord * gameRecord;                          //@synthesize gameRecord=_gameRecord - In the implementation block
+(double)defaultHeight;
-(BOOL)didSetupLikeButton;
-(void)setDidSetupLikeButton:(BOOL)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(void)awakeFromNib;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)dealloc;
@end

