/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSArray;


@protocol RERelevanceProviderManagerProperties <REExportedInterface>
@property (nonatomic,readonly) NSArray * allRelevanceProviders; 
@property (nonatomic,readonly) unsigned long long scheduledUpdatesCount; 
@property (nonatomic,readonly) BOOL dataSourcesOpened; 
@required
-(NSArray *)allRelevanceProviders;
-(unsigned long long)scheduledUpdatesCount;
-(BOOL)dataSourcesOpened;

@end

