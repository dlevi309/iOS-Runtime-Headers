/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)activityItemsForSharing;
-(NSArray *)itemProvidersForSharing;
-(id)sharingMetadataForKey:(id)arg1;
-(id)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(id)arg2;
-(BOOL)allowsSharing;

@end

