/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/


@protocol OS_dispatch_source, MPUNowPlayingDelegate;
@class NSObject, NSDictionary, NSString, UIImage, MPUNowPlayingMetadata;

@interface MPUNowPlayingController : NSObject {

	NSObject*<OS_dispatch_source> _timeInformationTimer;
	NSDictionary* _currentNowPlayingInfo;
	double _currentElapsed;
	double _currentDuration;
	long long _isPlaying;
	NSString* _currentNowPlayingAppDisplayID;
	NSString* _currentNowPlayingAppParentApp;
	BOOL _hasValidCurrentNowPlayingAppDisplayID;
	BOOL _isRegisteredForNowPlayingNotifications;
	BOOL _isUpdatingNowPlayingInfo;
	BOOL _isUpdatingPlaybackState;
	BOOL _isUpdatingNowPlayingApp;
	BOOL _wantsTimeInformationUpdates;
	UIImage* _cachedNowPlayingArtwork;
	BOOL _cachedArtworkDirty;
	BOOL _currentNowPlayingAppIsRunning;
	BOOL _shouldUpdateNowPlayingArtwork;
	id<MPUNowPlayingDelegate> _delegate;
	NSString* _currentNowPlayingArtworkDigest;
	double _timeInformationUpdateInterval;

}

@property (assign,nonatomic,__weak) id<MPUNowPlayingDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentNowPlayingInfo; 
@property (nonatomic,readonly) MPUNowPlayingMetadata * currentNowPlayingMetadata; 
@property (nonatomic,readonly) UIImage * currentNowPlayingArtwork; 
@property (nonatomic,readonly) NSString * currentNowPlayingArtworkDigest;                      //@synthesize currentNowPlayingArtworkDigest=_currentNowPlayingArtworkDigest - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) NSString * nowPlayingAppDisplayID; 
@property (nonatomic,readonly) NSString * nowPlayingAppParentAppDisplayID; 
@property (nonatomic,readonly) BOOL currentNowPlayingAppIsRunning;                             //@synthesize currentNowPlayingAppIsRunning=_currentNowPlayingAppIsRunning - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingAppIsSystemMediaApp; 
@property (nonatomic,readonly) double currentElapsed;                                          //@synthesize currentElapsed=_currentElapsed - In the implementation block
@property (nonatomic,readonly) double currentDuration; 
@property (assign,nonatomic) double timeInformationUpdateInterval;                             //@synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateNowPlayingArtwork;                               //@synthesize shouldUpdateNowPlayingArtwork=_shouldUpdateNowPlayingArtwork - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MPUNowPlayingDelegate>)delegate;
-(void)setDelegate:(id<MPUNowPlayingDelegate>)arg1 ;
-(void)update;
-(BOOL)isPlaying;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)startUpdating;
-(void)stopUpdating;
-(double)currentDuration;
-(void)_updateCurrentNowPlaying;
-(NSDictionary *)currentNowPlayingInfo;
-(void)_updatePlaybackState;
-(void)_updateNowPlayingAppDisplayID;
-(NSString *)nowPlayingAppDisplayID;
-(void)_updateTimeInformationAndCallDelegate:(BOOL)arg1 ;
-(BOOL)_isUpdatingTimeInformation;
-(void)_stopUpdatingTimeInformation;
-(void)_startUpdatingTimeInformation;
-(MPUNowPlayingMetadata *)currentNowPlayingMetadata;
-(UIImage *)currentNowPlayingArtwork;
-(NSString *)nowPlayingAppParentAppDisplayID;
-(BOOL)nowPlayingAppIsSystemMediaApp;
-(void)setTimeInformationUpdateInterval:(double)arg1 ;
-(NSString *)currentNowPlayingArtworkDigest;
-(BOOL)currentNowPlayingAppIsRunning;
-(double)currentElapsed;
-(double)timeInformationUpdateInterval;
-(BOOL)shouldUpdateNowPlayingArtwork;
-(void)setShouldUpdateNowPlayingArtwork:(BOOL)arg1 ;
@end

