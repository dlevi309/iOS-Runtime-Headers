/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TUAudioController.h>

@protocol OS_dispatch_queue, TUAudioSystemControllerDelegate;
@class NSObject, NSNumber, NSArray, NSDictionary;

@interface TUAudioSystemController : TUAudioController {

	NSObject*<OS_dispatch_queue> _uplinkMutedQueue;
	NSObject*<OS_dispatch_queue> _downlinkMutedQueue;
	NSObject*<OS_dispatch_queue> _ttyQueue;
	NSObject*<OS_dispatch_queue> _pickableRoutesQueue;
	NSNumber* _isUplinkMutedCached;
	NSNumber* _isDownlinkMutedCached;
	NSNumber* _isTTYCached;
	NSArray* _pickableRoutesForTTY;
	NSArray* _pickableRoutesForPhoneCall;
	NSArray* _pickableRoutesForPlayAndRecordVideo;
	NSArray* _pickableRoutesForPlayAndRecordVoice;
	NSArray* _pickableRoutesForPlayAndRecordRemoteVoice;
	NSArray* _pickableRoutesForVoicemail;
	NSArray* _currentPickableRoutes;
	BOOL _isRequestingUplinkMuted;
	BOOL _isRequestingDownlinkMuted;
	BOOL _isRequestingTTY;
	BOOL _isRequestingPickableRoutesForTTY;
	BOOL _isRequestingPickableRoutesForPhoneCall;
	BOOL _isRequestingPickableRoutesForPlayAndRecordVideo;
	BOOL _isRequestingPickableRoutesForPlayAndRecordVoice;
	BOOL _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
	BOOL _isRequestingPickableRoutesForVoicemail;
	unsigned long long _lastUplinkMutedRequestScheduleTime;
	unsigned long long _lastDownlinkMutedRequestScheduleTime;
	unsigned long long _lastTTYRequestScheduleTime;
	unsigned long long _lastTTYPickableRoutesScheduleTime;
	unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
	unsigned long long _lastVoicemailRoutesScheduleTime;
	id<TUAudioSystemControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TUAudioSystemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float activeCategoryVolume; 
@property (assign,getter=isUplinkMuted,nonatomic) BOOL uplinkMuted; 
@property (assign,getter=isDownlinkMuted,nonatomic) BOOL downlinkMuted; 
@property (getter=isTTY,nonatomic,readonly) BOOL tty; 
@property (nonatomic,copy,readonly) NSDictionary * pickedRouteAttribute; 
@property (nonatomic,copy,readonly) NSArray * bestGuessPickableRoutesForAnyCall; 
@property (nonatomic,copy,readonly) NSArray * pickableRoutesForTTY; 
@property (nonatomic,readonly) BOOL otherSessionsRequestNoRingtoneInterruption; 
+(id)sourceIdentifierForRouteID:(id)arg1 ;
+(id)filteredPickableRoutesFromPickableRoutes:(id)arg1 ;
+(id)sharedSystemController;
+(id)sharedAudioSystemController;
-(BOOL)otherSessionsRequestNoRingtoneInterruption;
-(id)init;
-(id<TUAudioSystemControllerDelegate>)delegate;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)arg1 ;
-(void)_handleDownlinkMuteDidChangeNotification:(id)arg1 ;
-(id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)arg1 ;
-(void)_loadCurrentPickableRoutesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isTTY;
-(id)currentlyPickedRouteIdForCategory:(id)arg1 andMode:(id)arg2 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)setDelegate:(id<TUAudioSystemControllerDelegate>)arg1 ;
-(id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1 ;
-(id)pickableRouteWithUniqueIdentifier:(id)arg1 ;
-(NSArray *)pickableRoutesForTTY;
-(BOOL)isDownlinkMuted;
-(void)_handlePickableRoutesDidChangeNotification:(id)arg1 ;
-(NSDictionary *)pickedRouteAttribute;
-(BOOL)shouldSuppressCallUsingRoute:(id)arg1 ;
-(id)pickableRoutesForActiveCall;
-(BOOL)isUplinkMuted;
-(NSArray *)bestGuessPickableRoutesForAnyCall;
-(id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2 ;
-(void)setDownlinkMuted:(BOOL)arg1 ;
-(float)activeCategoryVolume;
-(id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)arg1 ;
-(void)_updateCachedState;
-(void)_handleUplinkMuteDidChangeNotification:(id)arg1 ;
-(void)_getPickableRoutesForCategory:(id)arg1 mode:(id)arg2 onlyKnownCombinations:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setActiveCategoryVolume:(float)arg1 ;
-(BOOL)pickRoute:(id)arg1 error:(id*)arg2 ;
-(id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)arg1 ;
-(void)dealloc;
-(void)_handleVolumeDidChangeNotification:(id)arg1 ;
-(void)getPickableRoutesForCategory:(id)arg1 mode:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

