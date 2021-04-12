/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/


@protocol OS_dispatch_queue;
#import <ActivityAchievementsUI/ActivityAchievementsUI-Structs.h>
@class NSMutableDictionary, AAUIAchievementResourceProvider, AAUIBadgeView, NSObject;

@interface AAUIBadgeImageFactory : NSObject {

	NSMutableDictionary* _cache;
	AAUIAchievementResourceProvider* _resourceProvider;
	AAUIBadgeView* _earnedBadgeView;
	AAUIBadgeView* _unearnedBadgeView;
	NSObject*<OS_dispatch_queue> _imageCreationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                                     //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) AAUIAchievementResourceProvider * resourceProvider;              //@synthesize resourceProvider=_resourceProvider - In the implementation block
@property (nonatomic,retain) AAUIBadgeView * earnedBadgeView;                                 //@synthesize earnedBadgeView=_earnedBadgeView - In the implementation block
@property (nonatomic,retain) AAUIBadgeView * unearnedBadgeView;                               //@synthesize unearnedBadgeView=_unearnedBadgeView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> imageCreationQueue;                 //@synthesize imageCreationQueue=_imageCreationQueue - In the implementation block
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(AAUIAchievementResourceProvider *)resourceProvider;
-(id)generateImageForConfiguration:(id)arg1 size:(CGSize)arg2 unearned:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)imageCreationQueue;
-(AAUIBadgeView *)unearnedBadgeView;
-(AAUIBadgeView *)earnedBadgeView;
-(id)thumbnailImageForAchievement:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)hasCachedThumbnailImageForAchievement:(id)arg1 size:(CGSize)arg2 ;
-(void)clearAllCachedImages;
-(void)setResourceProvider:(AAUIAchievementResourceProvider *)arg1 ;
-(void)setEarnedBadgeView:(AAUIBadgeView *)arg1 ;
-(void)setUnearnedBadgeView:(AAUIBadgeView *)arg1 ;
-(void)setImageCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

