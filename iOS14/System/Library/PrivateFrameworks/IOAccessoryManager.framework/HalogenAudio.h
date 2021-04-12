/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
*/


@protocol HalogenAudioDelegate;
#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@interface HalogenAudio : NSObject {

	id<HalogenAudioDelegate> _halogenUnitDelegate;
	OpaqueAudioComponentInstanceRef _audioComponentInst;

}

@property (assign) OpaqueAudioComponentInstanceRef audioComponentInst;                  //@synthesize audioComponentInst=_audioComponentInst - In the implementation block
@property (nonatomic,retain) id<HalogenAudioDelegate> halogenUnitDelegate;              //@synthesize halogenUnitDelegate=_halogenUnitDelegate - In the implementation block
-(void)dealloc;
-(id)initAudioWithParameters:(id)arg1 nInputChannels:(int)arg2 nOutputChannels:(int)arg3 sampleRate:(int)arg4 bitDepth:(int)arg5 inputFrameSizeInBytes:(int)arg6 outputFrameSizeInBytes:(int)arg7 ;
-(OpaqueAudioComponentInstanceRef)getAudioComponentInstance;
-(int)startAudioUnit;
-(int)stopAudioUnit;
-(OpaqueAudioComponentInstanceRef)audioComponentInst;
-(void)setAudioComponentInst:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)setHalogenUnitDelegate:(id<HalogenAudioDelegate>)arg1 ;
-(id<HalogenAudioDelegate>)halogenUnitDelegate;
@end

