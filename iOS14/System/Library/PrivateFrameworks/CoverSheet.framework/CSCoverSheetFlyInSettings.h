/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetFlyInSettings : PTSettings {

	BOOL _centerFollowsFinger;
	BOOL _animateIconsOnPresentationToo;
	double _iconsFlyInInteractiveResponseMin;
	double _iconsFlyInInteractiveResponseMax;
	double _iconsFlyInInteractiveDampingRatioMin;
	double _iconsFlyInInteractiveDampingRatioMax;
	double _iconsFlyInTension;
	double _iconsFlyInFriction;
	double _slomoRate;
	double _baselineDistance;
	double _effectMultiplier;
	double _distanceExponent;

}

@property (assign,nonatomic) BOOL centerFollowsFinger;                                 //@synthesize centerFollowsFinger=_centerFollowsFinger - In the implementation block
@property (assign,nonatomic) BOOL animateIconsOnPresentationToo;                       //@synthesize animateIconsOnPresentationToo=_animateIconsOnPresentationToo - In the implementation block
@property (assign,nonatomic) double iconsFlyInInteractiveResponseMin;                  //@synthesize iconsFlyInInteractiveResponseMin=_iconsFlyInInteractiveResponseMin - In the implementation block
@property (assign,nonatomic) double iconsFlyInInteractiveResponseMax;                  //@synthesize iconsFlyInInteractiveResponseMax=_iconsFlyInInteractiveResponseMax - In the implementation block
@property (assign,nonatomic) double iconsFlyInInteractiveDampingRatioMin;              //@synthesize iconsFlyInInteractiveDampingRatioMin=_iconsFlyInInteractiveDampingRatioMin - In the implementation block
@property (assign,nonatomic) double iconsFlyInInteractiveDampingRatioMax;              //@synthesize iconsFlyInInteractiveDampingRatioMax=_iconsFlyInInteractiveDampingRatioMax - In the implementation block
@property (assign,nonatomic) double iconsFlyInTension;                                 //@synthesize iconsFlyInTension=_iconsFlyInTension - In the implementation block
@property (assign,nonatomic) double iconsFlyInFriction;                                //@synthesize iconsFlyInFriction=_iconsFlyInFriction - In the implementation block
@property (assign,nonatomic) double slomoRate;                                         //@synthesize slomoRate=_slomoRate - In the implementation block
@property (assign,nonatomic) double baselineDistance;                                  //@synthesize baselineDistance=_baselineDistance - In the implementation block
@property (assign,nonatomic) double effectMultiplier;                                  //@synthesize effectMultiplier=_effectMultiplier - In the implementation block
@property (assign,nonatomic) double distanceExponent;                                  //@synthesize distanceExponent=_distanceExponent - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(BOOL)centerFollowsFinger;
-(void)setCenterFollowsFinger:(BOOL)arg1 ;
-(BOOL)animateIconsOnPresentationToo;
-(void)setAnimateIconsOnPresentationToo:(BOOL)arg1 ;
-(double)baselineDistance;
-(double)effectMultiplier;
-(double)distanceExponent;
-(double)iconsFlyInInteractiveResponseMin;
-(double)iconsFlyInInteractiveResponseMax;
-(double)iconsFlyInInteractiveDampingRatioMin;
-(double)iconsFlyInInteractiveDampingRatioMax;
-(double)iconsFlyInTension;
-(double)iconsFlyInFriction;
-(void)setIconsFlyInInteractiveResponseMin:(double)arg1 ;
-(void)setIconsFlyInInteractiveResponseMax:(double)arg1 ;
-(void)setIconsFlyInInteractiveDampingRatioMin:(double)arg1 ;
-(void)setIconsFlyInInteractiveDampingRatioMax:(double)arg1 ;
-(void)setIconsFlyInTension:(double)arg1 ;
-(void)setIconsFlyInFriction:(double)arg1 ;
-(void)setSlomoRate:(double)arg1 ;
-(void)setBaselineDistance:(double)arg1 ;
-(void)setEffectMultiplier:(double)arg1 ;
-(void)setDistanceExponent:(double)arg1 ;
-(double)slomoRate;
@end

