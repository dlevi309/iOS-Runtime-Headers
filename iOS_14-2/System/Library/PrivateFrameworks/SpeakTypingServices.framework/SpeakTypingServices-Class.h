/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakTypingServices.framework/SpeakTypingServices
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface SpeakTypingServices : NSObject <AXUIClientDelegate> {

	AXUIClient* _speakTypingClient;

}

@property (nonatomic,retain) AXUIClient * speakTypingClient;              //@synthesize speakTypingClient=_speakTypingClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setWordFeedbackEnabled:(BOOL)arg1 ;
-(void)setPhoneticFeedbackEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setLetterFeedbackEnabled:(BOOL)arg1 ;
-(id)_clientIdentifier;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)dealloc;
-(BOOL)notifySpeakServicesToStopSpeaking;
-(BOOL)notifySpeakServicesForSpeechOutput:(id)arg1 volume:(double)arg2 speakingRate:(double)arg3 ;
-(void)initializeServerConnection;
-(AXUIClient *)speakTypingClient;
-(void)setSpeakTypingClient:(AXUIClient *)arg1 ;
-(void)clearLastSpokenString;
-(void)setVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
-(id)lastUsedVoiceIdentifier;
-(id)lastSpokenString;
-(BOOL)verifyTestingConnection;
-(BOOL)notifySpeakServicesForAttributedSpeechOutput:(id)arg1 ;
-(BOOL)notifySpeakServicesForSpeakAutoCorrections:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackCharacter:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackWord:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackQuickTypePrediction:(id)arg1 forCurrentInputMode:(id)arg2 ;
@end

