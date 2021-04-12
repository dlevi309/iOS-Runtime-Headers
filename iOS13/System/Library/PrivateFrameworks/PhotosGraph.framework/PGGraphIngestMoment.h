/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@required
-(NSString *)uuid;
-(unsigned long long)numberOfItems;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)behavioralScore;
-(double)contentScore;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(BOOL)isInteresting;
-(BOOL)isSmartInteresting;
-(unsigned long long)numberOfItemsWithPersons;
-(unsigned long long)totalNumberOfPersons;
-(double)inhabitationScore;
-(BOOL)hasHigherThanImprovedAssets;
-(BOOL)hasAssetsWithInterestingScenes;
-(BOOL)containsBetterScoringAsset;
-(BOOL)containsNonJunkAssets;

@end

