/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray;


@protocol UIActivityItemsConfigurationReading <NSObject>
@property (nonatomic,copy,readonly) NSArray * itemProvidersForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForActivityItemsConfiguration; 
@optional
-(id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(CGSize)arg3;
-(id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2;
-(BOOL)activityItemsConfigurationSupportsInteraction:(id)arg1;
-(NSArray *)applicationActivitiesForActivityItemsConfiguration;
-(id)activityItemsConfigurationMetadataForKey:(id)arg1;

@required
-(NSArray *)itemProvidersForActivityItemsConfiguration;

@end

