/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FCPersonalizationFeature *)feature;
-(id)init;
-(void)setFeatureImpressionPrior:(double)arg1 ;
-(double)featureImpressionPrior;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFeature:(FCPersonalizationFeature *)arg1 ;
-(void)setFeatureClickPrior:(double)arg1 ;
-(void)setAbsolutePresenceConfig:(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)arg1 ;
-(double)featureClickPrior;
-(NSObject*<NTAbsolutePersonalizedSectionPresenceConfig>)absolutePresenceConfig;
@end

