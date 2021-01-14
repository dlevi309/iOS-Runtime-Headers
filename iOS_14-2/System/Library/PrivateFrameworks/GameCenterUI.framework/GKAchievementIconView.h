/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class GKAchievement;

@interface GKAchievementIconView : UIImageView {

	BOOL _isDetail;
	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (nonatomic,retain) GKAchievement * achievement;                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;              //@synthesize localAchievement=_localAchievement - In the implementation block
@property (assign,nonatomic) BOOL isDetail;                                 //@synthesize isDetail=_isDetail - In the implementation block
+(id)progressSourceDetail;
+(id)progressSource;
-(GKAchievement *)achievement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)setIsDetail:(BOOL)arg1 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(BOOL)isDetail;
-(GKAchievement *)localAchievement;
-(void)configureImage;
-(double)progressForAchievement:(id)arg1 ;
-(void)dealloc;
-(id)processProgressImage:(id)arg1 forAchievement:(id)arg2 ;
-(id)progressIdentifierForAchievement:(id)arg1 ;
-(void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

