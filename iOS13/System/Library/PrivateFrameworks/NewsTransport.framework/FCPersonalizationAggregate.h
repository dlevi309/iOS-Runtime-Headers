/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

@class NSString, NSDate;


@protocol FCPersonalizationAggregate <NSObject>
@property (nonatomic,readonly) NSString * featureKey; 
@property (nonatomic,readonly) double clicks; 
@property (nonatomic,readonly) double impressions; 
@property (nonatomic,readonly) unsigned long long eventCount; 
@property (nonatomic,readonly) NSDate * lastModified; 
@property (nonatomic,readonly) double confidence; 
@required
-(double)confidence;
-(unsigned long long)eventCount;
-(NSDate *)lastModified;
-(double)impressions;
-(NSString *)featureKey;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
-(double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
-(double)clicks;
-(double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
-(double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
-(double)powerWithDecayFactor:(double)arg1;

@end

