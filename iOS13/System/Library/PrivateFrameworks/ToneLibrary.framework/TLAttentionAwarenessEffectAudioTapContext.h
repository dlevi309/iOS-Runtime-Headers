/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class TLAttentionAwarenessEffectCoordinator, TLAttentionAwarenessEffectProcessor, NSUUID;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject {

	TLAttentionAwarenessEffectCoordinator* _effectCoordinator;
	TLAttentionAwarenessEffectProcessor* _effectProcessor;
	NSUUID* _identifier;

}

@property (assign,nonatomic,__weak) TLAttentionAwarenessEffectCoordinator * effectCoordinator;              //@synthesize effectCoordinator=_effectCoordinator - In the implementation block
@property (nonatomic,retain) TLAttentionAwarenessEffectProcessor * effectProcessor;                         //@synthesize effectProcessor=_effectProcessor - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(void)setEffectCoordinator:(TLAttentionAwarenessEffectCoordinator *)arg1 ;
-(TLAttentionAwarenessEffectProcessor *)effectProcessor;
-(void)setEffectProcessor:(TLAttentionAwarenessEffectProcessor *)arg1 ;
-(TLAttentionAwarenessEffectCoordinator *)effectCoordinator;
@end

