/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <libobjc.A.dylib/AUAudioUnitHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AUAudioUnit;

@interface AUHostDelegate : NSObject <AUAudioUnitHostProtocol> {

	NSObject*<OS_dispatch_queue> mParameterQueue;
	AUAudioUnit* _audioUnit;

}

@property (assign,nonatomic,__weak) AUAudioUnit * audioUnit;              //@synthesize audioUnit=_audioUnit - In the implementation block
-(id)init;
-(void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)speechSynthesisMetadataAvailable:(id)arg1 speechRequest:(id)arg2 ;
-(void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(BOOL)arg4 ;
-(AUAudioUnit *)audioUnit;
-(void)setAudioUnit:(AUAudioUnit *)arg1 ;
@end

