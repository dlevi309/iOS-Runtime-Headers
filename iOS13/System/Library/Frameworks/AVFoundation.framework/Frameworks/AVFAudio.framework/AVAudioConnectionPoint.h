/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {

	AVAudioNode* _node;
	unsigned long long _bus;
	void* _reserved;

}

@property (nonatomic,__weak,readonly) AVAudioNode * node;              //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned long long bus;                 //@synthesize bus=_bus - In the implementation block
+(id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(AVAudioNode *)node;
-(id)initWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(unsigned long long)bus;
@end

