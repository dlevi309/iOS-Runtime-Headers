/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/


#import <GameCenterUICore/GameCenterUICore-Structs.h>
@class NSCache, GKNetworkImageSource, UIImage;

@interface GKUITheme : NSObject {

	NSCache* _resourceCache;

}

@property (nonatomic,retain) NSCache * resourceCache;                                                     //@synthesize resourceCache=_resourceCache - In the implementation block
@property (nonatomic,retain,readonly) GKNetworkImageSource * macGameIconSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * photoListSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * photoDetailSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * iconLeaderboardListSource; 
@property (nonatomic,retain,readonly) GKNetworkImageSource * iconLeaderboardSetListSource; 
@property (nonatomic,readonly) GKNetworkImageSource * untreatedAchievementImageSource; 
@property (nonatomic,readonly) GKNetworkImageSource * untreatedAchievementImageDetailSource; 
@property (nonatomic,retain,readonly) UIImage * ratingStarsBackgroundImage; 
@property (nonatomic,retain,readonly) UIImage * ratingStarsForegroundImage; 
@property (nonatomic,retain,readonly) UIImage * interactiveRatingStarsForeground; 
@property (nonatomic,retain,readonly) UIImage * interactiveRatingStarsBackground; 
@property (nonatomic,readonly) CGSize formSheetSize; 
@property (nonatomic,readonly) CGSize authenticateExtensionFormSheetSize; 
@property (nonatomic,readonly) double formSheetCornerRadius; 
+(id)sharedTheme;
-(id)imageNamed:(id)arg1 ;
-(id)init;
-(id)playerPickerSelectedImage;
-(id)playerPickerUnselectedImage;
-(id)statusDotImage;
-(id)eventIconImage;
-(id)achievementsNotStartedIcon;
-(id)achievementsDefaultIcon;
-(NSCache *)resourceCache;
-(UIImage *)ratingStarsBackgroundImage;
-(UIImage *)ratingStarsForegroundImage;
-(id)defaultPlayerPhoto;
-(void)setResourceCache:(NSCache *)arg1 ;
-(CGSize)authenticateExtensionFormSheetSize;
-(CGSize)formSheetSize;
-(GKNetworkImageSource *)macGameIconSource;
-(double)formSheetCornerRadius;
-(GKNetworkImageSource *)iconLeaderboardSetListSource;
-(GKNetworkImageSource *)iconLeaderboardListSource;
-(void)clearResourceCache;
-(id)avatarSourceWithDimension:(long long)arg1 ;
-(GKNetworkImageSource *)untreatedAchievementImageDetailSource;
-(id)messagesInviteBackgroundImage;
-(id)monogramSourceWithDimension:(long long)arg1 ;
-(GKNetworkImageSource *)untreatedAchievementImageSource;
-(id)placeholderSourceWithDimension:(long long)arg1 ;
-(id)resourceWithName:(id)arg1 missingHandler:(/*^block*/id)arg2 ;
-(id)resourceForSelector:(SEL)arg1 missingHandler:(/*^block*/id)arg2 ;
-(id)defaultLeaderboardIcon;
-(UIImage *)interactiveRatingStarsForeground;
-(UIImage *)interactiveRatingStarsBackground;
-(GKNetworkImageSource *)photoListSource;
-(GKNetworkImageSource *)photoDetailSource;
-(id)removePlayerButtonImage;
-(id)navbarActionButtonIcon;
@end

