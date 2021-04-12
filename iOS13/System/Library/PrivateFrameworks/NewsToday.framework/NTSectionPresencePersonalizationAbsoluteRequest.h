/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NTAbsolutePersonalizedSectionPresenceConfig;
@class FCPersonalizationFeature, NSObject;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying> {

	FCPersonalizationFeature* _feature;
	double _featureClickPrior;
	double _featureImpressionPrior;
	NSObject*<NTAbsolutePersonalizedSectionPresenceConfig> _absolutePresenceConfig;

}

@property (nonatomic,copy) FCPersonalizationFeature * feature;                                                         //@synthesize feature=_feature - In the implementation block
@property (assign,nonatomic) double featureClickPrior;                                                                 //@synthesize featureClickPrior=_featureClickPrior - In the implementation block
@property (assign,nonatomic) double featureImpressionPrior;                                                            //@synthesize featureImpressionPrior=_featureImpressionPrior - In the implementation block
@property (nonatomic,copy) NSObject*<NTAbsolutePersonalizedSectionPresenceConfig> absolutePresenceConfig;              //@synthesize absolutePresenceConfig=_absolutePresenceConfig - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCPersonalizationFeature *)feature;
-(void)setFeature:(FCPersonalizationFeature *)arg1 ;
-(double)featureImpressionPrior;
-(void)setFeatureImpressionPrior:(double)arg1 ;
-(void)setFeatureClickPrior:(double)arg1 ;
-(void)setAbsolutePresenceConfig:(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)arg1 ;
-(double)featureClickPrior;
-(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)absolutePresenceConfig;
@end

