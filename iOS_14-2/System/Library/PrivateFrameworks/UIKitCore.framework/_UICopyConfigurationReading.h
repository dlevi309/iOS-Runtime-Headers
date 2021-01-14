/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray;


@protocol _UICopyConfigurationReading <UIActivityItemsConfigurationReading>
@property (nonatomic,readonly) BOOL allowsSharing; 
@property (nonatomic,copy,readonly) NSArray * itemProvidersForSharing; 
@property (nonatomic,copy,readonly) NSArray * activityItemsForSharing; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForSharing; 
@optional
-(NSArray *)applicationActivitiesForSharing;

@required
-(BOOL)allowsSharing;
-(NSArray *)itemProvidersForSharing;
-(id)sharingMetadataForKey:(id)arg1;
-(id)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(id)arg2;
-(NSArray *)activityItemsForSharing;

@end

