/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)clipType;
-(BOOL)isFreezeFrame;
-(PVEffect *)generatorEffect;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasAudioCharacteristic;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM6)arg1 inProject:(id)arg2 ;
-(void)setGeneratorEffect:(PVEffect *)arg1 ;
@end

