/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@protocol HSCloudAvailability <NSObject>
@required
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudVideo;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudMusic;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;

@end

