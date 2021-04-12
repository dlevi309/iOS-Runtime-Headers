/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBVoiceControlTransientOverlayViewControllerDelegate.h>

@protocol SiriAssertion;
@class NSArray, SBVoiceControlTransientOverlayViewController, SiriLongPressButtonSource, NSString;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate> {

	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;
	NSArray* _nextRecognitionAudioInputPaths;
	SBVoiceControlTransientOverlayViewController* _transientOverlayViewController;
	SiriLongPressButtonSource* _siriHeadsetDeviceSource;
	id<SiriAssertion> _siriPreheatAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)handleHeadsetButtonUp;
-(id)init;
-(void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(BOOL)handleHomeButtonHeld;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1 ;
-(void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
-(void)_cancelDelayedHeadsetAction;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(BOOL)isVisible;
-(id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(void)_assistantActivationSettingsDidChange:(id)arg1 ;
-(void)dismissTransientOverlay;
-(void)_prepareDelayedHeadsetAction;
-(id)siriBluetoothDeviceSource:(id)arg1 ;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_performDelayedHeadsetActionForAssistant;
-(BOOL)_shouldEnterVoiceControl;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg1 ;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(void)headsetAvailabilityChanged;
-(void)configureVoiceControl;
@end

