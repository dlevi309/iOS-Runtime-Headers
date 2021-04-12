/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSString, NSDate, NSDictionary;


@protocol FCPersonalizationAggregate <NSObject>
@property (nonatomic,readonly) NSString * featureKey; 
@property (nonatomic,readonly) double clicks; 
@property (nonatomic,readonly) double impressions; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@required
-(double)confidence;
-(NSDictionary *)dictionaryRepresentation;
-(double)impressions;
-(NSDate *)lastModified;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
-(double)powerWithDecayFactor:(double)arg1;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
-(double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
-(double)clicks;
-(double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
-(NSString *)featureKey;
-(unsigned long long)eventCount;

@end

