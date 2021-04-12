/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>

@class PVEffect, KenBurnsInfo;

@interface IrisMovieClip : MovieClip {

	BOOL _front;
	PVEffect* _frameBlendEffect;
	IrisMovieClip* _shiftedClip;
	KenBurnsInfo* _kenBurnsInfo;
	PVEffect* _kenBurnsEffect;

}

@property (assign,getter=isFront,nonatomic) BOOL front;                  //@synthesize front=_front - In the implementation block
@property (nonatomic,retain) KenBurnsInfo * kenBurnsInfo;                //@synthesize kenBurnsInfo=_kenBurnsInfo - In the implementation block
@property (nonatomic,retain) PVEffect * kenBurnsEffect;                  //@synthesize kenBurnsEffect=_kenBurnsEffect - In the implementation block
@property (nonatomic,retain) PVEffect * frameBlendEffect;                //@synthesize frameBlendEffect=_frameBlendEffect - In the implementation block
@property (nonatomic,readonly) IrisMovieClip * shiftedClip;              //@synthesize shiftedClip=_shiftedClip - In the implementation block
+(id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFront;
-(int)maxDuration;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM6)arg1 inProject:(id)arg2 ;
-(void)setFront:(BOOL)arg1 ;
-(PVEffect *)kenBurnsEffect;
-(void)setKenBurnsEffect:(PVEffect *)arg1 ;
-(KenBurnsInfo *)kenBurnsInfo;
-(void)setKenBurnsInfo:(KenBurnsInfo *)arg1 ;
-(PVEffect *)frameBlendEffect;
-(IrisMovieClip *)shiftedClip;
-(void)setFrameBlendEffect:(PVEffect *)arg1 ;
@end

