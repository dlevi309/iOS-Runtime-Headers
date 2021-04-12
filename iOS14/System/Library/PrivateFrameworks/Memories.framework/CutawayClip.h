/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieClip.h>

@class NSString;

@interface CutawayClip : MovieClip {

	BOOL startOffsetValidated;
	BOOL forcedNoFadeIn;
	BOOL forcedNoFadeOut;
	int forcedDuration;

}

@property (nonatomic,retain) NSString * cutawayName; 
@property (assign,nonatomic) int cutawayDirection; 
@property (assign,nonatomic) BOOL startOffsetValidated; 
@property (assign,nonatomic) CGRect pipRect; 
@property (nonatomic,readonly) CGRect pipRectWithAspectRatio; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) CGPoint cutawayOffset; 
@property (assign,nonatomic) CGPoint underlayOffset; 
@property (nonatomic,readonly) int animateInDuration; 
@property (nonatomic,readonly) int animateOutDuration; 
@property (assign,nonatomic) int cutawayType; 
@property (assign,nonatomic) int forcedDuration; 
@property (assign,nonatomic) BOOL forcedNoFadeIn; 
@property (assign,nonatomic) BOOL forcedNoFadeOut; 
+(id)cutawayWithClip:(id)arg1 type:(int)arg2 ;
-(float)scaleFactor;
-(void)setStartOffset:(int)arg1 ;
-(double)aspectRatio;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(int)startOffset;
-(int)duration;
-(CGRect)pipRect;
-(int)clipType;
-(float)translateY;
-(void)setStartOffsetValidated:(BOOL)arg1 ;
-(BOOL)startOffsetValidated;
-(NSString *)cutawayName;
-(int)cutawayType;
-(int)cutawayDirection;
-(float)translateX;
-(float)maxTranslateX;
-(float)clipValue:(float)arg1 toMax:(float)arg2 ;
-(float)maxTranslateY;
-(void)setCutawayName:(NSString *)arg1 ;
-(CGRect)pipRectWithAspectRatio;
-(CGRect)defaultPIPRect;
-(BOOL)forcedNoFadeIn;
-(BOOL)forcedNoFadeOut;
-(int)forcedDuration;
-(void)didFinishTrimming;
-(void)setForcedDuration:(int)arg1 ;
-(void)setCutawayType:(int)arg1 ;
-(CGRect)rectInRect:(CGRect)arg1 ;
-(void)setPipRect:(CGRect)arg1 ;
-(int)animateInDuration;
-(int)animateOutDuration;
-(void)setCutawayDirection:(int)arg1 ;
-(void)setCutawayOffset:(CGPoint)arg1 ;
-(CGPoint)cutawayOffset;
-(void)setUnderlayOffset:(CGPoint)arg1 ;
-(CGPoint)underlayOffset;
-(void)setForcedNoFadeIn:(BOOL)arg1 ;
-(void)setForcedNoFadeOut:(BOOL)arg1 ;
@end

