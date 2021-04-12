/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class REMLModel, REContentRanker, NSArray;


@protocol REMLModelManagerProperties <REExportedInterface>
@property (nonatomic,readonly) unsigned long long modelVersionNumber; 
@property (nonatomic,readonly) REMLModel * model; 
@property (nonatomic,readonly) REContentRanker * contentRanker; 
@property (nonatomic,readonly) BOOL supportsContentRanking; 
@property (nonatomic,readonly) NSArray * orderedFeatures; 
@required
-(REMLModel *)model;
-(unsigned long long)modelVersionNumber;
-(REContentRanker *)contentRanker;
-(BOOL)supportsContentRanking;
-(NSArray *)orderedFeatures;

@end

