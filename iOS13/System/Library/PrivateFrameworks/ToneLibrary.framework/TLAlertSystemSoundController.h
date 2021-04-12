/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/

#import <libobjc.A.dylib/TLBacklightObserver.h>
#import <libobjc.A.dylib/TLAlertPlaybackBackEndController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMapTable;

@interface TLAlertSystemSoundController : NSObject <TLBacklightObserver, TLAlertPlaybackBackEndController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSMapTable* _alertSystemSoundContexts;
	long long _backlightStatus;
	unsigned long long _backlightObservationRequestsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_toneIdentifierForDeemphasizingAlert:(id)arg1 ;
+(id)_soundForAlert:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2 ;
+(void)_reportPlaybackFailureWithPlaybackCompletionContext:(id)arg1 ;
+(id)_optionsForSystemSoundAlert:(id)arg1 withSound:(id)arg2 ;
+(unsigned)_soundBehaviorForAlert:(id)arg1 withSound:(id)arg2 ;
+(unsigned)_componentSuppressionFlagsForAlert:(id)arg1 ;
+(id)_descriptionForAlertComponentsSuppressionFlags:(unsigned)arg1 ;
+(id)_vibrationPatternForAlert:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_prepareForDealloc;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_beginRequiringBacklightObservation;
-(void)_notifyOfPlaybackCompletionWithContext:(id)arg1 ;
-(void)_willBeginPlayingAlert:(id)arg1 withSound:(id)arg2 ;
-(void)_playAlert:(id)arg1 withSound:(id)arg2 ;
-(void)_didCompletePlaybackForAlert:(id)arg1 ;
-(void)_endRequiringBacklightObservation;
-(void)backlightStatusDidChange:(long long)arg1 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

