/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_voiceTriggerPolicyDisabled;
-(void)_handleSpeakerInactivated;
-(id)init;
-(void)start;
-(void)_handleSpeakerActivated;
-(void)_enableCoreSpeechDaemonKeepAlive;
-(void)_voiceTriggerPolicyEnabled;
-(void)voiceTriggerPolicyDidChange:(BOOL)arg1 ;
-(BOOL)_coreSpeechDaemonKeepAlived;
-(void)_disableCoreSpeechDaemonKeepAlive;
-(void)dealloc;
-(void)VTSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
@end

