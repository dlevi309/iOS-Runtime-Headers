/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)description;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEffectCoordinator:(TLAttentionAwarenessEffectCoordinator *)arg1 ;
-(TLAttentionAwarenessEffectProcessor *)effectProcessor;
-(void)setEffectProcessor:(TLAttentionAwarenessEffectProcessor *)arg1 ;
-(TLAttentionAwarenessEffectCoordinator *)effectCoordinator;
@end

