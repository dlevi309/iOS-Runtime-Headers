/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>

@class KenBurnsInfo, PVEffect;

@interface IrisMovieClip : MovieClip {

	BOOL _front;
	KenBurnsInfo* _kenBurnsInfo;
	PVEffect* _kenBurnsEffect;

}

@property (assign,getter=isFront,nonatomic) BOOL front;                //@synthesize front=_front - In the implementation block
@property (nonatomic,retain) KenBurnsInfo * kenBurnsInfo;              //@synthesize kenBurnsInfo=_kenBurnsInfo - In the implementation block
@property (nonatomic,retain) PVEffect * kenBurnsEffect;                //@synthesize kenBurnsEffect=_kenBurnsEffect - In the implementation block
+(id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(BOOL)arg3 ;
-(int)maxDuration;
-(id)debugDescription;
-(BOOL)isFront;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(void)validateEffectRange:(SCD_Struct_PM9)arg1 inProject:(id)arg2 ;
-(void)setFront:(BOOL)arg1 ;
-(PVEffect *)kenBurnsEffect;
-(void)setKenBurnsEffect:(PVEffect *)arg1 ;
-(KenBurnsInfo *)kenBurnsInfo;
-(void)setKenBurnsInfo:(KenBurnsInfo *)arg1 ;
@end

