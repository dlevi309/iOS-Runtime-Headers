/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@interface MovieClip : KonaClip
+(id)movieClipWithURL:(id)arg1 ;
+(id)movieClipWithURL:(id)arg1 avAsset:(id)arg2 ;
+(BOOL)audioEnabledByDefault;
-(float)speed;
-(double)aspectRatio;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isFreezeFrame;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(int)rawSourceDuration;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 applyAnamorphic:(BOOL)arg3 ;
-(void)clearFreezeFrame;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
@end

