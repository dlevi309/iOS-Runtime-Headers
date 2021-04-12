/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBScrunchGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	double _absoluteScale;
	CGPoint _initialCentroid;
	CGPoint _centroid;
	CGPoint _translationWithoutScale;

}

@property (assign,nonatomic) CGPoint initialCentroid;                      //@synthesize initialCentroid=_initialCentroid - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                             //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) double absoluteScale;                         //@synthesize absoluteScale=_absoluteScale - In the implementation block
@property (assign,nonatomic) CGPoint translationWithoutScale;              //@synthesize translationWithoutScale=_translationWithoutScale - In the implementation block
-(long long)type;
-(CGPoint)centroid;
-(void)setCentroid:(CGPoint)arg1 ;
-(CGPoint)initialCentroid;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(double)absoluteScale;
-(void)setAbsoluteScale:(double)arg1 ;
-(void)setTranslationWithoutScale:(CGPoint)arg1 ;
-(CGPoint)translationWithoutScale;
@end

