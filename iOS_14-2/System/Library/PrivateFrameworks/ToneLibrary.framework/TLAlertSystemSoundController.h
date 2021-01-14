/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_vibrationPatternForAlert:(id)arg1 withSound:(id)arg2 ;
+(double)_unduckTimeForAlert:(id)arg1 ;
-(id)init;
-(void)_assertRunningOnAccessQueue;
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_prepareForDealloc;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_beginRequiringBacklightObservation;
-(void)_notifyOfPlaybackCompletionWithContext:(id)arg1 ;
-(void)_willBeginPlayingAlert:(id)arg1 withSound:(id)arg2 ;
-(void)_playAlert:(id)arg1 withSound:(id)arg2 ;
-(void)_didCompletePlaybackForAlert:(id)arg1 ;
-(void)_preheatForAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_endRequiringBacklightObservation;
-(void)backlightStatusDidChange:(long long)arg1 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)preheatForAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

