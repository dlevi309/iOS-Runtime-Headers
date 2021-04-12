/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@interface MovieClip : KonaClip
+(id)movieClipWithURL:(id)arg1 ;
+(id)movieClipWithURL:(id)arg1 avAsset:(id)arg2 ;
+(BOOL)audioEnabledByDefault;
-(double)aspectRatio;
-(float)speed;
-(int)clipType;
-(BOOL)isFreezeFrame;
-(BOOL)hasVisualCharacteristic;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(BOOL)hasAudioCharacteristic;
-(int)rawSourceDuration;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 applyAnamorphic:(BOOL)arg3 ;
-(void)clearFreezeFrame;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
@end

