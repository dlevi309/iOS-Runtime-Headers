/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActivityItemsConfigurationReading.h>

@class NSArray, UIActivityViewController, NSString;

@interface UIActivityItemsConfiguration : NSObject <UIActivityItemsConfigurationReading> {

	NSArray* _itemProviders;
	NSArray* _activityItems;
	UIActivityViewController* _vc;
	NSArray* _excludedActivityTypes;
	id _localObject;
	NSArray* _supportedInteractions;
	/*^block*/id _metadataProvider;
	/*^block*/id _perItemMetadataProvider;
	/*^block*/id _previewProvider;
	/*^block*/id _applicationActivitiesProvider;
	NSArray* __excludedInteractions;

}

@property (nonatomic,readonly) BOOL _hasItemsForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * _activityItems; 
@property (setter=_setExcludedActivityTypes:,nonatomic,copy) NSArray * _excludedActivityTypes; 
@property (setter=_setExcludedInteractions:,nonatomic,copy) NSArray * _excludedInteractions;                   //@synthesize _excludedInteractions=__excludedInteractions - In the implementation block
@property (nonatomic,retain) id localObject;                                                                   //@synthesize localObject=_localObject - In the implementation block
@property (nonatomic,copy) NSArray * supportedInteractions;                                                    //@synthesize supportedInteractions=_supportedInteractions - In the implementation block
@property (nonatomic,copy) id metadataProvider;                                                                //@synthesize metadataProvider=_metadataProvider - In the implementation block
@property (nonatomic,copy) id perItemMetadataProvider;                                                         //@synthesize perItemMetadataProvider=_perItemMetadataProvider - In the implementation block
@property (nonatomic,copy) id previewProvider;                                                                 //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,copy) id applicationActivitiesProvider;                                                   //@synthesize applicationActivitiesProvider=_applicationActivitiesProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemProvidersForActivityItemsConfiguration; 
@property (nonatomic,copy,readonly) NSArray * applicationActivitiesForActivityItemsConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_itemsForSystemSharingFromActivityItemsConfiguration:(id)arg1 wrapperBlock:(/*^block*/id)arg2 ;
+(id)activityItemsConfigurationWithItemProviders:(id)arg1 ;
+(id)activityItemsConfigurationWithObjects:(id)arg1 ;
-(id)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(id)arg2 ;
-(id)localObject;
-(BOOL)activityItemsConfigurationSupportsInteraction:(id)arg1 ;
-(NSArray *)applicationActivitiesForActivityItemsConfiguration;
-(id)activityItemsConfigurationMetadataForKey:(id)arg1 ;
-(NSArray *)itemProvidersForActivityItemsConfiguration;
-(id)_initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(BOOL)_hasItemsForActivityItemsConfiguration;
-(void)setApplicationActivitiesProvider:(id)arg1 ;
-(id)applicationActivitiesProvider;
-(id)_initWithActivityItemSources:(id)arg1 ;
-(id)itemProviders;
-(void)_commonInit;
-(NSArray *)_activityItems;
-(id)previewProvider;
-(id)initWithObjects:(id)arg1 ;
-(void)setPerItemMetadataProvider:(id)arg1 ;
-(id)metadataProvider;
-(void)setLocalObject:(id)arg1 ;
-(void)setSupportedInteractions:(NSArray *)arg1 ;
-(void)_setExcludedInteractions:(id)arg1 ;
-(void)_setExcludedActivityTypes:(id)arg1 ;
-(NSArray *)supportedInteractions;
-(NSArray *)_excludedInteractions;
-(void)setMetadataProvider:(id)arg1 ;
-(void)setPreviewProvider:(id)arg1 ;
-(id)activityItemsForSharing;
-(id)perItemMetadataProvider;
-(id)initWithItemProviders:(id)arg1 ;
-(NSArray *)_excludedActivityTypes;
@end

