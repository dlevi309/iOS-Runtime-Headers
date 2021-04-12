/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol ICCloudAvailability <NSObject>
@required
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudVideo;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudMusic;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;

@end

