/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(unsigned long long)preferredVideosAssetQualityOnWifi;
-(void)setPrivateListeningEnabled:(BOOL)arg1 forHomeUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)isPrivateListeningEnabled;
-(void)setLastSiriPlaybackContextID:(id)arg1 forPlayerID:(id)arg2 ;
-(BOOL)privateListeningEnabledForHomeUserIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setMusicShuffleType:(long long)arg1 ;
-(BOOL)autoPlayEnabledForUserIdentity:(id)arg1 ;
-(long long)_calculateCurrentMusicShuffleType;
-(long long)musicRepeatType;
-(void)setDevicePrivateListeningEnabled:(NSNumber *)arg1 ;
-(id)isDevicePrivateListeningEnabled;
-(long long)musicShuffleType;
-(int)_calculateCurrentMusicEQPreset;
-(void)_mobileiPodPrefsDidChange;
-(BOOL)allowsHighQualityMusicStreamingOnCellular;
-(id)lastSiriPlaybackContextIDForPlayerID:(id)arg1 ;
-(BOOL)includeContentItemDebugFields;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)_postRepeatShuffleTypeGlobalNotification;
-(void)setAutoPlayEnabled:(BOOL)arg1 forUserIdentity:(id)arg2 ;
-(void)_addNotificationObserver:(/*^block*/id)arg1 forUserDefaultKey:(CFStringRef)arg2 ;
-(BOOL)speakerRouteEnabled;
-(void)_loadAccountProperties;
-(unsigned long long)preferredVideosAssetQualityOnCellular;
-(BOOL)soundCheckEnabled;
-(void)setMusicRepeatType:(long long)arg1 ;
-(int)musicEQPreset;
-(void)dealloc;
-(long long)_calculateCurrentMusicRepeatType;
@end

