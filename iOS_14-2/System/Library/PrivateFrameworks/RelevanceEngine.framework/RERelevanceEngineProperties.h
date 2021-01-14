/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSString, RERelevanceEngineConfiguration, REFeatureSet, NSArray, RELiveElementCoordinator, REDataSourceManager, REMLModelManager;


@protocol RERelevanceEngineProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) RERelevanceEngineConfiguration * configuration; 
@property (nonatomic,readonly) REFeatureSet * rootFeatures; 
@property (nonatomic,readonly) REFeatureSet * mlFeatures; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (nonatomic,readonly) RELiveElementCoordinator * coordinator; 
@property (nonatomic,readonly) REDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) REMLModelManager * modelManager; 
@required
-(NSString *)name;
-(REDataSourceManager *)dataSourceManager;
-(RERelevanceEngineConfiguration *)configuration;
-(NSArray *)subsystems;
-(REMLModelManager *)modelManager;
-(RELiveElementCoordinator *)coordinator;
-(REFeatureSet *)mlFeatures;
-(REFeatureSet *)rootFeatures;

@end

