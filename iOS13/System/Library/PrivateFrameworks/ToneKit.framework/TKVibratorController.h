/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@class TLAccessQueue, NSUUID, NSMutableSet;

@interface TKVibratorController : NSObject {

	TLAccessQueue* _accessQueue;
	NSUUID* _activePlayRequestIdentifier;
	NSMutableSet* _pendingStopRequestIdentifiers;

}

@property (nonatomic,readonly) unsigned long long vibratorState; 
-(id)init;
-(void)dealloc;
-(void)turnOff;
-(void)turnOnWithVibrationPattern:(id)arg1 ;
-(unsigned long long)vibratorState;
-(void)_turnOffIfAppropriate;
-(unsigned)_previewVibrationSystemSoundID;
-(void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1 ;
@end

