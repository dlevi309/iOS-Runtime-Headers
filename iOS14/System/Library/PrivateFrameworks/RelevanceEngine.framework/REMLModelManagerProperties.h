/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

