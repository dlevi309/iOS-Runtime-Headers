/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)centroid;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(void)setCentroid:(CGPoint)arg1 ;
-(CGPoint)initialCentroid;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAbsoluteScale:(double)arg1 ;
-(double)absoluteScale;
-(void)setTranslationWithoutScale:(CGPoint)arg1 ;
-(CGPoint)translationWithoutScale;
@end

