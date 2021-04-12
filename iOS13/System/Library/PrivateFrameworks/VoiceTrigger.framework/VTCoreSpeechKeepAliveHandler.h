/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTSiriEnabledMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VTCoreSpeechKeepAliveHandler : NSObject <VTSiriEnabledMonitorDelegate> {

	int _activeNotificationToken;
	int _inactiveNotificationToken;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _voiceTriggerEnabled;
	BOOL _speakerStateActivated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)start;
-(void)VTSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(void)_enableCoreSpeechDaemonKeepAlive;
-(void)_disableCoreSpeechDaemonKeepAlive;
-(void)_handleSpeakerActivated;
-(void)_handleSpeakerInactivated;
-(void)_voiceTriggerPolicyEnabled;
-(void)_voiceTriggerPolicyDisabled;
-(BOOL)_coreSpeechDaemonKeepAlived;
-(void)voiceTriggerPolicyDidChange:(BOOL)arg1 ;
@end

