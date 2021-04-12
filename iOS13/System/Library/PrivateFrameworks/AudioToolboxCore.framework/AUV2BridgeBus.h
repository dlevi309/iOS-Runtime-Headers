/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(id)format;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(id)initWithOwner:(id)arg1 au:(OpaqueAudioComponentInstanceRef)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
@end

