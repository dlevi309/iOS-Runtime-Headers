/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <libobjc.A.dylib/AFAudioPowerUpdaterDelegate.h>

@protocol AFUIPowerLevelListenerDelegate;
@class AFAudioPowerUpdater, VSSpeechSynthesizer, NSString;

@interface AFUIPowerLevelListener : NSObject <AFAudioPowerUpdaterDelegate> {

	id<AFUIPowerLevelListenerDelegate> _powerLevelListenerDelegate;
	AFAudioPowerUpdater* _outputAudioPowerUpdater;
	VSSpeechSynthesizer* _synthesizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(long long)_frequency;
-(void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3 ;
-(void)dealloc;
-(void)beginListeningToSpeechSynthesizer:(id)arg1 ;
-(void)endListening;
@end

