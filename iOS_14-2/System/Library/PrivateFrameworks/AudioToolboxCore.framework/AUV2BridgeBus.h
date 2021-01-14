/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

@interface AUV2BridgeBus : AUAudioUnitBus {

	AUAudioUnitV2Bridge* _owner;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _scope;
	unsigned _element;

}
-(id)format;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(id)initWithOwner:(id)arg1 au:(OpaqueAudioComponentInstanceRef)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
@end

