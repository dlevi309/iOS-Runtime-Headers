/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/


@protocol OS_dispatch_queue;
#import <TextToSpeech/TextToSpeech-Structs.h>
@class NSObject;

@interface TTSAudioSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _audioSessionIsSetUp;
	SCD_Struct_TT2 _desiredState;
	SCD_Struct_TT2 _cachedState;
	BOOL _bluetoothAllowed;
	CFBagRef _activityBag;
	long long _serverGeneration;

}
+(id)sharedInstance;
-(id)init;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)dealloc;
-(void)_audioSessionInterrupted:(id)arg1 ;
-(void)_setupAudioSession;
-(void)_setCategoryForActivity:(long long)arg1 ;
-(long long)_nextActivityForActive:(BOOL)arg1 activity:(long long)arg2 serverActivity:(long long)arg3 ;
-(void)_safeSetupAudioSession;
-(long long)_safeServerGeneration;
-(void)_safeSetCategoryForActivity:(long long)arg1 ;
-(void)_safeSetActive:(BOOL)arg1 withActivity:(long long)arg2 ;
-(void)_safeSetBluetoothInputAllowed:(BOOL)arg1 ;
@end

