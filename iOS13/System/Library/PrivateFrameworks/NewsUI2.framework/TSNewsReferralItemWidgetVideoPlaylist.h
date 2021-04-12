/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


@class TSNewsReferralItemWidgetArticleList, FCVideoGroupsConfig, NTPBDiscoverMoreVideosInfo;

@interface TSNewsReferralItemWidgetVideoPlaylist : NSObject {

	 widgetArticleList;
	 preferredMuteState;
	 videoGroupsConfig;
	 discoverMoreVideosInfo;
	 prerollLoadingTimeout;
	 onboardingVersion;

}

@property (readonly,nonatomic) TSNewsReferralItemWidgetArticleList * widgetArticleList; 
@property (readonly,nonatomic) BOOL preferredMuteState; 
@property (readonly,nonatomic) FCVideoGroupsConfig * videoGroupsConfig; 
@property (readonly,nonatomic) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (readonly,nonatomic) double prerollLoadingTimeout; 
@property (readonly,nonatomic) long long onboardingVersion; 
-(id)init;
-(long long)onboardingVersion;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(double)prerollLoadingTimeout;
-(BOOL)preferredMuteState;
-(FCVideoGroupsConfig *)videoGroupsConfig;
-(TSNewsReferralItemWidgetArticleList *)widgetArticleList;
-(id)initWithWidgetArticleList:(id)arg1 preferredMuteState:(BOOL)arg2 videoGroupsConfig:(id)arg3 discoverMoreVideosInfo:(id)arg4 prerollLoadingTimeout:(double)arg5 onboardingVersion:(long long)arg6 ;
@end

