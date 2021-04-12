/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isVisible;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)configureVoiceControl;
-(void)dismissTransientOverlay;
-(void)headsetAvailabilityChanged;
-(void)handleHeadsetButtonDownWithClickCount:(unsigned long long)arg1 ;
-(BOOL)handleHeadsetButtonUp;
-(BOOL)handleHeadsetButtonUpNotInCall;
-(void)bluetoothDeviceInitiatedVoiceControl:(id)arg1 ;
-(void)bluetoothDeviceEndedVoiceControl:(id)arg1 ;
-(BOOL)handleHomeButtonHeld;
-(void)_updateNextRecognitionAudioInputPaths:(id)arg1 ;
-(void)_assistantActivationSettingsDidChange:(id)arg1 ;
-(BOOL)_shouldEnterVoiceControl;
-(id)_newVoiceControlTransientOverlayViewControllerWithSource:(id)arg1 ;
-(void)_performDelayedHeadsetActionForAssistant;
-(void)_performDelayedHeadsetActionForVoiceControl;
-(void)_prepareDelayedHeadsetAction;
-(void)_cancelDelayedHeadsetAction;
-(id)siriBluetoothDeviceSource:(id)arg1 ;
-(void)voiceControlTransientOverlayViewControllerDidDisappear:(id)arg1 ;
-(void)voiceControlTransientOverlayViewControllerRequestsDismissal:(id)arg1 ;
@end

