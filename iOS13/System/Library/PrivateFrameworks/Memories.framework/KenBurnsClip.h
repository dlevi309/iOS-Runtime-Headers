/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>

@class PVEffect, NSString, KenBurnsInfo;

@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions> {

	unsigned long long _animationStyle;
	BOOL _originalIsHEIF;
	PVEffect* _kbGeneratorEffect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PVEffect * kbGeneratorEffect;                 //@synthesize kbGeneratorEffect=_kbGeneratorEffect - In the implementation block
@property (nonatomic,retain) KenBurnsInfo * kbInfo; 
@property (nonatomic,readonly) PVEffect * kbEffect; 
@property (assign,nonatomic) unsigned long long animationStyle;              //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) BOOL originalIsHEIF;                            //@synthesize originalIsHEIF=_originalIsHEIF - In the implementation block
+(id)kenBurnsClipWithURL:(id)arg1 ;
+(id)kenBurnsClipWithAssetRepresentation:(id)arg1 ;
+(id)kenBurnsClipWithMovie:(id)arg1 ;
+(id)kenBurnsClipWithPath:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPortrait;
-(double)aspectRatio;
-(void)setAnimationStyle:(unsigned long long)arg1 ;
-(unsigned long long)animationStyle;
-(BOOL)isLandscape;
-(BOOL)isSquare;
-(BOOL)isTall;
-(BOOL)isPano;
-(int)clipType;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(double)autoEditShortestDurationWithBlueprint:(id)arg1 ;
-(double)autoEditShortestIdealDurationWithBlueprint:(id)arg1 ;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(double)panoDurationMultiplier;
-(KenBurnsInfo *)kbInfo;
-(id)animationEffectID;
-(PVEffect *)kbGeneratorEffect;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(BOOL)originalIsHEIF;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setKbInfo:(KenBurnsInfo *)arg1 ;
-(void)setOriginalIsHEIF:(BOOL)arg1 ;
-(void)validateEffectRange:(SCD_Struct_PM6)arg1 inProject:(id)arg2 ;
-(PVEffect *)kbEffect;
-(double)mediaAspectRatio;
@end

