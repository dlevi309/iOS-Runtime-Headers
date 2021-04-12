/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject, NSMutableDictionary, NSNumber;

@interface MPPlaybackUserDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsHighQualityMusicStreamingOnCellular;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	int _musicEQPreset;
	long long _musicRepeatType;
	long long _musicShuffleType;
	BOOL _soundCheckEnabled;
	BOOL _speakerRouteEnabled;
	BOOL _includeContentItemDebugFields;
	NSMutableDictionary* _lastSiriPlaybackContextIDs;
	vector<int, std::__1::allocator<int> >* _notifyTokens;
	NSObject*<OS_dispatch_queue> _userDefaultsMutationQueue;
	NSNumber* _currentPrivateListeningEnabledValue;
	NSObject*<OS_dispatch_queue> _loadValuesQueue;
	NSNumber* _devicePrivateListeningEnabled;

}

@property (nonatomic,readonly) BOOL allowsHighQualityMusicStreamingOnCellular; 
@property (nonatomic,readonly) int musicEQPreset;                                                                        //@synthesize musicEQPreset=_musicEQPreset - In the implementation block
@property (assign,nonatomic) long long musicRepeatType; 
@property (assign,nonatomic) long long musicShuffleType; 
@property (nonatomic,readonly) BOOL soundCheckEnabled; 
@property (nonatomic,readonly) BOOL speakerRouteEnabled; 
@property (nonatomic,readonly) BOOL includeContentItemDebugFields; 
@property (nonatomic,readonly) unsigned long long preferredVideosAssetQualityOnCellular; 
@property (nonatomic,readonly) unsigned long long preferredVideosAssetQualityOnWifi; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled; 
@property (getter=isDevicePrivateListeningEnabled,nonatomic,copy) NSNumber * devicePrivateListeningEnabled;              //@synthesize devicePrivateListeningEnabled=_devicePrivateListeningEnabled - In the implementation block
+(id)standardUserDefaults;
-(id)init;
-(void)dealloc;
-(BOOL)allowsHighQualityMusicStreamingOnCellular;
-(long long)musicRepeatType;
-(long long)musicShuffleType;
-(void)setMusicRepeatType:(long long)arg1 ;
-(void)setMusicShuffleType:(long long)arg1 ;
-(BOOL)soundCheckEnabled;
-(BOOL)speakerRouteEnabled;
-(BOOL)includeContentItemDebugFields;
-(unsigned long long)preferredVideosAssetQualityOnCellular;
-(unsigned long long)preferredVideosAssetQualityOnWifi;
-(id)isPrivateListeningEnabled;
-(id)isDevicePrivateListeningEnabled;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(id)lastSiriPlaybackContextIDForPlayerID:(id)arg1 ;
-(void)setLastSiriPlaybackContextID:(id)arg1 forPlayerID:(id)arg2 ;
-(void)_addNotificationObserver:(/*^block*/id)arg1 forUserDefaultKey:(CFStringRef)arg2 ;
-(int)_calculateCurrentMusicEQPreset;
-(long long)_calculateCurrentMusicRepeatType;
-(long long)_calculateCurrentMusicShuffleType;
-(void)_postRepeatShuffleTypeGlobalNotification;
-(void)_mobileiPodPrefsDidChange;
-(void)_loadAccountProperties;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(int)musicEQPreset;
-(void)setDevicePrivateListeningEnabled:(NSNumber *)arg1 ;
@end

