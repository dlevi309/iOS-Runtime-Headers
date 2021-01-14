/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@class PVEffect;

@interface MotionGeneratorClip : KonaClip {

	PVEffect* _generatorEffect;

}

@property (nonatomic,retain) PVEffect * generatorEffect;              //@synthesize generatorEffect=_generatorEffect - In the implementation block
-(int)maxDuration;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isFreezeFrame;
-(PVEffect *)generatorEffect;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM9)arg1 inProject:(id)arg2 ;
-(void)setGeneratorEffect:(PVEffect *)arg1 ;
@end

