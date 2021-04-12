/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)turnOff;
-(void)dealloc;
-(void)turnOnWithVibrationPattern:(id)arg1 ;
-(unsigned long long)vibratorState;
-(void)_turnOffIfAppropriate;
-(unsigned)_previewVibrationSystemSoundID;
-(void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1 ;
@end

