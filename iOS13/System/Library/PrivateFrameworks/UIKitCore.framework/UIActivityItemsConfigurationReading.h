/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray;


@protocol UIActivityItemsConfigurationReading <NSObject>
@property (nonatomic,copy,readonly) NSArray * itemProvidersForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForActivityItemsConfiguration; 
@optional
-(id)activityItemsConfigurationMetadataForKey:(id)arg1;
-(id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
-(BOOL)activityItemsConfigurationSupportsInteraction:(id)arg1;
-(id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(CGSize)arg3;
-(NSArray *)applicationActivitiesForActivityItemsConfiguration;

@required
-(NSArray *)itemProvidersForActivityItemsConfiguration;

@end

