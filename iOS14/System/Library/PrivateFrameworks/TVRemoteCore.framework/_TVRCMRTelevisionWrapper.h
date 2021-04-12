/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString, NSDictionary, _TVRCMROriginWrapper;

@interface _TVRCMRTelevisionWrapper : NSObject {

	void* _television;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * alternateIdentifiers; 
@property (nonatomic,copy,readonly) NSString * softwareVersion; 
@property (readonly) BOOL isPairingAllowed; 
@property (nonatomic,readonly) unsigned voiceRecordingState; 
@property (nonatomic,copy,readonly) _TVRCMROriginWrapper * customOrigin; 
+(void)deletePairedDevice:(id)arg1 ;
+(id)wrapperWithTelevision:(void*)arg1 ;
-(void)disconnect;
-(void)deleteBackward;
-(void)insertText:(id)arg1 ;
-(void)setConnectionStateHandler:(/*^block*/id)arg1 ;
-(void)connect;
-(void)setText:(id)arg1 ;
-(NSString *)softwareVersion;
-(NSString *)name;
-(unsigned)voiceRecordingState;
-(id)description;
-(_TVRCMROriginWrapper *)customOrigin;
-(void)sendButtonEvent:(MRHIDButtonEvent)arg1 ;
-(NSString *)identifier;
-(BOOL)isPairingAllowed;
-(void)clearText;
-(void)dealloc;
-(id)initWithTelevision:(void*)arg1 ;
-(NSDictionary *)alternateIdentifiers;
-(void)setNameChangedHandler:(/*^block*/id)arg1 ;
-(void)setPairingHandler:(/*^block*/id)arg1 ;
-(void)sendTouchEvent:(MRHIDTouchEvent)arg1 withDeviceID:(unsigned long long)arg2 ;
-(void)sendGameControllerDigitizerEvent:(id)arg1 withControllerID:(unsigned long long)arg2 ;
-(void)setWantsNowPlayingUpdates:(BOOL)arg1 ;
-(void)registerVirtualTouchDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVoiceRecordingStateHandler:(/*^block*/id)arg1 ;
-(void)registerVirtualVoiceInputDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAudioData:(id)arg1 withDeviceID:(unsigned)arg2 ;
-(void)setWantsVolumeControlAvailabilityUpdates:(BOOL)arg1 ;
-(void)setGameControllerInputModeHandler:(/*^block*/id)arg1 ;
-(void)registerGameControllerDevice:(/*^block*/id)arg1 ;
-(void)unregisterGameControllerDevice:(unsigned long long)arg1 ;
-(void)sendGameControllerButtonEventWithButton:(unsigned long long)arg1 isDown:(BOOL)arg2 controllerID:(unsigned long long)arg3 ;
-(void)setTextEditingHandler:(/*^block*/id)arg1 ;
-(void)getTextEditingSession:(/*^block*/id)arg1 ;
-(void)setRTISessionHandler:(/*^block*/id)arg1 ;
-(void)getCurrentRTISourceSession:(/*^block*/id)arg1 ;
@end

