/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSDate, NSString;


@protocol PGGraphIngestMoment <NSObject>
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) BOOL isSmartInteresting; 
@property (nonatomic,readonly) BOOL isInteresting; 
@property (nonatomic,readonly) BOOL isInterestingWithAlternateJunking; 
@property (nonatomic,readonly) double contentScore; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) unsigned long long numberOfItemsWithPersons; 
@property (nonatomic,readonly) unsigned long long totalNumberOfPersons; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) double inhabitationScore; 
@property (nonatomic,readonly) BOOL hasHigherThanImprovedAssets; 
@property (nonatomic,readonly) BOOL hasAssetsWithInterestingScenes; 
@property (nonatomic,readonly) BOOL containsBetterScoringAsset; 
@property (nonatomic,readonly) BOOL containsNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
@property (nonatomic,readonly) double scenesProcessedRatio; 
@property (nonatomic,readonly) double facesProcessedRatio; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtendedCuration; 
@required
-(BOOL)isInteresting;
-(double)contentScore;
-(BOOL)isSmartInteresting;
-(NSDate *)universalEndDate;
-(BOOL)isInterestingWithAlternateJunking;
-(NSDate *)localStartDate;
-(NSString *)uuid;
-(NSDate *)localEndDate;
-(NSDate *)universalStartDate;
-(unsigned long long)numberOfItems;
-(BOOL)hasHigherThanImprovedAssets;
-(double)inhabitationScore;
-(unsigned long long)numberOfItemsWithPersons;
-(BOOL)containsNonJunkAssets;
-(BOOL)containsBetterScoringAsset;
-(unsigned long long)numberOfRegularGemItems;
-(unsigned long long)numberOfAssetsInExtendedCuration;
-(unsigned long long)totalNumberOfPersons;
-(unsigned long long)numberOfShinyGemItems;
-(BOOL)hasAssetsWithInterestingScenes;
-(double)behavioralScore;
-(double)scenesProcessedRatio;
-(double)facesProcessedRatio;

@end

