/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/KonaClip.h>

@interface AudioClip : KonaClip {

	BOOL startOffsetValidated;
	BOOL cachedFades;
	int cachedFadeIn;
	int cachedFadeOut;

}

@property (assign,nonatomic) int cachedFadeIn; 
@property (assign,nonatomic) int cachedFadeOut; 
@property (assign,nonatomic) BOOL cachedFades; 
@property (assign,nonatomic) int audioType; 
@property (assign,nonatomic) BOOL startOffsetValidated; 
+(int)defaultAudioTypeForClipType:(int)arg1 ;
+(BOOL)audioEnabledByDefault;
+(int)defaultClipTypeForAudioType:(int)arg1 ;
+(id)backgroundClip;
+(id)soundEffectClip;
-(void)setDuration:(int)arg1 ;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setStartOffset:(int)arg1 ;
-(int)audioType;
-(void)setAudioType:(int)arg1 ;
-(int)startOffset;
-(id)themeID;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(void)setAudioFadeOutDuration:(int)arg1 ;
-(void)setAudioFadeInDuration:(int)arg1 ;
-(int)audioFadeInDuration;
-(int)audioFadeOutDuration;
-(void)setStartOffsetValidated:(BOOL)arg1 ;
-(BOOL)startOffsetValidated;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setThemeID:(id)arg1 ;
-(BOOL)isBackgroundAudio;
-(void)setCachedFades:(BOOL)arg1 ;
-(BOOL)cachedFades;
-(void)setCachedFadeIn:(int)arg1 ;
-(void)setCachedFadeOut:(int)arg1 ;
-(void)validateFades;
-(int)cachedFadeIn;
-(int)cachedFadeOut;
-(id)asBackgroundAudioClip;
-(id)asForegroundAudioClip;
@end

