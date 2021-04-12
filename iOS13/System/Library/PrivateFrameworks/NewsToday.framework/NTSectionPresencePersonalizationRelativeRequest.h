/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCPersonalizationFeature;

@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <NSCopying> {

	FCPersonalizationFeature* _targetSectionFeature;
	double _targetSectionFeatureClickPrior;
	double _targetSectionFeatureImpressionPrior;
	FCPersonalizationFeature* _competingSectionFeature;
	double _competingSectionFeatureClickPrior;
	double _competingSectionFeatureImpressionPrior;
	double _scalar;

}

@property (nonatomic,copy) FCPersonalizationFeature * targetSectionFeature;                 //@synthesize targetSectionFeature=_targetSectionFeature - In the implementation block
@property (assign,nonatomic) double targetSectionFeatureClickPrior;                         //@synthesize targetSectionFeatureClickPrior=_targetSectionFeatureClickPrior - In the implementation block
@property (assign,nonatomic) double targetSectionFeatureImpressionPrior;                    //@synthesize targetSectionFeatureImpressionPrior=_targetSectionFeatureImpressionPrior - In the implementation block
@property (nonatomic,copy) FCPersonalizationFeature * competingSectionFeature;              //@synthesize competingSectionFeature=_competingSectionFeature - In the implementation block
@property (assign,nonatomic) double competingSectionFeatureClickPrior;                      //@synthesize competingSectionFeatureClickPrior=_competingSectionFeatureClickPrior - In the implementation block
@property (assign,nonatomic) double competingSectionFeatureImpressionPrior;                 //@synthesize competingSectionFeatureImpressionPrior=_competingSectionFeatureImpressionPrior - In the implementation block
@property (assign,nonatomic) double scalar;                                                 //@synthesize scalar=_scalar - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScalar:(double)arg1 ;
-(double)scalar;
-(void)setTargetSectionFeature:(FCPersonalizationFeature *)arg1 ;
-(void)setTargetSectionFeatureClickPrior:(double)arg1 ;
-(void)setTargetSectionFeatureImpressionPrior:(double)arg1 ;
-(void)setCompetingSectionFeature:(FCPersonalizationFeature *)arg1 ;
-(void)setCompetingSectionFeatureClickPrior:(double)arg1 ;
-(void)setCompetingSectionFeatureImpressionPrior:(double)arg1 ;
-(FCPersonalizationFeature *)targetSectionFeature;
-(double)targetSectionFeatureClickPrior;
-(double)targetSectionFeatureImpressionPrior;
-(FCPersonalizationFeature *)competingSectionFeature;
-(double)competingSectionFeatureClickPrior;
-(double)competingSectionFeatureImpressionPrior;
@end

