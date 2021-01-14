/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryAudio.framework/AccessoryAudio
*/

#import <libobjc.A.dylib/ACCAudioClientProtocol.h>

@class ACCAudioClient, NSString;

@interface ACCAudioManager : NSObject <ACCAudioClientProtocol> {

	ACCAudioClient* _audioClient;

}

@property (nonatomic,retain) ACCAudioClient * audioClient;              //@synthesize audioClient=_audioClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedACCAudioManager;
-(id)init;
-(ACCAudioClient *)audioClient;
-(void)setAudioClient:(ACCAudioClient *)arg1 ;
-(BOOL)setDigitalAudioSampleRate:(unsigned)arg1 ;
-(unsigned)supportedDigitalAudioSampleRate:(unsigned)arg1 ;
-(id)supportedDigitalAudioSampleRates;
-(id)deviceAudioStates;
-(BOOL)allowBackgroundAudioForClient:(id)arg1 ;
@end

