/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString, NSArray;

@interface VUIPlaybackSettings : NSObject {

	int _preferencesNotifyToken;
	BOOL _preferencesNotifyTokenIsValid;
	BOOL _cellularDataPlaybackEnabled;
	BOOL _cellularDataDownloadEnabled;
	NSString* _preferredAudioLanguageCode;
	long long _networkStatus;
	long long _preferredWifiPlaybackQuality;
	long long _preferredCellularPlaybackQuality;
	long long _preferredWifiDownloadQuality;
	long long _preferredCellularDownloadQuality;
	NSArray* _preferredAudioDownloadLanguages;

}

@property (assign,nonatomic) long long networkStatus;                                                  //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) long long preferredWifiPlaybackQuality;                                   //@synthesize preferredWifiPlaybackQuality=_preferredWifiPlaybackQuality - In the implementation block
@property (assign,nonatomic) long long preferredCellularPlaybackQuality;                               //@synthesize preferredCellularPlaybackQuality=_preferredCellularPlaybackQuality - In the implementation block
@property (assign,nonatomic) long long preferredWifiDownloadQuality;                                   //@synthesize preferredWifiDownloadQuality=_preferredWifiDownloadQuality - In the implementation block
@property (assign,nonatomic) long long preferredCellularDownloadQuality;                               //@synthesize preferredCellularDownloadQuality=_preferredCellularDownloadQuality - In the implementation block
@property (nonatomic,retain) NSArray * preferredAudioDownloadLanguages;                                //@synthesize preferredAudioDownloadLanguages=_preferredAudioDownloadLanguages - In the implementation block
@property (assign,nonatomic) BOOL cellularDataPlaybackEnabled;                                         //@synthesize cellularDataPlaybackEnabled=_cellularDataPlaybackEnabled - In the implementation block
@property (nonatomic,readonly) long long preferredPlaybackQualityForCurrentNetworkStatus; 
@property (assign,nonatomic) BOOL cellularDataDownloadEnabled;                                         //@synthesize cellularDataDownloadEnabled=_cellularDataDownloadEnabled - In the implementation block
@property (nonatomic,readonly) long long preferredDownloadQualityForCurrentNetworkStatus; 
@property (nonatomic,retain) NSString * preferredAudioLanguageCode;                                    //@synthesize preferredAudioLanguageCode=_preferredAudioLanguageCode - In the implementation block
+(id)sharedSettings;
-(id)init;
-(void)dealloc;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(long long)networkStatus;
-(void)setNetworkStatus:(long long)arg1 ;
-(void)_updateNetworkStatus;
-(BOOL)cellularDataPlaybackEnabled;
-(NSString *)preferredAudioLanguageCode;
-(void)setPreferredAudioLanguageCode:(NSString *)arg1 ;
-(long long)preferredPlaybackQualityForCurrentNetworkStatus;
-(long long)preferredCellularPlaybackQuality;
-(void)setCellularDataPlaybackEnabled:(BOOL)arg1 ;
-(void)_networkTypeDidChange:(id)arg1 ;
-(void)_updatePropertiesFromUserPrefs;
-(void)_registerObserverForUserPrefsChange;
-(long long)preferredWifiPlaybackQuality;
-(long long)preferredWifiDownloadQuality;
-(long long)preferredCellularDownloadQuality;
-(long long)_playbackQualityForString:(id)arg1 forCellular:(BOOL)arg2 ;
-(void)setPreferredWifiPlaybackQuality:(long long)arg1 ;
-(void)setPreferredCellularPlaybackQuality:(long long)arg1 ;
-(long long)_downloadQualityForString:(id)arg1 ;
-(void)setPreferredWifiDownloadQuality:(long long)arg1 ;
-(void)setPreferredCellularDownloadQuality:(long long)arg1 ;
-(void)setPreferredAudioDownloadLanguages:(NSArray *)arg1 ;
-(long long)preferredDownloadQualityForCurrentNetworkStatus;
-(BOOL)cellularDataDownloadEnabled;
-(void)setCellularDataDownloadEnabled:(BOOL)arg1 ;
-(NSArray *)preferredAudioDownloadLanguages;
@end

