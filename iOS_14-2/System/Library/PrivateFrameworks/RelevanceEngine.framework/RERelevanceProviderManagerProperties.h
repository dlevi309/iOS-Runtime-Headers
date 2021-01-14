/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

